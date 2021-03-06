#ifndef KALDI_RNNLM_UTILS_H_
#define KALDI_RNNLM_UTILS_H_

#include "util/stl-utils.h"
#include "base/kaldi-common.h"
#include "util/common-utils.h"
#include "nnet3/nnet-example.h"
#include "nnet3/nnet-diagnostics.h"

#include <fstream>
#include <sstream>
#include <vector>
#include <string>


using std::string;
using std::ifstream;
using std::ofstream;
using std::vector;

namespace kaldi {
namespace rnnlm {

using nnet3::NnetExample;

const int OOS_ID = 1;

vector<string> SplitByWhiteSpace(const string &line);

unordered_map<string, int> ReadWordlist(string filename);

NnetExample GetEgsFromSent(const vector<int>& word_ids_in, int input_dim,
                           const vector<int>& word_ids_out, int output_dim);

vector<int> Select(const vector<BaseFloat> &u, int n);

} // namespace nnet3
} // namespace kaldi

#endif // KALDI_RNNLM_UTILS_H_

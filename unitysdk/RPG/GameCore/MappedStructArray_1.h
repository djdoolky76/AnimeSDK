#pragma once
#include "unitysdk/unitysdk.h"
class OBDNNGAILDC;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }

namespace RPG::GameCore
{
	template <typename T>
	class MappedStructArray_1
	{
	public:
		::System::String* _path; // 0x0
		::System::Func_4<::OBDNNGAILDC*, ::System::Int64, ::System::Int32, T>* _parser; // 0x0
	};
}

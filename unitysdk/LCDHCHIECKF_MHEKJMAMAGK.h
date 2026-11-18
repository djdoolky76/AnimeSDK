#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LCDHCHIECKF;
class LNODBDPJGFL;
namespace System { template <typename T> class Action_1; }

#define LCDHCHIECKF_MHEKJMAMAGK_BKKBNNCEDGO_OFFSET UNITYSDK_OFFSET(0x1793FD90)
#define LCDHCHIECKF_MHEKJMAMAGK__CTOR_OFFSET UNITYSDK_OFFSET(0x1793FD80)

inline static constexpr unsigned int LCDHCHIECKF_MHEKJMAMAGK_TypeDefinitionIndex = 77311;

class LCDHCHIECKF_MHEKJMAMAGK : public ::System::Object
{
public:
	::LCDHCHIECKF* KLHPEBKNIFB; // 0x10
	::System::Action_1<::LNODBDPJGFL*>* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDHCHIECKF_MHEKJMAMAGK__CTOR_OFFSET))(this);
	}

	::System::Void BKKBNNCEDGO(::System::Object* KHILBNJIAKA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LCDHCHIECKF_MHEKJMAMAGK_BKKBNNCEDGO_OFFSET))(this, KHILBNJIAKA);
	}
};

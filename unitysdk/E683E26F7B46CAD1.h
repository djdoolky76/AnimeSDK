#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F3D2F185626D0E4E.h"

namespace System { template <typename T1, typename T2> class Action_2; }

#define E683E26F7B46CAD1_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x22C6770)
#define E683E26F7B46CAD1__CTOR_OFFSET UNITYSDK_OFFSET(0x16572C0)

inline static constexpr unsigned int E683E26F7B46CAD1_TypeDefinitionIndex = 7247;

class E683E26F7B46CAD1 : public ::F3D2F185626D0E4E
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E683E26F7B46CAD1__CTOR_OFFSET))(this);
	}

	::System::Void EC3033C0485522FB(::System::UInt32 AE57FF5179B75168, ::System::Action_2<::System::UInt32, ::System::Boolean>* B27ED08B9DFA3EE1, ::System::Boolean F1AACB3553F67303)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_2<::System::UInt32, ::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + E683E26F7B46CAD1_EC3033C0485522FB_OFFSET))(this, AE57FF5179B75168, B27ED08B9DFA3EE1, F1AACB3553F67303);
	}
};

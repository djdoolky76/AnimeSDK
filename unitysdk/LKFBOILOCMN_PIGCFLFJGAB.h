#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define LKFBOILOCMN_PIGCFLFJGAB_CGJEJOICOMD_OFFSET UNITYSDK_OFFSET(0x158F3F00)
#define LKFBOILOCMN_PIGCFLFJGAB__CTOR_OFFSET UNITYSDK_OFFSET(0x158F3EF0)

inline static constexpr unsigned int LKFBOILOCMN_PIGCFLFJGAB_TypeDefinitionIndex = 82641;

class LKFBOILOCMN_PIGCFLFJGAB : public ::System::Object
{
public:
	::System::Action* KMHAPMLAIDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFBOILOCMN_PIGCFLFJGAB__CTOR_OFFSET))(this);
	}

	::System::Void CGJEJOICOMD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFBOILOCMN_PIGCFLFJGAB_CGJEJOICOMD_OFFSET))(this);
	}
};

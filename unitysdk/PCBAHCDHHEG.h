#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define PCBAHCDHHEG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7E36E0)

inline static constexpr unsigned int PCBAHCDHHEG_TypeDefinitionIndex = 84777;

class PCBAHCDHHEG : public ::System::Object
{
public:
	::System::Action* OPGLCKADMEI; // 0x10
	::System::Int32 BABIHDEGHAB; // 0x18
	::System::Int32 OIKFFGKDHME; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBAHCDHHEG__CTOR_OFFSET))(this);
	}
};

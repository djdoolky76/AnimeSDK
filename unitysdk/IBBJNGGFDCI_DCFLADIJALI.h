#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBBJNGGFDCI;
namespace System { class Action; }

#define IBBJNGGFDCI_DCFLADIJALI_LLGEMBIJILP_OFFSET UNITYSDK_OFFSET(0x181A3CA0)
#define IBBJNGGFDCI_DCFLADIJALI__CTOR_OFFSET UNITYSDK_OFFSET(0x181A3C90)

inline static constexpr unsigned int IBBJNGGFDCI_DCFLADIJALI_TypeDefinitionIndex = 44361;

class IBBJNGGFDCI_DCFLADIJALI : public ::System::Object
{
public:
	::IBBJNGGFDCI* KLHPEBKNIFB; // 0x10
	::System::Action* PABLEDCGDGM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBBJNGGFDCI_DCFLADIJALI__CTOR_OFFSET))(this);
	}

	::System::Void LLGEMBIJILP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBBJNGGFDCI_DCFLADIJALI_LLGEMBIJILP_OFFSET))(this);
	}
};

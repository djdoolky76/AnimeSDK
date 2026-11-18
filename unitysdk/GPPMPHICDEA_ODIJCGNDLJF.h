#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIControllerContextBase; }

#define GPPMPHICDEA_ODIJCGNDLJF_PFNBIIHJKIC_OFFSET UNITYSDK_OFFSET(0x17A31440)
#define GPPMPHICDEA_ODIJCGNDLJF__CTOR_OFFSET UNITYSDK_OFFSET(0x17A31430)

inline static constexpr unsigned int GPPMPHICDEA_ODIJCGNDLJF_TypeDefinitionIndex = 42622;

class GPPMPHICDEA_ODIJCGNDLJF : public ::System::Object
{
public:
	::MoleMole::UIControllerContextBase* PJCLCLCNDCG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_ODIJCGNDLJF__CTOR_OFFSET))(this);
	}

	::System::Void PFNBIIHJKIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_ODIJCGNDLJF_PFNBIIHJKIC_OFFSET))(this);
	}
};

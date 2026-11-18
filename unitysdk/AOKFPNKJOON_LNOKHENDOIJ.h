#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UILevelResultPageContext; }

#define AOKFPNKJOON_LNOKHENDOIJ_FPOJJPBCGLM_OFFSET UNITYSDK_OFFSET(0x143BD110)
#define AOKFPNKJOON_LNOKHENDOIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x143BD100)

inline static constexpr unsigned int AOKFPNKJOON_LNOKHENDOIJ_TypeDefinitionIndex = 51475;

class AOKFPNKJOON_LNOKHENDOIJ : public ::System::Object
{
public:
	::MoleMole::UILevelResultPageContext* EIGKAEDGFFH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_LNOKHENDOIJ__CTOR_OFFSET))(this);
	}

	::System::Void FPOJJPBCGLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_LNOKHENDOIJ_FPOJJPBCGLM_OFFSET))(this);
	}
};

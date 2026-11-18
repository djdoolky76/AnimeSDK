#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRABLevelBossPageController_Context; }

#define GHGBOALCBGF_EHANPDCIDMN_DPCPPKOMGJP_OFFSET UNITYSDK_OFFSET(0x10FD8BC0)
#define GHGBOALCBGF_EHANPDCIDMN__CTOR_OFFSET UNITYSDK_OFFSET(0x10FD8BB0)

inline static constexpr unsigned int GHGBOALCBGF_EHANPDCIDMN_TypeDefinitionIndex = 60519;

class GHGBOALCBGF_EHANPDCIDMN : public ::System::Object
{
public:
	::MoleMole::UIRABLevelBossPageController_Context* PJCLCLCNDCG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHGBOALCBGF_EHANPDCIDMN__CTOR_OFFSET))(this);
	}

	::System::Void DPCPPKOMGJP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHGBOALCBGF_EHANPDCIDMN_DPCPPKOMGJP_OFFSET))(this);
	}
};

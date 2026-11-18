#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FKPDHCMBLIE;
namespace MoleMole { class UIBangkovTalentPointWidgetController; }

#define FKPDHCMBLIE_EEDAINHJPCN_MPHMKIMCJFM_OFFSET UNITYSDK_OFFSET(0x14ADB670)
#define FKPDHCMBLIE_EEDAINHJPCN__CTOR_OFFSET UNITYSDK_OFFSET(0x14ADB660)

inline static constexpr unsigned int FKPDHCMBLIE_EEDAINHJPCN_TypeDefinitionIndex = 72820;

class FKPDHCMBLIE_EEDAINHJPCN : public ::System::Object
{
public:
	::FKPDHCMBLIE* KLHPEBKNIFB; // 0x10
	::MoleMole::UIBangkovTalentPointWidgetController* NCIMBHDKIJM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPDHCMBLIE_EEDAINHJPCN__CTOR_OFFSET))(this);
	}

	::System::Void MPHMKIMCJFM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPDHCMBLIE_EEDAINHJPCN_MPHMKIMCJFM_OFFSET))(this);
	}
};

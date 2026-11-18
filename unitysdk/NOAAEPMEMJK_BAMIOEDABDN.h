#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NOAAEPMEMJK;
namespace MoleMole { class UIScaryNightInLevelSmallCardWidgetController; }

#define NOAAEPMEMJK_BAMIOEDABDN_DKGBCKCFEEH_OFFSET UNITYSDK_OFFSET(0x11F8DC20)
#define NOAAEPMEMJK_BAMIOEDABDN_KKCHKFIAHJJ_OFFSET UNITYSDK_OFFSET(0x11F8DB10)
#define NOAAEPMEMJK_BAMIOEDABDN__CTOR_OFFSET UNITYSDK_OFFSET(0x11F8DAF0)

inline static constexpr unsigned int NOAAEPMEMJK_BAMIOEDABDN_TypeDefinitionIndex = 42050;

class NOAAEPMEMJK_BAMIOEDABDN : public ::System::Object
{
public:
	::NOAAEPMEMJK* KLHPEBKNIFB; // 0x10
	::MoleMole::UIScaryNightInLevelSmallCardWidgetController* MNOMCCLBJAO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAAEPMEMJK_BAMIOEDABDN__CTOR_OFFSET))(this);
	}

	::System::Void KKCHKFIAHJJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAAEPMEMJK_BAMIOEDABDN_KKCHKFIAHJJ_OFFSET))(this);
	}

	::System::Void DKGBCKCFEEH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAAEPMEMJK_BAMIOEDABDN_DKGBCKCFEEH_OFFSET))(this);
	}
};

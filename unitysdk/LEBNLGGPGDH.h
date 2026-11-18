#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/UIAbyssS2RoleChallengeListWidgetController_AvatarEntranceType.h"
#include "unitysdk/MoleMole/UIAbyssS2RoleChallengeWidgetController_DifficultyType.h"
#include "unitysdk/System/Object.h"

class GADAMOACKNE;
class LBNBIMMAOPJ;
class MEKACGJBPGE;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LEBNLGGPGDH_MEOLEKBNKPO_OFFSET UNITYSDK_OFFSET(0x1A604B30)
#define LEBNLGGPGDH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A604B20)

inline static constexpr unsigned int LEBNLGGPGDH_TypeDefinitionIndex = 42562;

class LEBNLGGPGDH : public ::System::Object
{
public:
	::MEKACGJBPGE* LIHBLEELGJA; // 0x10
	::LBNBIMMAOPJ* AHPHMKPFDIK; // 0x18
	::System::Collections::Generic::List_1<::GADAMOACKNE*>* POCEGPHNJNJ; // 0x20
	::System::Int32 PBHCBNCAHMI; // 0x28
	::System::Boolean GNFAABJPKPN; // 0x2C
	::System::Byte _padding0[0x3];
	::System::Int32 CKELOFDFEEM; // 0x30
	::MoleMole::UIAbyssS2RoleChallengeListWidgetController_AvatarEntranceType CKLNBOJACKC; // 0x34
	::MoleMole::Level::RatingType EGODKLPFBFF; // 0x38
	::System::Int32 FNIOPKPHDEH; // 0x3C
	::MoleMole::UIAbyssS2RoleChallengeWidgetController_DifficultyType LHHIIDPIJJB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEBNLGGPGDH__CTOR_OFFSET))(this);
	}

	::System::Boolean MEOLEKBNKPO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEBNLGGPGDH_MEOLEKBNKPO_OFFSET))(this);
	}
};

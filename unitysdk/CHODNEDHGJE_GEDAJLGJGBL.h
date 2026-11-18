#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/System/Object.h"

class CHODNEDHGJE_CLPFHEAOBPP;
namespace MoleMole { template <typename T> class ConfigLazyLoadItem_1; }
namespace MoleMole::Config { class ConfigSubSystemSettingBase; }

#define CHODNEDHGJE_GEDAJLGJGBL_FKEJFEDKCME_OFFSET UNITYSDK_OFFSET(0x1970C0A0)
#define CHODNEDHGJE_GEDAJLGJGBL__CTOR_OFFSET UNITYSDK_OFFSET(0x197093A0)

inline static constexpr unsigned int CHODNEDHGJE_GEDAJLGJGBL_TypeDefinitionIndex = 88592;

class CHODNEDHGJE_GEDAJLGJGBL : public ::System::Object
{
public:
	::MoleMole::ConfigLazyLoadItem_1<::MoleMole::Config::ConfigSubSystemSettingBase*>* DDKMPEAPCOD; // 0x10
	::CHODNEDHGJE_CLPFHEAOBPP* FGBNBFHOKAA; // 0x18
	::MoleMole::ESystemSettingType KNLHNJJGLBA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHODNEDHGJE_GEDAJLGJGBL__CTOR_OFFSET))(this);
	}

	::System::Void FKEJFEDKCME()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHODNEDHGJE_GEDAJLGJGBL_FKEJFEDKCME_OFFSET))(this);
	}
};

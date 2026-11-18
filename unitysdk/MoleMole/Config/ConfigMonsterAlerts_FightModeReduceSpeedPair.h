#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/FightModeType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_FIGHTMODEREDUCESPEEDPAIR_TODICTIONARY_OFFSET UNITYSDK_OFFSET(0x131E88E0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_FIGHTMODEREDUCESPEEDPAIR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x131E7EF0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_FIGHTMODEREDUCESPEEDPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x131E8A70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMonsterAlerts_FightModeReduceSpeedPair_TypeDefinitionIndex = 85196;

	class ConfigMonsterAlerts_FightModeReduceSpeedPair : public ::System::Object
	{
	public:
		::MoleMole::Config::FightModeType key; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_FIGHTMODEREDUCESPEEDPAIR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MoleMole::Config::FightModeType k, ::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>* v)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::FightModeType, ::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_FIGHTMODEREDUCESPEEDPAIR__CTOR_1_OFFSET))(this, k, v);
		}

		::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>* ToDictionary()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_FIGHTMODEREDUCESPEEDPAIR_TODICTIONARY_OFFSET))(this);
		}
	};
}

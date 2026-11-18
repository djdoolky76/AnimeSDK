#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNDIFMAINIM;
namespace MoleMole::Config { class ConfigMonsterAlerts_ConfigMonsterAlertItemSurrogate; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_KEYVALUEINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x12775EE0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_KEYVALUEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x12775ED0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMonsterAlerts_KeyValueInfo_TypeDefinitionIndex = 85199;

	class ConfigMonsterAlerts_KeyValueInfo : public ::System::Object
	{
	public:
		::System::String* keyInst; // 0x10
		::MoleMole::Config::ConfigMonsterAlerts_ConfigMonsterAlertItemSurrogate* valueInst; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_KEYVALUEINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* _keyInst, ::PNDIFMAINIM* _valueInst)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::PNDIFMAINIM*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_KEYVALUEINFO__CTOR_1_OFFSET))(this, _keyInst, _valueInst);
		}
	};
}

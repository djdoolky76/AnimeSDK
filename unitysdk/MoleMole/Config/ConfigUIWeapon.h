#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class WeaponInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGUIWEAPON_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BA44FA0)
#define MOLEMOLE_CONFIG_CONFIGUIWEAPON_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BA44DA0)
#define MOLEMOLE_CONFIG_CONFIGUIWEAPON__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA45240)
#define MOLEMOLE_CONFIG_CONFIGUIWEAPON___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BA453A0)
#define MOLEMOLE_CONFIG_CONFIGUIWEAPON___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BA453B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIWeapon_TypeDefinitionIndex = 63649;

	class ConfigUIWeapon : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::WeaponInfo*>* WeaponGroups; // 0x58
		::System::Collections::Generic::List_1<::System::Object*>* KeyValueInfoList; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIWEAPON__CTOR_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIWEAPON_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIWEAPON_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIWEAPON___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIWEAPON___BASE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}

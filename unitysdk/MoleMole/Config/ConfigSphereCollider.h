#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBGABOFHFHL.h"
#include "unitysdk/MoleMole/Config/ConfigTimeDrivenAttackCollider.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSPHERECOLLIDER_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x11EA1C00)
#define MOLEMOLE_CONFIG_CONFIGSPHERECOLLIDER_CLEAN_OFFSET UNITYSDK_OFFSET(0x11EA1DB0)
#define MOLEMOLE_CONFIG_CONFIGSPHERECOLLIDER_DEALLOCATE_OFFSET UNITYSDK_OFFSET(0x11EA1C90)
#define MOLEMOLE_CONFIG_CONFIGSPHERECOLLIDER_GETCOLLIDERTYPE_OFFSET UNITYSDK_OFFSET(0x11EA1E20)
#define MOLEMOLE_CONFIG_CONFIGSPHERECOLLIDER_GETLAYERMASK_OFFSET UNITYSDK_OFFSET(0x11EA1EF0)
#define MOLEMOLE_CONFIG_CONFIGSPHERECOLLIDER_GETPREFABNAME_OFFSET UNITYSDK_OFFSET(0x11EA1E70)
#define MOLEMOLE_CONFIG_CONFIGSPHERECOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x11EA1F80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSphereCollider_TypeDefinitionIndex = 52756;

	class ConfigSphereCollider : public ::MoleMole::Config::ConfigTimeDrivenAttackCollider
	{
	public:
		::System::Single radius; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPHERECOLLIDER__CTOR_OFFSET))(this);
		}

		static ::MoleMole::Config::ConfigSphereCollider* Allocate()
		{
			return ((::MoleMole::Config::ConfigSphereCollider*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPHERECOLLIDER_ALLOCATE_OFFSET))();
		}

		static ::System::Void Deallocate(::MoleMole::Config::ConfigSphereCollider*& collider)
		{
			return ((::System::Void(*)(::MoleMole::Config::ConfigSphereCollider*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPHERECOLLIDER_DEALLOCATE_OFFSET))(collider);
		}

		::System::Void Clean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPHERECOLLIDER_CLEAN_OFFSET))(this);
		}

		::EBGABOFHFHL GetColliderType()
		{
			return ((::EBGABOFHFHL(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPHERECOLLIDER_GETCOLLIDERTYPE_OFFSET))(this);
		}

		::System::String* GetPrefabName(::System::Boolean isConfigurablePrefab)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPHERECOLLIDER_GETPREFABNAME_OFFSET))(this, isConfigurablePrefab);
		}

		::System::String* GetLayerMask()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPHERECOLLIDER_GETLAYERMASK_OFFSET))(this);
		}
	};
}

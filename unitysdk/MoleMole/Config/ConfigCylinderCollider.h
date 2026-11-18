#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBGABOFHFHL.h"
#include "unitysdk/MoleMole/Config/ConfigTimeDrivenAttackCollider.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCYLINDERCOLLIDER_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x1B914710)
#define MOLEMOLE_CONFIG_CONFIGCYLINDERCOLLIDER_CLEAN_OFFSET UNITYSDK_OFFSET(0x1B9148C0)
#define MOLEMOLE_CONFIG_CONFIGCYLINDERCOLLIDER_DEALLOCATE_OFFSET UNITYSDK_OFFSET(0x1B9147A0)
#define MOLEMOLE_CONFIG_CONFIGCYLINDERCOLLIDER_GETCOLLIDERTYPE_OFFSET UNITYSDK_OFFSET(0x1B914930)
#define MOLEMOLE_CONFIG_CONFIGCYLINDERCOLLIDER_GETLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1B914A00)
#define MOLEMOLE_CONFIG_CONFIGCYLINDERCOLLIDER_GETPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1B914980)
#define MOLEMOLE_CONFIG_CONFIGCYLINDERCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B914A90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCylinderCollider_TypeDefinitionIndex = 89118;

	class ConfigCylinderCollider : public ::MoleMole::Config::ConfigTimeDrivenAttackCollider
	{
	public:
		::System::Single height; // 0x28
		::System::Single radius; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCYLINDERCOLLIDER__CTOR_OFFSET))(this);
		}

		static ::MoleMole::Config::ConfigCylinderCollider* Allocate()
		{
			return ((::MoleMole::Config::ConfigCylinderCollider*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCYLINDERCOLLIDER_ALLOCATE_OFFSET))();
		}

		static ::System::Void Deallocate(::MoleMole::Config::ConfigCylinderCollider*& collider)
		{
			return ((::System::Void(*)(::MoleMole::Config::ConfigCylinderCollider*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCYLINDERCOLLIDER_DEALLOCATE_OFFSET))(collider);
		}

		::System::Void Clean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCYLINDERCOLLIDER_CLEAN_OFFSET))(this);
		}

		::EBGABOFHFHL GetColliderType()
		{
			return ((::EBGABOFHFHL(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCYLINDERCOLLIDER_GETCOLLIDERTYPE_OFFSET))(this);
		}

		::System::String* GetPrefabName(::System::Boolean isConfigurablePrefab)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCYLINDERCOLLIDER_GETPREFABNAME_OFFSET))(this, isConfigurablePrefab);
		}

		::System::String* GetLayerMask()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCYLINDERCOLLIDER_GETLAYERMASK_OFFSET))(this);
		}
	};
}

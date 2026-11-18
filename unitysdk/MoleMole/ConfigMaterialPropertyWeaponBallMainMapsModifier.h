#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/UnityEngine/Color.h"

class ILLCEFBALCI;

#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1654EE30)
#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1654ED20)
#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1654FD10)
#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1654EA30)
#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1654EFB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1654EE90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1654F020)
#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1654F4D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1654F330)
#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1654F1E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1654FDA0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyWeaponBallMainMapsModifier_TypeDefinitionIndex = 80004;

	class ConfigMaterialPropertyWeaponBallMainMapsModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueFloat _Smoothness; // 0x48
		::System::Single _SmoothnessDefault; // 0x50
		::System::Single _MetallicDefault; // 0x54
		::UnityEngine::Color _BaseColorDefault; // 0x58
		::System::Single _SmoothnessRef; // 0x68
		::MoleMole::MaterialPropertyModifierValueColor _BaseColor; // 0x6C
		::MoleMole::MaterialPropertyModifierValueFloat _Metallic; // 0x80
		::UnityEngine::Color _BaseColorRef; // 0x88
		::System::Single _MetallicRef; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::ILLCEFBALCI* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}

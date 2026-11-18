#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"

class ILLCEFBALCI;

#define MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1654AB20)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1654AA60)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1654B830)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1654A900)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1654AC10)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1654AB80)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1654AC50)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1654B110)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1654AF10)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1654AD40)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1654B8C0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyDiffuseModifier_TypeDefinitionIndex = 65057;

	class ConfigMaterialPropertyDiffuseModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueFloat _AlbedoSmoothness; // 0x48
		::MoleMole::MaterialPropertyModifierValueBool _ShadowColorFadeByZ; // 0x50
		::System::Byte _padding0[0x1];
		::MoleMole::MaterialPropertyModifierValueColor _ShallowColor; // 0x54
		::MoleMole::MaterialPropertyModifierValueColor _ShadowColor; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::ILLCEFBALCI* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}

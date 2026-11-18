#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"

class ILLCEFBALCI;

#define MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x19B338D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x19B33810)
#define MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x19B34720)
#define MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x19B336B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x19B339C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x19B33930)
#define MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x19B33A00)
#define MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x19B33DE0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x19B33C50)
#define MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x19B33AF0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x19B347B0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyRimGlowModifier_TypeDefinitionIndex = 49548;

	class ConfigMaterialPropertyRimGlowModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueColor _RimGlowLightColor; // 0x48
		::MoleMole::MaterialPropertyModifierValueBool _RimGlow; // 0x5C
		::System::Byte _padding0[0x1];
		::MoleMole::MaterialPropertyModifierValueColor _RimGlowShadowColor; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::ILLCEFBALCI* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}

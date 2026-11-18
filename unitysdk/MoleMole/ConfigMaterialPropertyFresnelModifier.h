#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"

class ILLCEFBALCI;

#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1B4527C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1B452700)
#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1B453520)
#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1B4525A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1B4528B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1B452820)
#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1B4528F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1B452E60)
#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1B452BF0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1B4529E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4535B0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyFresnelModifier_TypeDefinitionIndex = 53423;

	class ConfigMaterialPropertyFresnelModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueBool _Fresnel; // 0x48
		::System::Byte _padding0[0x1];
		::MoleMole::MaterialPropertyModifierValueColor _FresnelColor; // 0x4C
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelScale; // 0x60
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelOffset; // 0x68
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelPower; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::ILLCEFBALCI* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"

class ILLCEFBALCI;

#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1642DDD0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_DOONENTER_FORUSER_OFFSET UNITYSDK_OFFSET(0x1642F4B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1642DD10)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1642F420)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_ONDONE_OFFSET UNITYSDK_OFFSET(0x1642F630)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1642DBB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1642DEC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1642DE30)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1642DF00)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1642E8D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1642E420)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1642DFF0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1642F6D0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyClipPlaneModifier_TypeDefinitionIndex = 72333;

	class ConfigMaterialPropertyClipPlaneModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueBool _SoftLight; // 0x48
		::MoleMole::MaterialPropertyModifierValueBool _ClipPlane; // 0x4B
		::MoleMole::MaterialPropertyModifierValueBool _ReversePlaneXZ; // 0x4E
		::MoleMole::MaterialPropertyModifierValueBool _PlaneClipReverse; // 0x51
		::MoleMole::MaterialPropertyModifierValueFloat _SoftLightWidth; // 0x54
		::MoleMole::MaterialPropertyModifierValueColor _SoftLightColor; // 0x5C
		::MoleMole::MaterialPropertyModifierValueColor _HardLightColor; // 0x70
		::MoleMole::MaterialPropertyModifierValueBool _ClipPlaneXZ; // 0x84
		::MoleMole::MaterialPropertyModifierValueBool _HardLight; // 0x87
		::System::Byte _padding0[0x2];
		::MoleMole::MaterialPropertyModifierValueFloat _HardLightWidth; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::ILLCEFBALCI* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void DoOnEnter_ForUser(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_DOONENTER_FORUSER_OFFSET))(this, instance);
		}

		::System::Void OnDone(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_ONDONE_OFFSET))(this, instance);
		}
	};
}

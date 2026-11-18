#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"

class ILLCEFBALCI;

#define MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x192CAEF0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_DOONENTER_FORUSER_OFFSET UNITYSDK_OFFSET(0x192CBB50)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x192CAE30)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x192CBAC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_ONDONE_OFFSET UNITYSDK_OFFSET(0x192CBBC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x192CACD0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x192CAFE0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x192CAF50)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x192CB020)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x192CB4C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x192CB2C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x192CB110)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x192CBC40)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyOutlineModifier_TypeDefinitionIndex = 39904;

	class ConfigMaterialPropertyOutlineModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueColor _OutlineColor; // 0x48
		::MoleMole::MaterialPropertyModifierValueBool _Outline; // 0x5C
		::System::Byte _padding0[0x1];
		::MoleMole::MaterialPropertyModifierValueFloat _MaxOutlineZOffset; // 0x60
		::MoleMole::MaterialPropertyModifierValueFloat _OutlineWidth; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::ILLCEFBALCI* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void DoOnEnter_ForUser(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_DOONENTER_FORUSER_OFFSET))(this, instance);
		}

		::System::Void OnDone(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_ONDONE_OFFSET))(this, instance);
		}
	};
}

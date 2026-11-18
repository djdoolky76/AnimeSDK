#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"

class ILLCEFBALCI;

#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1B454590)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1B4544B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1B4551A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1B454300)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1B4546A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1B4545F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1B4546F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1B454B10)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1B454980)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1B454830)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B455230)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyOtherModifier_TypeDefinitionIndex = 40852;

	class ConfigMaterialPropertyOtherModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::System::Single _CurrentColorStagmentRef; // 0x48
		::MoleMole::MaterialPropertyModifierValueBool _IgnoreTimeScale; // 0x4C
		::MoleMole::MaterialPropertyModifierValueBool _MarkAsVfxMask; // 0x4F
		::System::Byte _padding0[0x2];
		::MoleMole::MaterialPropertyModifierValueFloat _CurrentColorStagment; // 0x54
		::System::Single _CurrentColorStagmentDefault; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::ILLCEFBALCI* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}

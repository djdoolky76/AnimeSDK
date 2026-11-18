#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/UnityEngine/Color.h"

class ILLCEFBALCI;

#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0xFFF4D40)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0xFFF4C60)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0xFFF5880)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0xFFF49C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0xFFF4E50)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0xFFF4DA0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0xFFF4EA0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0xFFF51E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0xFFF50D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0xFFF4FE0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xFFF5910)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyOverrideModifier_TypeDefinitionIndex = 50698;

	class ConfigMaterialPropertyOverrideModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueBool _Override; // 0x48
		::System::Byte _padding0[0x1];
		::UnityEngine::Color _OverrideColorRef; // 0x4C
		::UnityEngine::Color _OverrideColorDefault; // 0x5C
		::MoleMole::MaterialPropertyModifierValueColor _OverrideColor; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::ILLCEFBALCI* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}

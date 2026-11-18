#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/UnityEngine/Color.h"

class ILLCEFBALCI;

#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x16430FB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_DOONENTER_FORUSER_OFFSET UNITYSDK_OFFSET(0x16432470)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x16430EA0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x16432340)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_ONDONE_OFFSET UNITYSDK_OFFSET(0x164324E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x16430BF0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x16431100)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x16431010)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x16431160)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x164318D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x164315B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x164312E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x16432560)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyOverrideOutlineColorModifier_TypeDefinitionIndex = 80136;

	class ConfigMaterialPropertyOverrideOutlineColorModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideOutlineTex; // 0x48
		::System::Single _OutlineWidthRef; // 0x78
		::UnityEngine::Color _OverrideOutlineColorRef; // 0x7C
		::UnityEngine::Color _OverrideOutlineColorDefault; // 0x8C
		::System::Single _OutlineWidthDefault; // 0x9C
		::MoleMole::MaterialPropertyModifierValueVector _OverrideOutlineSpeed; // 0xA0
		::MoleMole::MaterialPropertyModifierValueColor _OverrideOutlineColor; // 0xB8
		::MoleMole::MaterialPropertyModifierValueFloat _OutlineWidth; // 0xCC
		::MoleMole::MaterialPropertyModifierValueBool _OverrideOutlineUseUV2; // 0xD4
		::MoleMole::MaterialPropertyModifierValueBool _OverrideOutline; // 0xD7

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::ILLCEFBALCI* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void DoOnEnter_ForUser(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_DOONENTER_FORUSER_OFFSET))(this, instance);
		}

		::System::Void OnDone(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_ONDONE_OFFSET))(this, instance);
		}
	};
}

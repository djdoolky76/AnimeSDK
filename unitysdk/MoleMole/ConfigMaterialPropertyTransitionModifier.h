#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/UnityEngine/Color.h"

class ILLCEFBALCI;

#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1B8BEFD0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_DOONENTER_FORUSER_OFFSET UNITYSDK_OFFSET(0x1B8C0890)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1B8BEEB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1B8C06B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_ONDONE_OFFSET UNITYSDK_OFFSET(0x1B8C0A10)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1B8BEBA0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1B8BF150)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1B8BF030)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1B8BF1C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1B8BFA60)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1B8BF6C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1B8BF380)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8C0AB0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyTransitionModifier_TypeDefinitionIndex = 74945;

	class ConfigMaterialPropertyTransitionModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideOutlineTex; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _TransitionTex; // 0x78
		::MoleMole::MaterialPropertyModifierValueFloat _TransitionCompletion; // 0xA8
		::MoleMole::MaterialPropertyModifierValueColor _TransitionColor; // 0xB0
		::System::Single _TransitionWidthRef; // 0xC4
		::UnityEngine::Color _TransitionColorRef; // 0xC8
		::MoleMole::MaterialPropertyModifierValueFloat _TransitionWidth; // 0xD8
		::MoleMole::MaterialPropertyModifierValueBool _OverrideOutlineUseUV2; // 0xE0
		::MoleMole::MaterialPropertyModifierValueBool _Transition; // 0xE3
		::System::Byte _padding0[0x2];
		::System::Single _TransitionCompletionDefault; // 0xE8
		::System::Single _TransitionWidthDefault; // 0xEC
		::System::Single _TransitionCompletionRef; // 0xF0
		::UnityEngine::Color _TransitionColorDefault; // 0xF4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::ILLCEFBALCI* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void DoOnEnter_ForUser(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_DOONENTER_FORUSER_OFFSET))(this, instance);
		}

		::System::Void OnDone(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_ONDONE_OFFSET))(this, instance);
		}
	};
}

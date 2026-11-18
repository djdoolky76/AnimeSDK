#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueAvatarShaderBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/UnityEngine/Color.h"

class ILLCEFBALCI;

#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1C700930)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_DOONENTER_FORUSER_OFFSET UNITYSDK_OFFSET(0x1C702BF0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1C7007F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1C702AC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_ONDONE_OFFSET UNITYSDK_OFFSET(0x1C702C60)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1C7001D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1C700AF0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1C700990)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1C700B70)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1C701990)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1C701330)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1C700D80)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C702CE0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyOverrideRimGlowModifier_TypeDefinitionIndex = 66384;

	class ConfigMaterialPropertyOverrideRimGlowModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideRimGlowTexFX; // 0x48
		::UnityEngine::Color _DetailColorRef; // 0x78
		::MoleMole::MaterialPropertyModifierValueBool _OverrideRimGlow; // 0x88
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAvatarShaderBlendMode _OverrideRimGlowMode; // 0x8B
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode _PropertyMaskChannel; // 0x8E
		::System::Byte _padding0[0x3];
		::System::Single _OverrideRimGlowUseUV2Default; // 0x94
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelWidth; // 0x98
		::UnityEngine::Color _FresnelColorRef; // 0xA0
		::MoleMole::MaterialPropertyModifierValueFloat _OverrideRimGlowUseUV2; // 0xB0
		::MoleMole::MaterialPropertyModifierValueVector _OverrideRimGlowSpeed; // 0xB8
		::UnityEngine::Color _OverrideRimGlowColorDefault; // 0xD0
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMaskUseUV2; // 0xE0
		::System::Single _OverrideRimGlowUseUV2Ref; // 0xE8
		::UnityEngine::Color _FresnelColorDefault; // 0xEC
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMask2UseUV2; // 0xFC
		::MoleMole::MaterialPropertyModifierValueColor _DetailColor; // 0x104
		::MoleMole::MaterialPropertyModifierValueColor _FresnelColor; // 0x118
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUseUV2; // 0x12C
		::UnityEngine::Color _DetailColorDefault; // 0x134
		::UnityEngine::Color _OverrideRimGlowColorRef; // 0x144
		::MoleMole::MaterialPropertyModifierValueColor _OverrideRimGlowColor; // 0x154

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::ILLCEFBALCI* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void DoOnEnter_ForUser(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_DOONENTER_FORUSER_OFFSET))(this, instance);
		}

		::System::Void OnDone(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_ONDONE_OFFSET))(this, instance);
		}
	};
}

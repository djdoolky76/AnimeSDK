#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueChannelEnumType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueDistortionChannelType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueMaskChannelType.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/UnityEngine/Color.h"

class ILLCEFBALCI;

#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x180C7320)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x180C7240)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x180C98A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x180C6F80)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x180C7440)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x180C7380)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x180C74A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x180C8370)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x180C7C60)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x180C7600)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x180C9B30)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertySecondaryAlbedoModifier_TypeDefinitionIndex = 77212;

	class ConfigMaterialPropertySecondaryAlbedoModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _SecondaryAlbedoMaskTex; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _SecondaryAlbedoTex; // 0x78
		::MoleMole::MaterialPropertyModifierValueTexture _SecondaryAlbedoDistortionTex; // 0xA8
		::MoleMole::MaterialPropertyModifierValueBool _SecondaryAlbedo; // 0xD8
		::MoleMole::MaterialPropertyModifierValueBool _SecondaryAlbedoUseMask; // 0xDB
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueDistortionChannelType _SecondaryAlbedoDistortionChannel; // 0xDE
		::System::Byte _padding0[0x3];
		::UnityEngine::Color _SecondaryAlbedoColorDefault; // 0xE4
		::MoleMole::MaterialPropertyModifierValueVector _SecondaryAlbedoTexSpeed; // 0xF4
		::MoleMole::MaterialPropertyModifierValueFloat _SecondaryAlbedoDistortionStrength; // 0x10C
		::UnityEngine::Color _SecondaryAlbedoColorRef; // 0x114
		::MoleMole::MaterialPropertyModifierValueBool _SecondaryAlbedoUseUV2; // 0x124
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueChannelEnumType _SecondaryAlbedoChannel; // 0x127
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType _SecondaryAlbedoMaskChannel; // 0x12A
		::MoleMole::MaterialPropertyModifierValueBool _SecondaryAlbedoUseDistortion; // 0x12D
		::MoleMole::MaterialPropertyModifierValueColor _SecondaryAlbedoColor; // 0x130
		::MoleMole::MaterialPropertyModifierValueVector _SecondaryAlbedoDistortionUVSpeed; // 0x144

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::ILLCEFBALCI* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueMaskChannelType.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/UnityEngine/Color.h"

class ILLCEFBALCI;

#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1BA4FA40)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_DOONENTER_FORUSER_OFFSET UNITYSDK_OFFSET(0x1BA52460)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1BA4F900)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1BA52280)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_ONDONE_OFFSET UNITYSDK_OFFSET(0x1BA524D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1BA4F2D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1BA4FC00)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1BA4FAA0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1BA4FC80)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1BA50C90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1BA50530)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1BA4FE90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA52550)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyAbnormalPropertyElectroModifier_TypeDefinitionIndex = 91035;

	class ConfigMaterialPropertyAbnormalPropertyElectroModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideRimGlowTexFX; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapTexFx; // 0x78
		::UnityEngine::Color _DetailColorDefault; // 0xA8
		::UnityEngine::Color _DetailColorRef; // 0xB8
		::UnityEngine::Color _PropertyColorDefault; // 0xC8
		::System::Single _FresnelFlashingRef; // 0xD8
		::MoleMole::MaterialPropertyModifierValueColor _DetailColor; // 0xDC
		::MoleMole::MaterialPropertyModifierValueVector _PropertyMaskUVSpeed; // 0xF0
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelMaskWidth; // 0x108
		::UnityEngine::Color _FresnelColorDefault; // 0x110
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUseUV2; // 0x120
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelFlashing; // 0x128
		::MoleMole::MaterialPropertyModifierValueBool _AbnormalPropertyElectro; // 0x130
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType _PropertyMaskChannel; // 0x133
		::System::Byte _padding0[0x2];
		::MoleMole::MaterialPropertyModifierValueColor _FresnelColor; // 0x138
		::MoleMole::MaterialPropertyModifierValueColor _PropertyColor; // 0x14C
		::System::Single _FresnelFlashingDefault; // 0x160
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMaskUVFlipSpeed; // 0x164
		::MoleMole::MaterialPropertyModifierValueVector _PropertyTexUVSpeed; // 0x16C
		::UnityEngine::Color _PropertyColorRef; // 0x184
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUVFlipSpeed; // 0x194
		::UnityEngine::Color _FresnelColorRef; // 0x19C
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelWidth; // 0x1AC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::ILLCEFBALCI* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void DoOnEnter_ForUser(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_DOONENTER_FORUSER_OFFSET))(this, instance);
		}

		::System::Void OnDone(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_ONDONE_OFFSET))(this, instance);
		}
	};
}

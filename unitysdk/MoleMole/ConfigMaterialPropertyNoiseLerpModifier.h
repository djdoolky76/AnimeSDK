#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"

class ILLCEFBALCI;

#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x127A3860)
#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x127A37A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x127A4DF0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x127A3640)
#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x127A3950)
#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x127A38C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x127A3990)
#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x127A4200)
#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x127A3E00)
#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x127A3A80)
#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x127A4F20)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyNoiseLerpModifier_TypeDefinitionIndex = 83570;

	class ConfigMaterialPropertyNoiseLerpModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _NoiseLerpMask; // 0x48
		::MoleMole::MaterialPropertyModifierValueFloat _NoiseLerpValue; // 0x78
		::MoleMole::MaterialPropertyModifierValueFloat _NoiseLerpEdgeRange; // 0x80
		::MoleMole::MaterialPropertyModifierValueColor _NoiseLerpEdgeColor; // 0x88
		::MoleMole::MaterialPropertyModifierValueBool _NoiseLerp; // 0x9C
		::MoleMole::MaterialPropertyModifierValueBool _UseLerpEdgeColor; // 0x9F
		::MoleMole::MaterialPropertyModifierValueBool _NoiseUseUV2; // 0xA2
		::System::Byte _padding0[0x3];
		::MoleMole::MaterialPropertyModifierValueColor _NoiseLerpColor; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::ILLCEFBALCI* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}

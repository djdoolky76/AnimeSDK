#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/UnityEngine/Color.h"

class ILLCEFBALCI;

#define MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x118E8BA0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x118E8AC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x118E9C00)
#define MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x118E8800)
#define MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x118E8CC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x118E8C00)
#define MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x118E8D20)
#define MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x118E91A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x118E8FF0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x118E8E70)
#define MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x118E9D30)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyBlushModifier_TypeDefinitionIndex = 80011;

	class ConfigMaterialPropertyBlushModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _BlushTexture; // 0x48
		::MoleMole::MaterialPropertyModifierValueBool _Blush; // 0x78
		::System::Byte _padding0[0x1];
		::UnityEngine::Color _BlushColorDefault; // 0x7C
		::UnityEngine::Color _BlushColorRef; // 0x8C
		::MoleMole::MaterialPropertyModifierValueColor _BlushColor; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::ILLCEFBALCI* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}

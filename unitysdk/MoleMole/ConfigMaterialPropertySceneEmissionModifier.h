#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/UnityEngine/Color.h"

class ILLCEFBALCI;

#define MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1CD13890)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x16432870)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1CD147B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x16432580)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1CD13A10)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1CD138F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1CD13A80)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1CD140E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1CD13E60)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1CD13C40)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD14840)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertySceneEmissionModifier_TypeDefinitionIndex = 77519;

	class ConfigMaterialPropertySceneEmissionModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueColor _EmissionColor; // 0x48
		::UnityEngine::Color _EmissionColorRef; // 0x5C
		::MoleMole::MaterialPropertyModifierValueBool _DisableGlobalEmissionIntensity; // 0x6C
		::MoleMole::MaterialPropertyModifierValueBool _AffectByGlobalEmissionColor; // 0x6F
		::System::Byte _padding0[0x2];
		::System::Single _RTXGIEmissionScaleDefault; // 0x74
		::System::Single _RTXGIEmissionScaleRef; // 0x78
		::MoleMole::MaterialPropertyModifierValueFloat _RTXGIStylizedScale; // 0x7C
		::System::Single _RTXGIStylizedScaleRef; // 0x84
		::UnityEngine::Color _EmissionColorDefault; // 0x88
		::System::Single _RTXGIStylizedScaleDefault; // 0x98
		::MoleMole::MaterialPropertyModifierValueFloat _RTXGIEmissionScale; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::ILLCEFBALCI* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}

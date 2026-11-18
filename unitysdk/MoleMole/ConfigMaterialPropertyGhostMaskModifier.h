#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"

class ILLCEFBALCI;

#define MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1B453860)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1B453770)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1B454260)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1B4535C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1B453970)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1B4538C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1B4539C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1B453D10)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1B453C00)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1B453B10)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4542F0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyGhostMaskModifier_TypeDefinitionIndex = 63218;

	class ConfigMaterialPropertyGhostMaskModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueBool _GhostMask; // 0x48
		::System::Byte _padding0[0x1];
		::System::Single _MarkAsGhostMaskRef; // 0x4C
		::System::Single _MarkAsGhostMaskDefault; // 0x50
		::MoleMole::MaterialPropertyModifierValueFloat _MarkAsGhostMask; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::ILLCEFBALCI* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}

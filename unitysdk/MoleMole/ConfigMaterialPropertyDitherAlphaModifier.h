#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"

class ILLCEFBALCI;

#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0xFFF20B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_DOONENTER_FORUSER_OFFSET UNITYSDK_OFFSET(0xFFF3040)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0xFFF1FC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0xFFF2FB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_ONDONE_OFFSET UNITYSDK_OFFSET(0xFFF31C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0xFFF1E00)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0xFFF21D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0xFFF2110)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0xFFF2230)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0xFFF2790)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0xFFF2580)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0xFFF2380)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xFFF3280)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyDitherAlphaModifier_TypeDefinitionIndex = 79484;

	class ConfigMaterialPropertyDitherAlphaModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueVector _FxTransparentValue; // 0x48
		::System::Single _DitherAlpha2Default; // 0x60
		::MoleMole::MaterialPropertyModifierValueVector _DecolorizationContrast; // 0x64
		::System::Boolean SyncEffectDitherAlpha; // 0x7C
		::System::Byte _padding0[0x3];
		::System::Single _DitherAlpha2Ref; // 0x80
		::MoleMole::MaterialPropertyModifierValueVector _FxUVDitherValue; // 0x84
		::MoleMole::MaterialPropertyModifierValueFloat _DitherAlpha2; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::ILLCEFBALCI* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void DoOnEnter_ForUser(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_DOONENTER_FORUSER_OFFSET))(this, instance);
		}

		::System::Void OnDone(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_ONDONE_OFFSET))(this, instance);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"

class ILLCEFBALCI;

#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x118E9F60)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_DOONENTER_FORUSER_OFFSET UNITYSDK_OFFSET(0x118EB6B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x118E9EA0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x118EB580)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_ONDONE_OFFSET UNITYSDK_OFFSET(0x118EB720)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x118E9D40)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x118EA050)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x118E9FC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x118EA090)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x118EA830)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x118EA4B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x118EA180)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x118EB7A0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyGlitchModifier_TypeDefinitionIndex = 91250;

	class ConfigMaterialPropertyGlitchModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _BlockMaskTex; // 0x48
		::MoleMole::MaterialPropertyModifierValueColor _BlockColorD; // 0x78
		::MoleMole::MaterialPropertyModifierValueBool _ScreenScale; // 0x8C
		::MoleMole::MaterialPropertyModifierValueBool _Glitch; // 0x8F
		::System::Byte _padding0[0x2];
		::MoleMole::MaterialPropertyModifierValueColor _BlockColorA; // 0x94
		::MoleMole::MaterialPropertyModifierValueColor _BlockColorC; // 0xA8
		::MoleMole::MaterialPropertyModifierValueColor _BlockColorB; // 0xBC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::ILLCEFBALCI* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void DoOnEnter_ForUser(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_DOONENTER_FORUSER_OFFSET))(this, instance);
		}

		::System::Void OnDone(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_ONDONE_OFFSET))(this, instance);
		}
	};
}

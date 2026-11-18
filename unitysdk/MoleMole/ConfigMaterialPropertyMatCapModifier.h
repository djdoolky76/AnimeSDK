#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueMatCapBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueMatCapType.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"

class ILLCEFBALCI;

#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1C6F9850)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1C6F9760)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1C6FE900)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1C6F95A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1C6F9970)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1C6F98B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1C6F99D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1C6FBCA0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1C6FAB70)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1C6F9B20)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6FEB90)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyMatCapModifier_TypeDefinitionIndex = 82559;

	class ConfigMaterialPropertyMatCapModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapTexFx; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapBumpMapFx; // 0x78
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapTex; // 0xA8
		::MoleMole::MaterialPropertyModifierValueVector _MatCapParams; // 0xD8
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTint2; // 0xF0
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTint3; // 0x104
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTintFx; // 0x118
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapNormalVSpeedFx; // 0x12C
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMatCapBlendMode _MatCapBlendModeFx; // 0x134
		::MoleMole::MaterialPropertyModifierValueBool _UseMatCapMask; // 0x137
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMatCapType _MatCap; // 0x13A
		::System::Byte _padding0[0x3];
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTint; // 0x140
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTint5; // 0x154
		::System::Single _MatCapAlphaBurstFxRef; // 0x168
		::MoleMole::MaterialPropertyModifierValueVector _MatCapReractParams5; // 0x16C
		::MoleMole::MaterialPropertyModifierValueVector _RefractParam4; // 0x184
		::MoleMole::MaterialPropertyModifierValueVector _MatCapParams5; // 0x19C
		::MoleMole::MaterialPropertyModifierValueVector _RefractParam; // 0x1B4
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapUSpeedFx; // 0x1CC
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapBumpScaleFx; // 0x1D4
		::MoleMole::MaterialPropertyModifierValueVector _MatCapReractParams4; // 0x1DC
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapColorBurstFx; // 0x1F4
		::MoleMole::MaterialPropertyModifierValueVector _MatCapParams3; // 0x1FC
		::MoleMole::MaterialPropertyModifierValueVector _RefractParam2; // 0x214
		::MoleMole::MaterialPropertyModifierValueVector _RefractParam5; // 0x22C
		::MoleMole::MaterialPropertyModifierValueVector _MatCapParams4; // 0x244
		::MoleMole::MaterialPropertyModifierValueVector _MatCapParams2; // 0x25C
		::MoleMole::MaterialPropertyModifierValueFloat _VertexOffset; // 0x274
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapAlphaBurstFx; // 0x27C
		::MoleMole::MaterialPropertyModifierValueVector _MatCapReractParams3; // 0x284
		::MoleMole::MaterialPropertyModifierValueVector _RefractParam3; // 0x29C
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTint4; // 0x2B4
		::MoleMole::MaterialPropertyModifierValueVector _MatCapReractParams; // 0x2C8
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapFX; // 0x2E0
		::System::Single _MatCapAlphaBurstFxDefault; // 0x2E8
		::MoleMole::MaterialPropertyModifierValueVector _MatCapReractParams2; // 0x2EC
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapVSpeedFx; // 0x304
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapNormalUSpeedFx; // 0x30C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::ILLCEFBALCI* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}

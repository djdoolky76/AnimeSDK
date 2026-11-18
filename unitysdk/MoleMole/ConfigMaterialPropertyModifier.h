#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/NCIJAEIKGCN.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/MoleMole/StaticBoolMaterialModifier.h"
#include "unitysdk/MoleMole/StaticColorMaterialModifier.h"
#include "unitysdk/MoleMole/StaticFloatMaterialModifier.h"
#include "unitysdk/MoleMole/StaticKeywordFloatMaterialModifier.h"
#include "unitysdk/MoleMole/StaticTextureMaterialModifier.h"
#include "unitysdk/MoleMole/StaticVectorMaterialModifier.h"

class ILLCEFBALCI;
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_CREATECALCDATA_OFFSET UNITYSDK_OFFSET(0x1B942C60)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOAFTERONENTERFROMJOB_OFFSET UNITYSDK_OFFSET(0x1B9429C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1B9439B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOONENTER_FORUSER_OFFSET UNITYSDK_OFFSET(0x1B943960)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1B943740)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x1B943AA0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1B944000)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_GET_REALKEEPDURATION_OFFSET UNITYSDK_OFFSET(0x1B942730)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONDONE_OFFSET UNITYSDK_OFFSET(0x1B942B20)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONENTER_OFFSET UNITYSDK_OFFSET(0x1B942860)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONEXIT_OFFSET UNITYSDK_OFFSET(0x1B942AB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONKEEP_OFFSET UNITYSDK_OFFSET(0x1B942A60)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONVALUECHANGED_CANCARRYINTOBLACKCURTAIN_OFFSET UNITYSDK_OFFSET(0x1B9426E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1B943700)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1B943A50)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSENTERWRAP_OFFSET UNITYSDK_OFFSET(0x1B942B80)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1B943420)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSEXITWRAP_OFFSET UNITYSDK_OFFSET(0x1B9434B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1B943590)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSKEEPWRAP_OFFSET UNITYSDK_OFFSET(0x1B943620)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SETUPMATERIALINSTANCES_OFFSET UNITYSDK_OFFSET(0x1B9437D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_1_OFFSET UNITYSDK_OFFSET(0x1B943DC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_2_OFFSET UNITYSDK_OFFSET(0x1B943E40)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_3_OFFSET UNITYSDK_OFFSET(0x1B943EB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_4_OFFSET UNITYSDK_OFFSET(0x1B943F20)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_5_OFFSET UNITYSDK_OFFSET(0x1B943F90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_OFFSET UNITYSDK_OFFSET(0x1B943D50)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_1_OFFSET UNITYSDK_OFFSET(0x1B943B50)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_2_OFFSET UNITYSDK_OFFSET(0x1B943BC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_3_OFFSET UNITYSDK_OFFSET(0x1B943C20)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_4_OFFSET UNITYSDK_OFFSET(0x1B943C90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_5_OFFSET UNITYSDK_OFFSET(0x1B943CF0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_OFFSET UNITYSDK_OFFSET(0x1B943AF0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B944040)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyModifier_TypeDefinitionIndex = 54079;

	class ConfigMaterialPropertyModifier : public ::System::Object
	{
	public:
		// static const ::System::Single MAX_DURATION; // 0x0
		::UnityEngine::AnimationCurve* enterCurve; // 0x10
		::UnityEngine::AnimationCurve* exitCurve; // 0x18
		::System::String* keepCurveGroupKey; // 0x20
		::System::Boolean IgnoreWitchTimescale; // 0x28
		::MoleMole::Config::MatPropertySetting QuaSetting; // 0x29
		::System::Byte _padding0[0x3];
		::System::Single EnterDuration; // 0x30
		::System::Single ExitDuration; // 0x34
		::System::Boolean ForbidSuspendByBlackCurtain; // 0x38
		::System::Boolean IgnoreOwnerTimescale; // 0x39
		::System::Boolean ApplyToAllShaders; // 0x3A
		::System::Boolean UseQuaSetting; // 0x3B
		::System::Single KeepDuration; // 0x3C
		::System::Int32 Priority; // 0x40
		::System::Boolean EndPerformWhiteList; // 0x44
		::System::Boolean EndPerformBlackList; // 0x45
		::System::Boolean CanCarryIntoBlackCurtain; // 0x46
		::System::Boolean IgnoreWorldTimescale; // 0x47

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void OnValueChanged_CanCarryIntoBlackCurtain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONVALUECHANGED_CANCARRYINTOBLACKCURTAIN_OFFSET))(this);
		}

		::System::Single get_RealKeepDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_GET_REALKEEPDURATION_OFFSET))(this);
		}

		::System::Void OnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONENTER_OFFSET))(this, instance);
		}

		::System::Void OnKeep(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONKEEP_OFFSET))(this, instance);
		}

		::System::Void OnExit(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONEXIT_OFFSET))(this, instance);
		}

		::System::Void OnDone(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONDONE_OFFSET))(this, instance);
		}

		::System::Void ProcessEnterWrap(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSENTERWRAP_OFFSET))(this, instance, timer);
		}

		::System::Void ProcessEnter(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void CreateCalcData(::ILLCEFBALCI* instance, ::System::Single timer, ::NCIJAEIKGCN state)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single, ::NCIJAEIKGCN))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_CREATECALCDATA_OFFSET))(this, instance, timer, state);
		}

		::System::Void ProcessExitWrap(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSEXITWRAP_OFFSET))(this, instance, timer);
		}

		::System::Void ProcessExit(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void ProcessKeepWrap(::ILLCEFBALCI* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSKEEPWRAP_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoOnEnter_ForUser(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOONENTER_FORUSER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnterFromJob(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOAFTERONENTERFROMJOB_OFFSET))(this, instance);
		}

		::System::Void SetupMaterialInstances(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SETUPMATERIALINSTANCES_OFFSET))(this, instance);
		}

		::System::Void PrepareOnExit(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void DoOnExit(::ILLCEFBALCI* instance)
		{
			return ((::System::Void(*)(::PVOID, ::ILLCEFBALCI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOONEXIT_OFFSET))(this, instance);
		}

		::System::Void SyncValue(::MoleMole::MaterialPropertyModifierValueFloat& from, ::MoleMole::StaticFloatMaterialModifier& to)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueFloat&, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_OFFSET))(this, from, to);
		}

		::System::Void SyncValue_1(::MoleMole::MaterialPropertyModifierValueTexture& from, ::MoleMole::StaticTextureMaterialModifier& to)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueTexture&, ::MoleMole::StaticTextureMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_1_OFFSET))(this, from, to);
		}

		::System::Void SyncValue_2(::MoleMole::MaterialPropertyModifierValueBool& from, ::MoleMole::StaticBoolMaterialModifier& to)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueBool&, ::MoleMole::StaticBoolMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_2_OFFSET))(this, from, to);
		}

		::System::Void SyncValue_3(::MoleMole::MaterialPropertyModifierValueVector& from, ::MoleMole::StaticVectorMaterialModifier& to)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueVector&, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_3_OFFSET))(this, from, to);
		}

		::System::Void SyncValue_4(::MoleMole::MaterialPropertyModifierValueColor& from, ::MoleMole::StaticColorMaterialModifier& to)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueColor&, ::MoleMole::StaticColorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_4_OFFSET))(this, from, to);
		}

		::System::Void SyncValue_5(::MoleMole::MaterialPropertyModifierValueFloat& from, ::MoleMole::StaticKeywordFloatMaterialModifier& to)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueFloat&, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_5_OFFSET))(this, from, to);
		}

		::System::Void SyncEnable(::MoleMole::MaterialPropertyModifierValueFloat& from, ::MoleMole::StaticFloatMaterialModifier& to, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueFloat&, ::MoleMole::StaticFloatMaterialModifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_OFFSET))(this, from, to, stop);
		}

		::System::Void SyncEnable_1(::MoleMole::MaterialPropertyModifierValueTexture& from, ::MoleMole::StaticTextureMaterialModifier& to, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueTexture&, ::MoleMole::StaticTextureMaterialModifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_1_OFFSET))(this, from, to, stop);
		}

		::System::Void SyncEnable_2(::MoleMole::MaterialPropertyModifierValueBool& from, ::MoleMole::StaticBoolMaterialModifier& to, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueBool&, ::MoleMole::StaticBoolMaterialModifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_2_OFFSET))(this, from, to, stop);
		}

		::System::Void SyncEnable_3(::MoleMole::MaterialPropertyModifierValueVector& from, ::MoleMole::StaticVectorMaterialModifier& to, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueVector&, ::MoleMole::StaticVectorMaterialModifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_3_OFFSET))(this, from, to, stop);
		}

		::System::Void SyncEnable_4(::MoleMole::MaterialPropertyModifierValueColor& from, ::MoleMole::StaticColorMaterialModifier& to, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueColor&, ::MoleMole::StaticColorMaterialModifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_4_OFFSET))(this, from, to, stop);
		}

		::System::Void SyncEnable_5(::MoleMole::MaterialPropertyModifierValueFloat& from, ::MoleMole::StaticKeywordFloatMaterialModifier& to, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueFloat&, ::MoleMole::StaticKeywordFloatMaterialModifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_5_OFFSET))(this, from, to, stop);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}

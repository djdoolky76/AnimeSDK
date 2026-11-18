#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMEABCPLHKA.h"
#include "unitysdk/EHOLCPHEFPJ.h"
#include "unitysdk/HEPFHJFBAAC.h"
#include "unitysdk/HIGJMJOCHII.h"
#include "unitysdk/MFAACKDKFHD.h"
#include "unitysdk/MNNCNBGDNMF.h"
#include "unitysdk/MoleMole/Config/ConfigAnimationCurve.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/OCNOEGFJMDG.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/DJPMGMOLKLO.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace MoleMole::Battle { class CurveMoveComponent_Config; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1BA428D0)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1BA3D360)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_CREATECONFIG_OFFSET UNITYSDK_OFFSET(0x1BA43220)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_CREATEDYNAMICTRIGGERCONFIG_OFFSET UNITYSDK_OFFSET(0x1BA433D0)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BA3D460)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BA3D220)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA41AD0)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1BA3E9E0)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1BA42830)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1BA3D450)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA41B30)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1BA3EA60)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA426A0)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1BA41990)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA43450)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BA43460)
#define MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1BA43470)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSplineMoveTrait_TypeDefinitionIndex = 57405;

	class ConfigSplineMoveTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* DefaultSplineName; // 0x18
		::MFAACKDKFHD SplineSpace; // 0x20
		::OCNOEGFJMDG SplineMoveMode; // 0x24
		::HEPFHJFBAAC SplineMoveSpeedMode; // 0x28
		::BMEABCPLHKA SplineRotateMode; // 0x2C
		::System::Single Speed; // 0x30
		::System::Single SpeedUpAcc; // 0x34
		::System::Single SpeedDownAcc; // 0x38
		::System::Byte _padding0[0x4];
		::MoleMole::Config::ConfigAnimationCurve SpeedCurve; // 0x40
		::System::Single SpeedCurveTime; // 0x50
		::EHOLCPHEFPJ OrientationMode; // 0x54
		::HIGJMJOCHII OrientationAxis; // 0x58
		::System::Boolean enableCurvyRotationPitchRange; // 0x5C
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector2 curvyRotationPitchRange; // 0x60
		::System::Collections::Generic::List_1<::System::String*>* AutoAttachMarkNode; // 0x68
		::System::Boolean UseLogicMove; // 0x70
		::System::Boolean UseCache; // 0x71
		::System::Boolean NeedPauseWhenWipeOut; // 0x72
		::System::Byte _padding2[0x1];
		::MNNCNBGDNMF MoveDirection; // 0x74
		::UnityEngine::Vector3 PositionOffset; // 0x78
		::System::Boolean EnableAttachRotationMotion; // 0x84
		::System::Boolean AdjustMassCenter; // 0x85
		::System::Boolean SetRotationInst; // 0x86
		::System::Byte _padding3[0x1];
		::System::String* CustomPivotPoint; // 0x88
		::System::String* startMoveSoundEvent; // 0x90
		::System::String* stopMoveSoundEvent; // 0x98
		::System::Boolean setMoveBackSound; // 0xA0
		::System::Byte _padding4[0x7];
		::System::String* startMoveBackSoundEvent; // 0xA8
		::System::String* stopMoveBackSoundEvent; // 0xB0
		::System::Boolean muteSound; // 0xB8
		::System::Byte _padding5[0x7];
		::System::String* EntityAttachCollider; // 0xC0
		::System::String* OutCollider; // 0xC8
		::System::String* MidCollider; // 0xD0
		::System::String* InCollider; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigSplineMoveTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigSplineMoveTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigSplineMoveTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigSplineMoveTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::DJPMGMOLKLO CreateDynamicTriggerConfig()
		{
			return ((::DJPMGMOLKLO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_CREATEDYNAMICTRIGGERCONFIG_OFFSET))(this);
		}

		::MoleMole::Battle::CurveMoveComponent_Config* CreateConfig()
		{
			return ((::MoleMole::Battle::CurveMoveComponent_Config*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT_CREATECONFIG_OFFSET))(this);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINEMOVETRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}

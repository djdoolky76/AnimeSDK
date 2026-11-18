#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/PosRotTargetOption.h"
#include "unitysdk/MoleMole/Config/ReferTargetCoordsOption.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/KNOHFGCKLFA.h"
#include "unitysdk/LFGBJHCEJID.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FKNIEPCILLG;
class JCADHFOKIHK;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_CALFACEOFFPOSROT_OFFSET UNITYSDK_OFFSET(0x1A038D20)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_CHOOSEENTITYORTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A032AE0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_CHOOSEPOSROTTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x1A037610)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_CHOOSESPECIALTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A036F10)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_CLONE_OFFSET UNITYSDK_OFFSET(0x1A03A080)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A039FA0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A039600)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A03A190)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_GETABILITYTARGETOFFSETREFERENTITY_OFFSET UNITYSDK_OFFSET(0x1A0378E0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_GETATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x1A039290)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_GETENTITYPOSROTBYTARGET_OFFSET UNITYSDK_OFFSET(0x1A033B00)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1A03A180)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_GETSAVEPOINTPOSROT_OFFSET UNITYSDK_OFFSET(0x1A038EF0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_GETTARGETENTITYPOSROT_OFFSET UNITYSDK_OFFSET(0x1A0336A0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x1A039150)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A039660)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A03A210)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_ISREFERTARGETCAMERA_OFFSET UNITYSDK_OFFSET(0x1A0328F0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_ISSAVEPOINTOPTION_OFFSET UNITYSDK_OFFSET(0x1A039100)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_ISSPECIALITEMOPTION_OFFSET UNITYSDK_OFFSET(0x1A036EC0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A039DF0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A03B820)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1A03B980)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET___BASE_GETATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x1A03B990)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET___BASE_GETENTITYPOSROTBYTARGET_OFFSET UNITYSDK_OFFSET(0x1A03BA30)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET___BASE_GETSAVEPOINTPOSROT_OFFSET UNITYSDK_OFFSET(0x1A03BB30)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET___BASE_GETTARGETENTITYPOSROT_OFFSET UNITYSDK_OFFSET(0x1A03BD60)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET___BASE_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x1A03BC80)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET___BASE_ISREFERTARGETCAMERA_OFFSET UNITYSDK_OFFSET(0x1A03BE50)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET___BASE_ISSAVEPOINTOPTION_OFFSET UNITYSDK_OFFSET(0x1A03BF70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPosRotFaceOffReferTarget_TypeDefinitionIndex = 88537;

	class ConfigPosRotFaceOffReferTarget : public ::MoleMole::Config::PosRotTargetOption
	{
	public:
		::MoleMole::Config::DynamicString* BackupAttachPoint; // 0x10
		::MoleMole::Config::DynamicString* AttachPoint; // 0x18
		::MoleMole::Config::DynamicString* CustomKey; // 0x20
		::MoleMole::Config::DynamicString* BackupPointName; // 0x28
		::MoleMole::Config::DynamicString* BackupNodePoint; // 0x30
		::MoleMole::Config::DynamicString* NodePoint; // 0x38
		::MoleMole::Config::DynamicString* PointName; // 0x40
		::MoleMole::Config::DynamicString* BackupCustomKey; // 0x48
		::System::Single DistanceScopeMax; // 0x50
		::System::Single DistanceScopeMin; // 0x54
		::MoleMole::Config::AbilityTargetting OffsetReferTarget; // 0x58
		::MoleMole::Config::AbilityTargetting BackupOffsetReferTarget; // 0x5C
		::System::Boolean FeaturePointFirst; // 0x60
		::System::Boolean IsUseAttachPointRotation; // 0x61
		::System::Boolean IsUseAttachPointPos; // 0x62

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET__CTOR_OFFSET))(this);
		}

		::System::Boolean IsReferTargetCamera(::MGHNAPKHBOG sourceEntity, ::MoleMole::Config::ReferTargetCoordsOption coordsOption, ::MoleMole::Config::ReferTargetCoordsOption backupCoordsOption, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::JCADHFOKIHK* instancedAbility, ::System::Boolean forceUseBackUp)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGHNAPKHBOG, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_ISREFERTARGETCAMERA_OFFSET))(this, sourceEntity, coordsOption, backupCoordsOption, caster, other, instancedAbility, forceUseBackUp);
		}

		::System::Boolean GetTargetEntityPosRot(::MGHNAPKHBOG sourceEntity, ::MoleMole::Config::ReferTargetCoordsOption coordsOption, ::MoleMole::Config::ReferTargetCoordsOption backupCoordsOption, ::UnityEngine::Vector3& targetPos, ::UnityEngine::Quaternion& targetRot, ::MGHNAPKHBOG& targetEntity, ::UnityEngine::Transform*& targetTrans, ::KNOHFGCKLFA& targetCoods, ::System::Boolean& useDefaultTarget, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::JCADHFOKIHK* instancedAbility, ::MoleMole::Config::DynamicString* relativeBaseSavePoint, ::MoleMole::Config::DynamicString* relativeTargetSavePoint, ::MoleMole::Config::DynamicString* backupRelativeBaseSavePoint, ::MoleMole::Config::DynamicString* backupRelativeTargetSavePoint, ::System::Boolean forceUseBackUp, ::MGHNAPKHBOG attackTargetOverride)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGHNAPKHBOG, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Config::ReferTargetCoordsOption, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::MGHNAPKHBOG&, ::UnityEngine::Transform*&, ::KNOHFGCKLFA&, ::System::Boolean&, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::System::Boolean, ::MGHNAPKHBOG))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_GETTARGETENTITYPOSROT_OFFSET))(this, sourceEntity, coordsOption, backupCoordsOption, targetPos, targetRot, targetEntity, targetTrans, targetCoods, useDefaultTarget, caster, other, instancedAbility, relativeBaseSavePoint, relativeTargetSavePoint, backupRelativeBaseSavePoint, backupRelativeTargetSavePoint, forceUseBackUp, attackTargetOverride);
		}

		::System::Boolean IsSpecialItemOption(::MoleMole::Config::AbilityTargetting referTarget)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AbilityTargetting))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_ISSPECIALITEMOPTION_OFFSET))(this, referTarget);
		}

		::UnityEngine::Transform* ChooseSpecialTransform(::MoleMole::Battle::Entity* sourceEntity, ::MoleMole::Config::AbilityTargetting referTarget, ::MoleMole::Config::DynamicString* paramNodePoint, ::System::Boolean& getLogicPos, ::LFGBJHCEJID& logicPosRot, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Config::AbilityTargetting, ::MoleMole::Config::DynamicString*, ::System::Boolean&, ::LFGBJHCEJID&, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_CHOOSESPECIALTRANSFORM_OFFSET))(this, sourceEntity, referTarget, paramNodePoint, getLogicPos, logicPosRot, instancedAbility);
		}

		::System::Boolean ChooseEntityOrTransform(::MGHNAPKHBOG sourceEntity, ::MoleMole::Config::AbilityTargetting referTarget, ::MoleMole::Config::AbilityTargetting backupTarget, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::MGHNAPKHBOG& targetEntity, ::UnityEngine::Transform*& targetTransform, ::System::Boolean& useDefaultTarget, ::System::Boolean& useLogicPos, ::LFGBJHCEJID& logicPosRot, ::JCADHFOKIHK* instancedAbility, ::System::Boolean forceUseBackUp, ::MGHNAPKHBOG attackTargetOverride)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGHNAPKHBOG, ::MoleMole::Config::AbilityTargetting, ::MoleMole::Config::AbilityTargetting, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MGHNAPKHBOG&, ::UnityEngine::Transform*&, ::System::Boolean&, ::System::Boolean&, ::LFGBJHCEJID&, ::JCADHFOKIHK*, ::System::Boolean, ::MGHNAPKHBOG))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_CHOOSEENTITYORTRANSFORM_OFFSET))(this, sourceEntity, referTarget, backupTarget, caster, other, targetEntity, targetTransform, useDefaultTarget, useLogicPos, logicPosRot, instancedAbility, forceUseBackUp, attackTargetOverride);
		}

		::System::Boolean GetEntityPosRotByTarget(::MGHNAPKHBOG target, ::MGHNAPKHBOG sourceEntity, ::MoleMole::Config::ReferTargetCoordsOption coordsOption, ::UnityEngine::Vector3& targetPos, ::UnityEngine::Quaternion& targetRot, ::UnityEngine::Transform*& targetTrans, ::KNOHFGCKLFA& targetCoods, ::System::Boolean useDefaultTarget, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::UnityEngine::Transform* findTargetTransform, ::JCADHFOKIHK* instancedAbility, ::MoleMole::Config::DynamicString* relativeBaseSavePoint, ::MoleMole::Config::DynamicString* relativeTargetSavePoint, ::System::Boolean useLogicPosAndRot, ::LFGBJHCEJID logicPosRot)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGHNAPKHBOG, ::MGHNAPKHBOG, ::MoleMole::Config::ReferTargetCoordsOption, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Transform*&, ::KNOHFGCKLFA&, ::System::Boolean, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::Transform*, ::JCADHFOKIHK*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::System::Boolean, ::LFGBJHCEJID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_GETENTITYPOSROTBYTARGET_OFFSET))(this, target, sourceEntity, coordsOption, targetPos, targetRot, targetTrans, targetCoods, useDefaultTarget, caster, other, findTargetTransform, instancedAbility, relativeBaseSavePoint, relativeTargetSavePoint, useLogicPosAndRot, logicPosRot);
		}

		::System::Boolean GetSavePointPosRot(::MoleMole::Battle::Entity* sourceEntity, ::LFGBJHCEJID& posRot, ::System::Boolean& useBackUp, ::MoleMole::Config::ReferTargetCoordsOption coordsOption, ::MoleMole::Battle::Entity* caster, ::MoleMole::Config::DynamicString* relativeBaseSavePoint, ::JCADHFOKIHK* instanceAbility)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::LFGBJHCEJID&, ::System::Boolean&, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Battle::Entity*, ::MoleMole::Config::DynamicString*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_GETSAVEPOINTPOSROT_OFFSET))(this, sourceEntity, posRot, useBackUp, coordsOption, caster, relativeBaseSavePoint, instanceAbility);
		}

		::System::Boolean IsSavePointOption()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_ISSAVEPOINTOPTION_OFFSET))(this);
		}

		::MGHNAPKHBOG GetTargetEntity(::MoleMole::Battle::Entity* sourceEntity, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::MGHNAPKHBOG(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_GETTARGETENTITY_OFFSET))(this, sourceEntity, caster, other, instancedAbility);
		}

		::UnityEngine::Transform* GetAttachPoint(::MoleMole::Battle::Entity* sourceEntity, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_GETATTACHPOINT_OFFSET))(this, sourceEntity, instancedAbility);
		}

		::MGHNAPKHBOG ChoosePosRotTargetEntity(::MGHNAPKHBOG actor, ::MoleMole::Config::AbilityTargetting offsetReferTargetType, ::System::Boolean& useDefaultTarget, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::JCADHFOKIHK* instancedAbility, ::System::Boolean forceUseBackUp, ::MGHNAPKHBOG attackTargetOverride)
		{
			return ((::MGHNAPKHBOG(*)(::PVOID, ::MGHNAPKHBOG, ::MoleMole::Config::AbilityTargetting, ::System::Boolean&, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*, ::System::Boolean, ::MGHNAPKHBOG))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_CHOOSEPOSROTTARGETENTITY_OFFSET))(this, actor, offsetReferTargetType, useDefaultTarget, caster, other, instancedAbility, forceUseBackUp, attackTargetOverride);
		}

		::MGHNAPKHBOG GetAbilityTargetOffsetReferEntity(::MGHNAPKHBOG actor, ::MoleMole::Config::AbilityTargetting referTarget, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::System::Boolean isBackUpTarget, ::JCADHFOKIHK* instancedAbility, ::MGHNAPKHBOG attackTargetOverride)
		{
			return ((::MGHNAPKHBOG(*)(::PVOID, ::MGHNAPKHBOG, ::MoleMole::Config::AbilityTargetting, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::JCADHFOKIHK*, ::MGHNAPKHBOG))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_GETABILITYTARGETOFFSETREFERENTITY_OFFSET))(this, actor, referTarget, caster, other, isBackUpTarget, instancedAbility, attackTargetOverride);
		}

		::LFGBJHCEJID CalFaceOffPosRot(::MGHNAPKHBOG sourceEntity, ::LFGBJHCEJID posRot)
		{
			return ((::LFGBJHCEJID(*)(::PVOID, ::MGHNAPKHBOG, ::LFGBJHCEJID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_CALFACEOFFPOSROT_OFFSET))(this, sourceEntity, posRot);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigPosRotFaceOffReferTarget* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigPosRotFaceOffReferTarget*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::PosRotTargetOption* Clone()
		{
			return ((::MoleMole::Config::PosRotTargetOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigPosRotFaceOffReferTarget* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigPosRotFaceOffReferTarget*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_PARSEFROMFLX_OFFSET))(node);
		}

		::UnityEngine::Transform* __base_GetAttachPoint(::MoleMole::Battle::Entity* P0, ::JCADHFOKIHK* P1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET___BASE_GETATTACHPOINT_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GetEntityPosRotByTarget(::MGHNAPKHBOG P0, ::MGHNAPKHBOG P1, ::MoleMole::Config::ReferTargetCoordsOption P2, ::UnityEngine::Vector3& P3, ::UnityEngine::Quaternion& P4, ::UnityEngine::Transform*& P5, ::KNOHFGCKLFA& P6, ::System::Boolean P7, ::MoleMole::Battle::Entity* P8, ::MoleMole::Battle::Entity* P9, ::UnityEngine::Transform* P10, ::JCADHFOKIHK* P11, ::MoleMole::Config::DynamicString* P12, ::MoleMole::Config::DynamicString* P13, ::System::Boolean P14, ::LFGBJHCEJID P15)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGHNAPKHBOG, ::MGHNAPKHBOG, ::MoleMole::Config::ReferTargetCoordsOption, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Transform*&, ::KNOHFGCKLFA&, ::System::Boolean, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::Transform*, ::JCADHFOKIHK*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::System::Boolean, ::LFGBJHCEJID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET___BASE_GETENTITYPOSROTBYTARGET_OFFSET))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15);
		}

		::System::Boolean __base_GetSavePointPosRot(::MoleMole::Battle::Entity* P0, ::LFGBJHCEJID& P1, ::System::Boolean& P2, ::MoleMole::Config::ReferTargetCoordsOption P3, ::MoleMole::Battle::Entity* P4, ::MoleMole::Config::DynamicString* P5, ::JCADHFOKIHK* P6)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::LFGBJHCEJID&, ::System::Boolean&, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Battle::Entity*, ::MoleMole::Config::DynamicString*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET___BASE_GETSAVEPOINTPOSROT_OFFSET))(this, P0, P1, P2, P3, P4, P5, P6);
		}

		::MGHNAPKHBOG __base_GetTargetEntity(::MoleMole::Battle::Entity* P0, ::MoleMole::Battle::Entity* P1, ::MoleMole::Battle::Entity* P2, ::JCADHFOKIHK* P3)
		{
			return ((::MGHNAPKHBOG(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET___BASE_GETTARGETENTITY_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean __base_GetTargetEntityPosRot(::MGHNAPKHBOG P0, ::MoleMole::Config::ReferTargetCoordsOption P1, ::MoleMole::Config::ReferTargetCoordsOption P2, ::UnityEngine::Vector3& P3, ::UnityEngine::Quaternion& P4, ::MGHNAPKHBOG& P5, ::UnityEngine::Transform*& P6, ::KNOHFGCKLFA& P7, ::System::Boolean& P8, ::MoleMole::Battle::Entity* P9, ::MoleMole::Battle::Entity* P10, ::JCADHFOKIHK* P11, ::MoleMole::Config::DynamicString* P12, ::MoleMole::Config::DynamicString* P13, ::MoleMole::Config::DynamicString* P14, ::MoleMole::Config::DynamicString* P15, ::System::Boolean P16, ::MGHNAPKHBOG P17)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGHNAPKHBOG, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Config::ReferTargetCoordsOption, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::MGHNAPKHBOG&, ::UnityEngine::Transform*&, ::KNOHFGCKLFA&, ::System::Boolean&, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::System::Boolean, ::MGHNAPKHBOG))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET___BASE_GETTARGETENTITYPOSROT_OFFSET))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17);
		}

		::System::Boolean __base_IsReferTargetCamera(::MGHNAPKHBOG P0, ::MoleMole::Config::ReferTargetCoordsOption P1, ::MoleMole::Config::ReferTargetCoordsOption P2, ::MoleMole::Battle::Entity* P3, ::MoleMole::Battle::Entity* P4, ::JCADHFOKIHK* P5, ::System::Boolean P6)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGHNAPKHBOG, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET___BASE_ISREFERTARGETCAMERA_OFFSET))(this, P0, P1, P2, P3, P4, P5, P6);
		}

		::System::Boolean __base_IsSavePointOption()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET___BASE_ISSAVEPOINTOPTION_OFFSET))(this);
		}
	};
}

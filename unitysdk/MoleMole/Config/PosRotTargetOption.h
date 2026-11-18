#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/ReferTargetCoordsOption.h"
#include "unitysdk/System/Object.h"
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
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_CLONE_OFFSET UNITYSDK_OFFSET(0x127955D0)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x12777F40)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12777D70)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_FROMFLX_OFFSET UNITYSDK_OFFSET(0x127956E0)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_GETATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x12782290)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_GETENTITYPOSROTBYTARGET_OFFSET UNITYSDK_OFFSET(0x127823E0)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x127956D0)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_GETOFFSETREFERTARGET_OFFSET UNITYSDK_OFFSET(0x127786A0)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_GETSAVEPOINTPOSROT_OFFSET UNITYSDK_OFFSET(0x12782740)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_GETTARGETENTITYPOSROT_OFFSET UNITYSDK_OFFSET(0x12778930)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x127787A0)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x12795470)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x127784D0)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_ISREFERTARGETCAMERA_OFFSET UNITYSDK_OFFSET(0x12782A80)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_ISSAVEPOINTOPTION_OFFSET UNITYSDK_OFFSET(0x12782B60)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x12795480)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x12795740)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x12776640)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PosRotTargetOption_TypeDefinitionIndex = 63530;

	class PosRotTargetOption : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION__CTOR_OFFSET))(this);
		}

		::System::Boolean IsReferTargetCamera(::MGHNAPKHBOG sourceEntity, ::MoleMole::Config::ReferTargetCoordsOption coordsOption, ::MoleMole::Config::ReferTargetCoordsOption backupCoordsOption, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::JCADHFOKIHK* instancedAbility, ::System::Boolean forceUseBackUp)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGHNAPKHBOG, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_ISREFERTARGETCAMERA_OFFSET))(this, sourceEntity, coordsOption, backupCoordsOption, caster, other, instancedAbility, forceUseBackUp);
		}

		::System::Boolean GetTargetEntityPosRot(::MGHNAPKHBOG sourceEntity, ::MoleMole::Config::ReferTargetCoordsOption coordsOption, ::MoleMole::Config::ReferTargetCoordsOption backupCoordsOption, ::UnityEngine::Vector3& targetPos, ::UnityEngine::Quaternion& targetRot, ::MGHNAPKHBOG& targetEntity, ::UnityEngine::Transform*& targetTrans, ::KNOHFGCKLFA& targetCoords, ::System::Boolean& useDefaultTarget, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::JCADHFOKIHK* instancedAbility, ::MoleMole::Config::DynamicString* relativeBaseSavePoint, ::MoleMole::Config::DynamicString* relativeTargetSavePoint, ::MoleMole::Config::DynamicString* backupRelativeBaseSavePoint, ::MoleMole::Config::DynamicString* backupRelativeTargetSavePoint, ::System::Boolean forceUseBackUp, ::MGHNAPKHBOG attackTargetOverride)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGHNAPKHBOG, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Config::ReferTargetCoordsOption, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::MGHNAPKHBOG&, ::UnityEngine::Transform*&, ::KNOHFGCKLFA&, ::System::Boolean&, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::System::Boolean, ::MGHNAPKHBOG))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_GETTARGETENTITYPOSROT_OFFSET))(this, sourceEntity, coordsOption, backupCoordsOption, targetPos, targetRot, targetEntity, targetTrans, targetCoords, useDefaultTarget, caster, other, instancedAbility, relativeBaseSavePoint, relativeTargetSavePoint, backupRelativeBaseSavePoint, backupRelativeTargetSavePoint, forceUseBackUp, attackTargetOverride);
		}

		::System::Boolean GetEntityPosRotByTarget(::MGHNAPKHBOG targetEntity, ::MGHNAPKHBOG sourceEntity, ::MoleMole::Config::ReferTargetCoordsOption coordsOption, ::UnityEngine::Vector3& targetPos, ::UnityEngine::Quaternion& targetRot, ::UnityEngine::Transform*& targetTrans, ::KNOHFGCKLFA& targetCoods, ::System::Boolean useDefault, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::UnityEngine::Transform* findTargetTransform, ::JCADHFOKIHK* instancedAbility, ::MoleMole::Config::DynamicString* relativeBaseSavePoint, ::MoleMole::Config::DynamicString* relativeTargetSavePoint, ::System::Boolean useLogicPosAndRot, ::LFGBJHCEJID logicPosRot)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGHNAPKHBOG, ::MGHNAPKHBOG, ::MoleMole::Config::ReferTargetCoordsOption, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Transform*&, ::KNOHFGCKLFA&, ::System::Boolean, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::Transform*, ::JCADHFOKIHK*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::System::Boolean, ::LFGBJHCEJID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_GETENTITYPOSROTBYTARGET_OFFSET))(this, targetEntity, sourceEntity, coordsOption, targetPos, targetRot, targetTrans, targetCoods, useDefault, caster, other, findTargetTransform, instancedAbility, relativeBaseSavePoint, relativeTargetSavePoint, useLogicPosAndRot, logicPosRot);
		}

		::UnityEngine::Transform* GetAttachPoint(::MoleMole::Battle::Entity* sourceEntity, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_GETATTACHPOINT_OFFSET))(this, sourceEntity, instancedAbility);
		}

		::System::Boolean IsSavePointOption()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_ISSAVEPOINTOPTION_OFFSET))(this);
		}

		::MGHNAPKHBOG GetTargetEntity(::MoleMole::Battle::Entity* sourceEntity, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::MGHNAPKHBOG(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_GETTARGETENTITY_OFFSET))(this, sourceEntity, caster, other, instancedAbility);
		}

		::System::Boolean GetSavePointPosRot(::MoleMole::Battle::Entity* sourceEntity, ::LFGBJHCEJID& posRot, ::System::Boolean& useBackUp, ::MoleMole::Config::ReferTargetCoordsOption coordsOption, ::MoleMole::Battle::Entity* caster, ::MoleMole::Config::DynamicString* relativeBaseSavePoint, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::LFGBJHCEJID&, ::System::Boolean&, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Battle::Entity*, ::MoleMole::Config::DynamicString*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_GETSAVEPOINTPOSROT_OFFSET))(this, sourceEntity, posRot, useBackUp, coordsOption, caster, relativeBaseSavePoint, instancedAbility);
		}

		::System::Void GetOffsetReferTarget(::MoleMole::Config::AbilityTargetting& offsetReferTarget, ::MoleMole::Config::AbilityTargetting& backupOffsetReferTarget)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AbilityTargetting&, ::MoleMole::Config::AbilityTargetting&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_GETOFFSETREFERTARGET_OFFSET))(this, offsetReferTarget, backupOffsetReferTarget);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::PosRotTargetOption* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::PosRotTargetOption*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::PosRotTargetOption* Clone()
		{
			return ((::MoleMole::Config::PosRotTargetOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::PosRotTargetOption* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::PosRotTargetOption*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_PARSEFROMFLX_OFFSET))(node);
		}
	};
}

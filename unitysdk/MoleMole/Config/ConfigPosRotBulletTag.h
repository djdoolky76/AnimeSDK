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
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_CLONE_OFFSET UNITYSDK_OFFSET(0x1C6CF0D0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_FINDBULLETENTITYBYTAG_OFFSET UNITYSDK_OFFSET(0x1C6CD560)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C6CF050)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C6CEAD0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1C6CF1E0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_GETENTITYPOSROTBYTARGET_OFFSET UNITYSDK_OFFSET(0x1C6CE740)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1C6CF1D0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_GETTARGETENTITYPOSROT_OFFSET UNITYSDK_OFFSET(0x1C6CCB60)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x1C6CE990)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C6CEB30)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1C6CF260)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C6CEEA0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1C6CFA30)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_RESOLVETARGETENTITY_OFFSET UNITYSDK_OFFSET(0x1C6CD760)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6CFB90)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG___BASE_GETENTITYPOSROTBYTARGET_OFFSET UNITYSDK_OFFSET(0x1C6CFBA0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG___BASE_GETTARGETENTITYPOSROT_OFFSET UNITYSDK_OFFSET(0x1C6CFD80)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG___BASE_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x1C6CFCA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPosRotBulletTag_TypeDefinitionIndex = 77313;

	class ConfigPosRotBulletTag : public ::MoleMole::Config::PosRotTargetOption
	{
	public:
		::MoleMole::Config::DynamicString* CustomKey; // 0x10
		::System::String* BulletTag; // 0x18
		::System::String* AttachPoint; // 0x20
		::System::Boolean IsUseAttachPoint; // 0x28
		::System::Byte _padding0[0x3];
		::MoleMole::Config::AbilityTargetting OffsetReferTarget; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG__CTOR_OFFSET))(this);
		}

		::System::Boolean GetTargetEntityPosRot(::MGHNAPKHBOG sourceEntity, ::MoleMole::Config::ReferTargetCoordsOption coordsOption, ::MoleMole::Config::ReferTargetCoordsOption backupCoordsOption, ::UnityEngine::Vector3& targetPos, ::UnityEngine::Quaternion& targetRot, ::MGHNAPKHBOG& targetEntity, ::UnityEngine::Transform*& targetTrans, ::KNOHFGCKLFA& targetCoords, ::System::Boolean& useDefaultTarget, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::JCADHFOKIHK* instancedAbility, ::MoleMole::Config::DynamicString* relativeBaseSavePoint, ::MoleMole::Config::DynamicString* relativeTargetSavePoint, ::MoleMole::Config::DynamicString* backupRelativeBaseSavePoint, ::MoleMole::Config::DynamicString* backupRelativeTargetSavePoint, ::System::Boolean forceUseBackUp, ::MGHNAPKHBOG attackTargetOverride)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGHNAPKHBOG, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Config::ReferTargetCoordsOption, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::MGHNAPKHBOG&, ::UnityEngine::Transform*&, ::KNOHFGCKLFA&, ::System::Boolean&, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::System::Boolean, ::MGHNAPKHBOG))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_GETTARGETENTITYPOSROT_OFFSET))(this, sourceEntity, coordsOption, backupCoordsOption, targetPos, targetRot, targetEntity, targetTrans, targetCoords, useDefaultTarget, caster, other, instancedAbility, relativeBaseSavePoint, relativeTargetSavePoint, backupRelativeBaseSavePoint, backupRelativeTargetSavePoint, forceUseBackUp, attackTargetOverride);
		}

		::System::Boolean GetEntityPosRotByTarget(::MGHNAPKHBOG target, ::MGHNAPKHBOG sourceEntity, ::MoleMole::Config::ReferTargetCoordsOption coordsOption, ::UnityEngine::Vector3& targetPos, ::UnityEngine::Quaternion& targetRot, ::UnityEngine::Transform*& targetTrans, ::KNOHFGCKLFA& targetCoords, ::System::Boolean useDefault, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::UnityEngine::Transform* findTargetTransform, ::JCADHFOKIHK* instancedAbility, ::MoleMole::Config::DynamicString* relativeBaseSavePoint, ::MoleMole::Config::DynamicString* relativeTargetSavePoint, ::System::Boolean useLogicPosAndRot, ::LFGBJHCEJID logicPosRot)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGHNAPKHBOG, ::MGHNAPKHBOG, ::MoleMole::Config::ReferTargetCoordsOption, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Transform*&, ::KNOHFGCKLFA&, ::System::Boolean, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::Transform*, ::JCADHFOKIHK*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::System::Boolean, ::LFGBJHCEJID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_GETENTITYPOSROTBYTARGET_OFFSET))(this, target, sourceEntity, coordsOption, targetPos, targetRot, targetTrans, targetCoords, useDefault, caster, other, findTargetTransform, instancedAbility, relativeBaseSavePoint, relativeTargetSavePoint, useLogicPosAndRot, logicPosRot);
		}

		::MGHNAPKHBOG GetTargetEntity(::MoleMole::Battle::Entity* sourceEntity, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::MGHNAPKHBOG(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_GETTARGETENTITY_OFFSET))(this, sourceEntity, caster, other, instancedAbility);
		}

		::MoleMole::Battle::Entity* FindBulletEntityByTag(::MoleMole::Battle::Entity* sourceEntity)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_FINDBULLETENTITYBYTAG_OFFSET))(this, sourceEntity);
		}

		::MGHNAPKHBOG ResolveTargetEntity(::MGHNAPKHBOG actor, ::MoleMole::Config::AbilityTargetting referTarget, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::MoleMole::Config::DynamicString* customKey, ::JCADHFOKIHK* instancedAbility, ::MGHNAPKHBOG attackTargetOverride)
		{
			return ((::MGHNAPKHBOG(*)(::PVOID, ::MGHNAPKHBOG, ::MoleMole::Config::AbilityTargetting, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::DynamicString*, ::JCADHFOKIHK*, ::MGHNAPKHBOG))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_RESOLVETARGETENTITY_OFFSET))(this, actor, referTarget, caster, other, customKey, instancedAbility, attackTargetOverride);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigPosRotBulletTag* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigPosRotBulletTag*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::PosRotTargetOption* Clone()
		{
			return ((::MoleMole::Config::PosRotTargetOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigPosRotBulletTag* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigPosRotBulletTag*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean __base_GetEntityPosRotByTarget(::MGHNAPKHBOG P0, ::MGHNAPKHBOG P1, ::MoleMole::Config::ReferTargetCoordsOption P2, ::UnityEngine::Vector3& P3, ::UnityEngine::Quaternion& P4, ::UnityEngine::Transform*& P5, ::KNOHFGCKLFA& P6, ::System::Boolean P7, ::MoleMole::Battle::Entity* P8, ::MoleMole::Battle::Entity* P9, ::UnityEngine::Transform* P10, ::JCADHFOKIHK* P11, ::MoleMole::Config::DynamicString* P12, ::MoleMole::Config::DynamicString* P13, ::System::Boolean P14, ::LFGBJHCEJID P15)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGHNAPKHBOG, ::MGHNAPKHBOG, ::MoleMole::Config::ReferTargetCoordsOption, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Transform*&, ::KNOHFGCKLFA&, ::System::Boolean, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::Transform*, ::JCADHFOKIHK*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::System::Boolean, ::LFGBJHCEJID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG___BASE_GETENTITYPOSROTBYTARGET_OFFSET))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15);
		}

		::MGHNAPKHBOG __base_GetTargetEntity(::MoleMole::Battle::Entity* P0, ::MoleMole::Battle::Entity* P1, ::MoleMole::Battle::Entity* P2, ::JCADHFOKIHK* P3)
		{
			return ((::MGHNAPKHBOG(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG___BASE_GETTARGETENTITY_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean __base_GetTargetEntityPosRot(::MGHNAPKHBOG P0, ::MoleMole::Config::ReferTargetCoordsOption P1, ::MoleMole::Config::ReferTargetCoordsOption P2, ::UnityEngine::Vector3& P3, ::UnityEngine::Quaternion& P4, ::MGHNAPKHBOG& P5, ::UnityEngine::Transform*& P6, ::KNOHFGCKLFA& P7, ::System::Boolean& P8, ::MoleMole::Battle::Entity* P9, ::MoleMole::Battle::Entity* P10, ::JCADHFOKIHK* P11, ::MoleMole::Config::DynamicString* P12, ::MoleMole::Config::DynamicString* P13, ::MoleMole::Config::DynamicString* P14, ::MoleMole::Config::DynamicString* P15, ::System::Boolean P16, ::MGHNAPKHBOG P17)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGHNAPKHBOG, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Config::ReferTargetCoordsOption, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::MGHNAPKHBOG&, ::UnityEngine::Transform*&, ::KNOHFGCKLFA&, ::System::Boolean&, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::System::Boolean, ::MGHNAPKHBOG))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG___BASE_GETTARGETENTITYPOSROT_OFFSET))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17);
		}
	};
}

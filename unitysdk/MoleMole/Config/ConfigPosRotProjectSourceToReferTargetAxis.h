#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/PosRotTargetOption.h"
#include "unitysdk/MoleMole/Config/ReferTargetCoordsOption.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/KNOHFGCKLFA.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class FKNIEPCILLG;
class JCADHFOKIHK;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS_CLONE_OFFSET UNITYSDK_OFFSET(0x12777F50)
#define MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x12777F30)
#define MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12777B30)
#define MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12778060)
#define MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x12778050)
#define MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS_GETOFFSETREFERTARGET_OFFSET UNITYSDK_OFFSET(0x12777920)
#define MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS_GETTARGETENTITYPOSROT_OFFSET UNITYSDK_OFFSET(0x12776650)
#define MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x12777980)
#define MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x12777B90)
#define MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x127780E0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x12777D80)
#define MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x127784E0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS_RESOLVEREFERTARGET_OFFSET UNITYSDK_OFFSET(0x127770A0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS_RESOLVESAFEUP_OFFSET UNITYSDK_OFFSET(0x127775F0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS_TRYGETTARGETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x127773C0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS__CTOR_OFFSET UNITYSDK_OFFSET(0x12776630)
#define MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS___BASE_GETOFFSETREFERTARGET_OFFSET UNITYSDK_OFFSET(0x12778640)
#define MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS___BASE_GETTARGETENTITYPOSROT_OFFSET UNITYSDK_OFFSET(0x12778840)
#define MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS___BASE_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x12778700)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPosRotProjectSourceToReferTargetAxis_TypeDefinitionIndex = 54994;

	class ConfigPosRotProjectSourceToReferTargetAxis : public ::MoleMole::Config::PosRotTargetOption
	{
	public:
		::UnityEngine::Vector3 LocalAxis; // 0x10
		::MoleMole::Config::AbilityTargetting OffsetReferTarget; // 0x1C
		::MoleMole::Config::AbilityTargetting BackupOffsetReferTarget; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS__CTOR_OFFSET))(this);
		}

		::System::Boolean GetTargetEntityPosRot(::MGHNAPKHBOG sourceEntity, ::MoleMole::Config::ReferTargetCoordsOption coordsOption, ::MoleMole::Config::ReferTargetCoordsOption backupCoordsOption, ::UnityEngine::Vector3& targetPos, ::UnityEngine::Quaternion& targetRot, ::MGHNAPKHBOG& targetEntity, ::UnityEngine::Transform*& targetTrans, ::KNOHFGCKLFA& targetCoords, ::System::Boolean& useDefaultTarget, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::JCADHFOKIHK* instancedAbility, ::MoleMole::Config::DynamicString* relativeBaseSavePoint, ::MoleMole::Config::DynamicString* relativeTargetSavePoint, ::MoleMole::Config::DynamicString* backupRelativeBaseSavePoint, ::MoleMole::Config::DynamicString* backupRelativeTargetSavePoint, ::System::Boolean forceUseBackUp, ::MGHNAPKHBOG attackTargetOverride)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGHNAPKHBOG, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Config::ReferTargetCoordsOption, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::MGHNAPKHBOG&, ::UnityEngine::Transform*&, ::KNOHFGCKLFA&, ::System::Boolean&, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::System::Boolean, ::MGHNAPKHBOG))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS_GETTARGETENTITYPOSROT_OFFSET))(this, sourceEntity, coordsOption, backupCoordsOption, targetPos, targetRot, targetEntity, targetTrans, targetCoords, useDefaultTarget, caster, other, instancedAbility, relativeBaseSavePoint, relativeTargetSavePoint, backupRelativeBaseSavePoint, backupRelativeTargetSavePoint, forceUseBackUp, attackTargetOverride);
		}

		static ::UnityEngine::Vector3 ResolveSafeUp(::UnityEngine::Quaternion referRot, ::UnityEngine::Vector3 axis)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS_RESOLVESAFEUP_OFFSET))(referRot, axis);
		}

		::System::Void GetOffsetReferTarget(::MoleMole::Config::AbilityTargetting& offsetReferTarget, ::MoleMole::Config::AbilityTargetting& backupOffsetReferTarget)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AbilityTargetting&, ::MoleMole::Config::AbilityTargetting&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS_GETOFFSETREFERTARGET_OFFSET))(this, offsetReferTarget, backupOffsetReferTarget);
		}

		::MGHNAPKHBOG GetTargetEntity(::MoleMole::Battle::Entity* sourceEntity, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::MGHNAPKHBOG(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS_GETTARGETENTITY_OFFSET))(this, sourceEntity, caster, other, instancedAbility);
		}

		static ::MGHNAPKHBOG ResolveReferTarget(::MGHNAPKHBOG sourceEntity, ::MoleMole::Config::AbilityTargetting targetting, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::JCADHFOKIHK* instancedAbility, ::MGHNAPKHBOG attackTargetOverride)
		{
			return ((::MGHNAPKHBOG(*)(::MGHNAPKHBOG, ::MoleMole::Config::AbilityTargetting, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*, ::MGHNAPKHBOG))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS_RESOLVEREFERTARGET_OFFSET))(sourceEntity, targetting, caster, other, instancedAbility, attackTargetOverride);
		}

		static ::System::Boolean TryGetTargetTransform(::MGHNAPKHBOG target, ::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rotation)
		{
			return ((::System::Boolean(*)(::MGHNAPKHBOG, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS_TRYGETTARGETTRANSFORM_OFFSET))(target, position, rotation);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigPosRotProjectSourceToReferTargetAxis* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigPosRotProjectSourceToReferTargetAxis*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::PosRotTargetOption* Clone()
		{
			return ((::MoleMole::Config::PosRotTargetOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigPosRotProjectSourceToReferTargetAxis* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigPosRotProjectSourceToReferTargetAxis*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Void __base_GetOffsetReferTarget(::MoleMole::Config::AbilityTargetting& P0, ::MoleMole::Config::AbilityTargetting& P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AbilityTargetting&, ::MoleMole::Config::AbilityTargetting&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS___BASE_GETOFFSETREFERTARGET_OFFSET))(this, P0, P1);
		}

		::MGHNAPKHBOG __base_GetTargetEntity(::MoleMole::Battle::Entity* P0, ::MoleMole::Battle::Entity* P1, ::MoleMole::Battle::Entity* P2, ::JCADHFOKIHK* P3)
		{
			return ((::MGHNAPKHBOG(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS___BASE_GETTARGETENTITY_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean __base_GetTargetEntityPosRot(::MGHNAPKHBOG P0, ::MoleMole::Config::ReferTargetCoordsOption P1, ::MoleMole::Config::ReferTargetCoordsOption P2, ::UnityEngine::Vector3& P3, ::UnityEngine::Quaternion& P4, ::MGHNAPKHBOG& P5, ::UnityEngine::Transform*& P6, ::KNOHFGCKLFA& P7, ::System::Boolean& P8, ::MoleMole::Battle::Entity* P9, ::MoleMole::Battle::Entity* P10, ::JCADHFOKIHK* P11, ::MoleMole::Config::DynamicString* P12, ::MoleMole::Config::DynamicString* P13, ::MoleMole::Config::DynamicString* P14, ::MoleMole::Config::DynamicString* P15, ::System::Boolean P16, ::MGHNAPKHBOG P17)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGHNAPKHBOG, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Config::ReferTargetCoordsOption, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::MGHNAPKHBOG&, ::UnityEngine::Transform*&, ::KNOHFGCKLFA&, ::System::Boolean&, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::System::Boolean, ::MGHNAPKHBOG))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTPROJECTSOURCETOREFERTARGETAXIS___BASE_GETTARGETENTITYPOSROT_OFFSET))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LFGBJHCEJID.h"
#include "unitysdk/MoleMole/Config/ReferTargetCoordsOption.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/EFOAJCLMLDA.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/KNOHFGCKLFA.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FKNIEPCILLG;
class GEIHCPAOKKK;
class JCADHFOKIHK;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicString; }
namespace MoleMole::Config { class OffsetGroup; }
namespace MoleMole::Config { class PosRotTargetOption; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_CONFIG_CONFIGPOSROT_CHOOSEENTITYPOSROTBYTARGET_OFFSET UNITYSDK_OFFSET(0x192A24C0)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_CHOOSEENTITYPOSROT_OFFSET UNITYSDK_OFFSET(0x192A2120)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_DORAYCASTGROUND_OFFSET UNITYSDK_OFFSET(0x192A5730)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_DRAWPOSROT_OFFSET UNITYSDK_OFFSET(0x192A1C70)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x192A6850)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x192A6D90)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_GETATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x192A5D40)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_GETFINALPOSROT_OFFSET UNITYSDK_OFFSET(0x192A47E0)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_GETPOSROTANDRESULT_OFFSET UNITYSDK_OFFSET(0x192A3DA0)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_GETPOSROTBYTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x192A3990)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_GETPOSROTINFO_OFFSET UNITYSDK_OFFSET(0x192A5E00)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_GETPOSROT_1_OFFSET UNITYSDK_OFFSET(0x192A2970)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_GETPOSROT_OFFSET UNITYSDK_OFFSET(0x192A1EE0)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x192A68B0)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x192A6E10)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_ISREFERTARGETCAMERA_OFFSET UNITYSDK_OFFSET(0x192A6740)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_RAWGETPOSROOT_OFFSET UNITYSDK_OFFSET(0x192A30C0)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x192A66F0)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_TRYGETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x192A27D0)
#define MOLEMOLE_CONFIG_CONFIGPOSROT__CCTOR_OFFSET UNITYSDK_OFFSET(0x192A7DC0)
#define MOLEMOLE_CONFIG_CONFIGPOSROT__CTOR_OFFSET UNITYSDK_OFFSET(0x192A2060)
#define MOLEMOLE_CONFIG_CONFIGPOSROT___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x192A7F30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPosRot_TypeDefinitionIndex = 39164;

	class ConfigPosRot : public ::System::Object
	{
	public:
		static ::MoleMole::Config::ConfigPosRot** StaticGet_DEFAULT()
		{
			return (::MoleMole::Config::ConfigPosRot**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRot_TypeDefinitionIndex)->GetStaticField(0x44070);
		}
		static ::LFGBJHCEJID* StaticGet_cachedPosRot()
		{
			return (::LFGBJHCEJID*)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRot_TypeDefinitionIndex)->GetStaticField(0xFBD0);
		}
		// static const ::System::Single DEFAULT_RAYCAST_LENGTH; // 0x0
		::MoleMole::Config::DynamicString* RelativeTargetSavePoint; // 0x10
		::MoleMole::Config::DynamicString* RelativeBaseSavePoint; // 0x18
		::MoleMole::Config::PosRotTargetOption* TargetOption; // 0x20
		::MoleMole::Config::DynamicString* BackupRelativeBaseSavePoint; // 0x28
		::MoleMole::Config::OffsetGroup* Offset; // 0x30
		::MoleMole::Config::DynamicString* BackupRelativeTargetSavePoint; // 0x38
		::System::Boolean NeedRaycastGround; // 0x40
		::System::Byte _padding0[0x3];
		::MoleMole::Config::ReferTargetCoordsOption BackupCoordsOption; // 0x44
		::MoleMole::Config::ReferTargetCoordsOption CoordsOption; // 0x48
		::UnityEngine::RaycastHit _hitInfo; // 0x4C
		::System::Single RaycastGroundOffset; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT__CCTOR_OFFSET))();
		}

		::System::Void DrawPosRot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_DRAWPOSROT_OFFSET))(this);
		}

		::System::Boolean ChooseEntityPosRot(::MGHNAPKHBOG actor, ::MoleMole::Config::PosRotTargetOption* targetOption, ::UnityEngine::Vector3& targetPos, ::UnityEngine::Quaternion& targetRot, ::MGHNAPKHBOG& targetEntity, ::UnityEngine::Transform*& targetTrans, ::KNOHFGCKLFA& targetCoords, ::System::Boolean& useDefaultTarget, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::JCADHFOKIHK* instancedAbility, ::System::Boolean forceUseBackUp, ::MGHNAPKHBOG attackTargetOverride)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGHNAPKHBOG, ::MoleMole::Config::PosRotTargetOption*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::MGHNAPKHBOG&, ::UnityEngine::Transform*&, ::KNOHFGCKLFA&, ::System::Boolean&, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*, ::System::Boolean, ::MGHNAPKHBOG))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_CHOOSEENTITYPOSROT_OFFSET))(this, actor, targetOption, targetPos, targetRot, targetEntity, targetTrans, targetCoords, useDefaultTarget, caster, other, instancedAbility, forceUseBackUp, attackTargetOverride);
		}

		::System::Boolean ChooseEntityPosRotByTarget(::MGHNAPKHBOG actor, ::MGHNAPKHBOG targetEntity, ::MoleMole::Config::PosRotTargetOption* targetOption, ::UnityEngine::Vector3& targetPos, ::UnityEngine::Quaternion& targetRot, ::UnityEngine::Transform*& targetTrans, ::KNOHFGCKLFA& targetCoords, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGHNAPKHBOG, ::MGHNAPKHBOG, ::MoleMole::Config::PosRotTargetOption*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Transform*&, ::KNOHFGCKLFA&, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_CHOOSEENTITYPOSROTBYTARGET_OFFSET))(this, actor, targetEntity, targetOption, targetPos, targetRot, targetTrans, targetCoords, instancedAbility);
		}

		::System::Boolean TryGetTargetEntity(::MoleMole::Battle::Entity* sourceEntity, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::MGHNAPKHBOG& targetEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MGHNAPKHBOG&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_TRYGETTARGETENTITY_OFFSET))(this, sourceEntity, caster, other, targetEntity);
		}

		::System::Boolean GetPosRot(::MoleMole::Battle::Entity* sourceEntity, ::LFGBJHCEJID& posRot, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::LFGBJHCEJID&, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_GETPOSROT_OFFSET))(this, sourceEntity, posRot, caster, other, instancedAbility);
		}

		::System::Boolean GetPosRot_1(::MGHNAPKHBOG sourceEntity, ::LFGBJHCEJID& posRot, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::System::Boolean isUseCachedPosRot, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGHNAPKHBOG, ::LFGBJHCEJID&, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_GETPOSROT_1_OFFSET))(this, sourceEntity, posRot, caster, other, isUseCachedPosRot, instancedAbility);
		}

		::System::Boolean GetPosRotByTargetEntity(::MGHNAPKHBOG sourceEntity, ::MGHNAPKHBOG targetEntity, ::LFGBJHCEJID& posRot, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGHNAPKHBOG, ::MGHNAPKHBOG, ::LFGBJHCEJID&, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_GETPOSROTBYTARGETENTITY_OFFSET))(this, sourceEntity, targetEntity, posRot, instancedAbility);
		}

		::System::Boolean GetPosRotAndResult(::MGHNAPKHBOG sourceEntity, ::LFGBJHCEJID& posRot, ::MGHNAPKHBOG& findTarget, ::System::Boolean& useDefaultTarget, ::UnityEngine::Vector3 changePosVectorValue, ::System::Boolean changePosOffset, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::JCADHFOKIHK* instancedAbility, ::System::Boolean isReverseOffsetX, ::System::Boolean forceUseBackUp)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGHNAPKHBOG, ::LFGBJHCEJID&, ::MGHNAPKHBOG&, ::System::Boolean&, ::UnityEngine::Vector3, ::System::Boolean, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_GETPOSROTANDRESULT_OFFSET))(this, sourceEntity, posRot, findTarget, useDefaultTarget, changePosVectorValue, changePosOffset, caster, other, instancedAbility, isReverseOffsetX, forceUseBackUp);
		}

		::System::Boolean RawGetPosRoot(::MGHNAPKHBOG sourceEntity, ::LFGBJHCEJID& posRot, ::UnityEngine::Vector3 changePosVectorValue, ::System::Boolean changePosOffset, ::System::Boolean isReverseOffsetX, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::System::Boolean isUseCachedPosRot, ::JCADHFOKIHK* instancedAbility, ::MGHNAPKHBOG attackTargetOverride)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGHNAPKHBOG, ::LFGBJHCEJID&, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::JCADHFOKIHK*, ::MGHNAPKHBOG))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_RAWGETPOSROOT_OFFSET))(this, sourceEntity, posRot, changePosVectorValue, changePosOffset, isReverseOffsetX, caster, other, isUseCachedPosRot, instancedAbility, attackTargetOverride);
		}

		::System::Boolean GetFinalPosRot(::MoleMole::Battle::Entity* sourceEntity, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Quaternion targetRot, ::KNOHFGCKLFA targetCoords, ::LFGBJHCEJID& posRot, ::UnityEngine::Vector3 changePosVectorValue, ::System::Boolean changePosOffset, ::System::Boolean useDefaultTarget, ::System::Boolean isReverseOffsetX, ::System::Boolean isUseCachedPosRot)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::KNOHFGCKLFA, ::LFGBJHCEJID&, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_GETFINALPOSROT_OFFSET))(this, sourceEntity, targetPos, targetRot, targetCoords, posRot, changePosVectorValue, changePosOffset, useDefaultTarget, isReverseOffsetX, isUseCachedPosRot);
		}

		::System::Boolean DoRayCastGround(::GEIHCPAOKKK* sourceEntityModel, ::UnityEngine::Vector3 startPos, ::System::Single& raycastY)
		{
			return ((::System::Boolean(*)(::PVOID, ::GEIHCPAOKKK*, ::UnityEngine::Vector3, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_DORAYCASTGROUND_OFFSET))(this, sourceEntityModel, startPos, raycastY);
		}

		::UnityEngine::Transform* GetAttachPoint(::MoleMole::Battle::Entity* sourceEntity)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_GETATTACHPOINT_OFFSET))(this, sourceEntity);
		}

		::System::Boolean GetPosRotInfo(::MoleMole::Battle::Entity* actor, ::EFOAJCLMLDA& posRotInfo, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::EFOAJCLMLDA&, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_GETPOSROTINFO_OFFSET))(this, actor, posRotInfo, instancedAbility);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_TOSTRING_OFFSET))(this);
		}

		::System::Boolean IsReferTargetCamera(::MoleMole::Battle::Entity* sourceEntity, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::JCADHFOKIHK* instancedAbility, ::System::Boolean forceUseBackUp)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_ISREFERTARGETCAMERA_OFFSET))(this, sourceEntity, caster, other, instancedAbility, forceUseBackUp);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT___BASE_TOSTRING_OFFSET))(this);
		}
	};
}

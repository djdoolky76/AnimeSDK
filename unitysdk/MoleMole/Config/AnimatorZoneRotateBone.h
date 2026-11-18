#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimDamperParam.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimFixedParam.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimType.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneRotateBone_LocalAxisType.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class OCEAHJEGOBJ;
class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CALCLAMPEDANGLESINGED_OFFSET UNITYSDK_OFFSET(0x11E80600)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CALLIMITMIDDLE_OFFSET UNITYSDK_OFFSET(0x11E7DA00)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CALSIGNEDANGLE_OFFSET UNITYSDK_OFFSET(0x11E7FED0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CHECKJOINKEY_OFFSET UNITYSDK_OFFSET(0x11E7E820)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x11E7D970)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_DRAWAXIS_OFFSET UNITYSDK_OFFSET(0x11E7FE80)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_GETTARGETPOS_OFFSET UNITYSDK_OFFSET(0x11E7EE60)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_IGNOREOTHERWHENSAMEKEY_OFFSET UNITYSDK_OFFSET(0x11E7E640)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_JOINOTHERZONE_OFFSET UNITYSDK_OFFSET(0x11E7E4D0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_LOCALAXISTYPE2VEC3_OFFSET UNITYSDK_OFFSET(0x11E7E0E0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x11E7DAD0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x11E80170)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_PROCESSFIXEDANIMATORPARAM_OFFSET UNITYSDK_OFFSET(0x11E7FAE0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_RELEASESAMEKEYIGNORE_OFFSET UNITYSDK_OFFSET(0x11E803F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_REVISEBYLIMIT_OFFSET UNITYSDK_OFFSET(0x11E7F940)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_ROTATETOTARGET_OFFSET UNITYSDK_OFFSET(0x11E7EF10)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_UPDATELOCALROTATECOORDINATE_OFFSET UNITYSDK_OFFSET(0x11E7F780)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_UPDATEROTATE_OFFSET UNITYSDK_OFFSET(0x11E7E970)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE__CTOR_OFFSET UNITYSDK_OFFSET(0x11E80A30)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x11E80A70)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x11E80B40)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x11E80BF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneRotateBone_TypeDefinitionIndex = 70331;

	class AnimatorZoneRotateBone : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::MoleMole::Battle::ProceduralAnimFixedParam TickFixedParam; // 0x50
		::System::Collections::Generic::List_1<::System::String*>* JoinZoneKeyList; // 0x90
		::MoleMole::Battle::ProceduralAnimFixedParam ExitFixedParam; // 0x98
		::System::String* ZoneKey; // 0xD8
		::MoleMole::Config::ConfigPosRot* ConfigPosRot; // 0xE0
		::System::String* RotateBoneName; // 0xE8
		::System::Boolean InverseUpAxis; // 0xF0
		::System::Boolean ExitNeedReset; // 0xF1
		::System::Boolean InverseForwardAxis; // 0xF2
		::System::Byte _padding0[0x1];
		::MoleMole::Battle::ProceduralAnimType TickAnimType; // 0xF4
		::MoleMole::Battle::ProceduralAnimDamperParam ExitDamperParam; // 0xF8
		::MoleMole::Battle::ProceduralAnimType ExitAnimType; // 0x108
		::MoleMole::Config::AnimatorZoneRotateBone_LocalAxisType ForwardAxisType; // 0x10C
		::System::Single RotAngleLimitRight; // 0x110
		::MoleMole::Config::AnimatorZoneRotateBone_LocalAxisType UpAxisType; // 0x114
		::MoleMole::Battle::ProceduralAnimDamperParam TickDamperParam; // 0x118
		::System::Single RotAngleLimitLeft; // 0x128
		::System::Single SelfRotAngleOffset; // 0x12C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE__CTOR_OFFSET))(this);
		}

		::PKMJPMFCNBK* CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void CalLimitMiddle(::OCEAHJEGOBJ* zi)
		{
			return ((::System::Void(*)(::PVOID, ::OCEAHJEGOBJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CALLIMITMIDDLE_OFFSET))(this, zi);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Boolean CheckJoinKey(::System::Int32 key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CHECKJOINKEY_OFFSET))(this, key);
		}

		::System::Single JoinOtherZone(::OCEAHJEGOBJ* zi)
		{
			return ((::System::Single(*)(::PVOID, ::OCEAHJEGOBJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_JOINOTHERZONE_OFFSET))(this, zi);
		}

		::System::Void UpdateRotate(::MoleMole::Battle::Entity* entity, ::OCEAHJEGOBJ* zi)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::OCEAHJEGOBJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_UPDATEROTATE_OFFSET))(this, entity, zi);
		}

		::System::Void RotateToTarget(::OCEAHJEGOBJ* zi, ::MoleMole::Battle::Entity* entity, ::UnityEngine::Vector3 targetDir, ::UnityEngine::Quaternion sourceRotation, ::System::Boolean useLimit)
		{
			return ((::System::Void(*)(::PVOID, ::OCEAHJEGOBJ*, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_ROTATETOTARGET_OFFSET))(this, zi, entity, targetDir, sourceRotation, useLimit);
		}

		::System::Void DrawAxis(::OCEAHJEGOBJ* zi)
		{
			return ((::System::Void(*)(::PVOID, ::OCEAHJEGOBJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_DRAWAXIS_OFFSET))(this, zi);
		}

		::System::Void CalSignedAngle(::OCEAHJEGOBJ* zi, ::System::Single limitAngle, ::System::Boolean outsideOfLimit, ::System::Single& f, ::UnityEngine::Vector3& projectTargetDirInZox, ::UnityEngine::Quaternion& quaternion)
		{
			return ((::System::Void(*)(::PVOID, ::OCEAHJEGOBJ*, ::System::Single, ::System::Boolean, ::System::Single&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CALSIGNEDANGLE_OFFSET))(this, zi, limitAngle, outsideOfLimit, f, projectTargetDirInZox, quaternion);
		}

		::System::Void ReviseByLimit(::OCEAHJEGOBJ* zi, ::System::Single& signedAngle, ::UnityEngine::Vector3& projectTargetDirInZOX, ::UnityEngine::Quaternion& customSpaceDeltaRot)
		{
			return ((::System::Void(*)(::PVOID, ::OCEAHJEGOBJ*, ::System::Single&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_REVISEBYLIMIT_OFFSET))(this, zi, signedAngle, projectTargetDirInZOX, customSpaceDeltaRot);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void ProcessFixedAnimatorParam(::OCEAHJEGOBJ* zi, ::MoleMole::Battle::ProceduralAnimFixedParam param)
		{
			return ((::System::Void(*)(::PVOID, ::OCEAHJEGOBJ*, ::MoleMole::Battle::ProceduralAnimFixedParam))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_PROCESSFIXEDANIMATORPARAM_OFFSET))(this, zi, param);
		}

		::System::Void IgnoreOtherWhenSameKey(::OCEAHJEGOBJ* zi)
		{
			return ((::System::Void(*)(::PVOID, ::OCEAHJEGOBJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_IGNOREOTHERWHENSAMEKEY_OFFSET))(this, zi);
		}

		::System::Void ReleaseSameKeyIgnore(::OCEAHJEGOBJ* zi)
		{
			return ((::System::Void(*)(::PVOID, ::OCEAHJEGOBJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_RELEASESAMEKEYIGNORE_OFFSET))(this, zi);
		}

		::System::Single CalClampedAngleSinged(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, ::UnityEngine::Vector3 axisUp)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CALCLAMPEDANGLESINGED_OFFSET))(this, from, to, axisUp);
		}

		::System::Void UpdateLocalRotateCoordinate(::OCEAHJEGOBJ* zi, ::UnityEngine::Vector3& axisUpFinal, ::UnityEngine::Vector3& axisForwardFinal, ::UnityEngine::Vector3& axisRightFinal)
		{
			return ((::System::Void(*)(::PVOID, ::OCEAHJEGOBJ*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_UPDATELOCALROTATECOORDINATE_OFFSET))(this, zi, axisUpFinal, axisForwardFinal, axisRightFinal);
		}

		::UnityEngine::Vector3 GetTargetPos(::MoleMole::Battle::Entity* entity)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_GETTARGETPOS_OFFSET))(this, entity);
		}

		::UnityEngine::Vector3 LocalAxisType2Vec3(::OCEAHJEGOBJ* zi, ::UnityEngine::Transform* t, ::MoleMole::Config::AnimatorZoneRotateBone_LocalAxisType type, ::System::Boolean inverse)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::OCEAHJEGOBJ*, ::UnityEngine::Transform*, ::MoleMole::Config::AnimatorZoneRotateBone_LocalAxisType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_LOCALAXISTYPE2VEC3_OFFSET))(this, zi, t, type, inverse);
		}

		::PKMJPMFCNBK* __base_CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}

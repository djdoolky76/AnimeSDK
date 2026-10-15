#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_Transform_OffsetType.h"
#include "unitysdk/RPG/Client/Effect_Transform_PauseReason.h"
#include "unitysdk/RPG/Client/Effect_Transform_RotateType.h"
#include "unitysdk/RPG/Client/FloatAxis.h"
#include "unitysdk/RPG/Client/RotateAxis.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFFECT_TRANSFORM_ADGGFLLMEGB_OFFSET UNITYSDK_OFFSET(0xCD72380)
#define RPG_CLIENT_EFFECT_TRANSFORM_AWAKE_OFFSET UNITYSDK_OFFSET(0xCD70580)
#define RPG_CLIENT_EFFECT_TRANSFORM_CCIEEBNABGF_OFFSET UNITYSDK_OFFSET(0xCD71B80)
#define RPG_CLIENT_EFFECT_TRANSFORM_CDGAECEOFAF_OFFSET UNITYSDK_OFFSET(0xCD71370)
#define RPG_CLIENT_EFFECT_TRANSFORM_CTOR_OFFSET UNITYSDK_OFFSET(0xCD72AE0)
#define RPG_CLIENT_EFFECT_TRANSFORM_DBEOAACLIMD_OFFSET UNITYSDK_OFFSET(0xCD71A50)
#define RPG_CLIENT_EFFECT_TRANSFORM_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xCD70740)
#define RPG_CLIENT_EFFECT_TRANSFORM_DKOJOOMHIFM_OFFSET UNITYSDK_OFFSET(0xCD70DB0)
#define RPG_CLIENT_EFFECT_TRANSFORM_FOKKJBFIHGI_OFFSET UNITYSDK_OFFSET(0xCD71820)
#define RPG_CLIENT_EFFECT_TRANSFORM_FORCEINITAXIS_OFFSET UNITYSDK_OFFSET(0xCD710B0)
#define RPG_CLIENT_EFFECT_TRANSFORM_IDCAENHNIPL_OFFSET UNITYSDK_OFFSET(0xCD72680)
#define RPG_CLIENT_EFFECT_TRANSFORM_INITIAL_OFFSET UNITYSDK_OFFSET(0xCD70640)
#define RPG_CLIENT_EFFECT_TRANSFORM_IOFEDODPOBL_OFFSET UNITYSDK_OFFSET(0xCD71380)
#define RPG_CLIENT_EFFECT_TRANSFORM_LEPKACMKDKJ_OFFSET UNITYSDK_OFFSET(0xCD717B0)
#define RPG_CLIENT_EFFECT_TRANSFORM_LKINOKFJPCL_OFFSET UNITYSDK_OFFSET(0xCD72960)
#define RPG_CLIENT_EFFECT_TRANSFORM_MHLABHACAON_OFFSET UNITYSDK_OFFSET(0xCD71730)
#define RPG_CLIENT_EFFECT_TRANSFORM_NBJFLGNEBED_OFFSET UNITYSDK_OFFSET(0xCD71430)
#define RPG_CLIENT_EFFECT_TRANSFORM_NMJDIOFNFOA_OFFSET UNITYSDK_OFFSET(0xCD71B20)
#define RPG_CLIENT_EFFECT_TRANSFORM_ODPNMANBFKN_OFFSET UNITYSDK_OFFSET(0xCD71D90)
#define RPG_CLIENT_EFFECT_TRANSFORM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCD72A50)
#define RPG_CLIENT_EFFECT_TRANSFORM_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCD70E90)
#define RPG_CLIENT_EFFECT_TRANSFORM_OPEPPOPGEJM_OFFSET UNITYSDK_OFFSET(0xCD729B0)
#define RPG_CLIENT_EFFECT_TRANSFORM_PAMCADKBCOG_OFFSET UNITYSDK_OFFSET(0xCD707A0)
#define RPG_CLIENT_EFFECT_TRANSFORM_PAUSE_OFFSET UNITYSDK_OFFSET(0xCD71100)
#define RPG_CLIENT_EFFECT_TRANSFORM_SETCURRENTPOS_OFFSET UNITYSDK_OFFSET(0xCD70FC0)
#define RPG_CLIENT_EFFECT_TRANSFORM_SETINITIALPOS_OFFSET UNITYSDK_OFFSET(0xCD70F20)
#define RPG_CLIENT_EFFECT_TRANSFORM_SPAWNED_OFFSET UNITYSDK_OFFSET(0xCD706E0)
#define RPG_CLIENT_EFFECT_TRANSFORM_TICK_OFFSET UNITYSDK_OFFSET(0xCD71170)

namespace RPG::Client
{
	class Effect_Transform : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean OEFNIBPMDAF; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::Client::Effect_Transform_OffsetType TransOffsetType; // 0x1C
		::System::Boolean UseLocalTransform; // 0x20
		::System::Boolean FloatObjectSpace; // 0x21
		::System::Byte _padding1[0x2];
		::RPG::Client::FloatAxis FloAxis; // 0x24
		::System::Single FloatFrequency; // 0x28
		::System::Single FloatDistance; // 0x2C
		::System::Single OffsetNoise3DSpeed; // 0x30
		::System::Single RandomMove3DBoxSize; // 0x34
		::RPG::Client::Effect_Transform_RotateType TransRotateType; // 0x38
		::System::Boolean UseLoopRotate; // 0x3C
		::System::Boolean RotateObjectSpace; // 0x3D
		::System::Boolean IsTimeSetAngle; // 0x3E
		::System::Byte _padding2[0x1];
		::RPG::Client::RotateAxis RotAxis; // 0x40
		::System::Single RotateSpeed; // 0x44
		::System::Single RotateFrequency; // 0x48
		::System::Single RotateNoise3DSpeed; // 0x4C
		::System::Single _WobbyScale; // 0x50
		::UnityEngine::Vector3 WobblyCenterOffset; // 0x54
		::System::Single SwingAngle; // 0x60
		::System::Single SwingFrequency; // 0x64
		::System::Boolean DontTickWhileUIOpen; // 0x68
		::System::Boolean IsUpateInEditorMode; // 0x69
		::System::Byte _padding3[0x2];
		::System::Single RandomTimeOffsetRange; // 0x6C
		::UnityEngine::Vector3 OCDLNFEHCAM; // 0x70
		::UnityEngine::Vector3 EJLDDMOKPCL; // 0x7C
		::UnityEngine::Vector3 PMDKAFPJNHG; // 0x88
		::UnityEngine::Quaternion DGKFHBAPOLL; // 0x94
		::UnityEngine::Vector3 CJNDPFBCFHP; // 0xA4
		::System::Single OIIKPCBOEHA; // 0xB0
		::System::Single NPINECOCALC; // 0xB4
		::System::Single PJJLEJDPNHI; // 0xB8
		::System::Boolean IDBEBIDMHME; // 0xBC
		::System::Byte _padding4[0x3];
		::UnityEngine::Vector3 MOLOKMBIAFJ; // 0xC0
		::UnityEngine::Vector3 ONAGAJOCAIF; // 0xCC
		::UnityEngine::Transform* ANKENPDODEG; // 0xD8
		::UnityEngine::Transform* DALOJFHOFGN; // 0xE0
		::System::Boolean JDMPNIFOCGF; // 0xE8
		::System::Byte _padding5[0x3];
		::UnityEngine::Quaternion OCBCNANLBDC; // 0xEC
		::System::Int32 JFHCMNAEEBA; // 0xFC
		::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x100
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_AWAKE_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_DESPAWNED_OFFSET))(this);
		}

		::System::Void Initial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_INITIAL_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_ONENABLE_OFFSET))(this);
		}

		::System::Void SetInitialPos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_SETINITIALPOS_OFFSET))(this, a1);
		}

		::System::Void SetCurrentPos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_SETCURRENTPOS_OFFSET))(this, a1);
		}

		::System::Void ForceInitAxis()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_FORCEINITAXIS_OFFSET))(this);
		}

		::System::Void Pause(::System::Boolean a1, ::RPG::Client::Effect_Transform_PauseReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::Effect_Transform_PauseReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_PAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void PAMCADKBCOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_PAMCADKBCOG_OFFSET))(this);
		}

		::System::Void DKOJOOMHIFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_DKOJOOMHIFM_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_TICK_OFFSET))(this, a1);
		}

		::System::Void NBJFLGNEBED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_NBJFLGNEBED_OFFSET))(this);
		}

		::System::Void LEPKACMKDKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_LEPKACMKDKJ_OFFSET))(this);
		}

		::System::Void FOKKJBFIHGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_FOKKJBFIHGI_OFFSET))(this);
		}

		::System::Void DBEOAACLIMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_DBEOAACLIMD_OFFSET))(this);
		}

		::System::Void MHLABHACAON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_MHLABHACAON_OFFSET))(this);
		}

		::System::Void ODPNMANBFKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_ODPNMANBFKN_OFFSET))(this);
		}

		::System::Void ADGGFLLMEGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_ADGGFLLMEGB_OFFSET))(this);
		}

		::System::Void IDCAENHNIPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_IDCAENHNIPL_OFFSET))(this);
		}

		::UnityEngine::Vector3 CCIEEBNABGF(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_CCIEEBNABGF_OFFSET))(this, a1);
		}

		::System::Void LKINOKFJPCL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_LKINOKFJPCL_OFFSET))(this, a1);
		}

		::System::Void OPEPPOPGEJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_OPEPPOPGEJM_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_ONDISABLE_OFFSET))(this);
		}

		::System::Void IOFEDODPOBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_IOFEDODPOBL_OFFSET))(this);
		}

		::System::Single NMJDIOFNFOA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_NMJDIOFNFOA_OFFSET))(this);
		}

		::System::Boolean CDGAECEOFAF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_CDGAECEOFAF_OFFSET))(this);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBFIBDGJLHE_ETriggerState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HBFIBDGJLHE;
class HBFIBDGJLHE_OCJKOIKBNIN;
namespace RPG::Client { class MonoEntityTriggerCollision; }
namespace RPG::Client::CityCarFlow { class MonoCityCar; }
namespace RPG::Client::CityCarFlow { class MonoCityCarAudio; }
namespace RPG::Client::CityCarFlow { class MonoCityCarDetectTrigger; }
namespace System { class Random; }
namespace UnityEngine { class Transform; }

#define HBFIBDGJLHE_GIFMIOMFGNE_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0x15BF7DB0)
#define HBFIBDGJLHE_GIFMIOMFGNE_CTOR_OFFSET UNITYSDK_OFFSET(0x15C00500)
#define HBFIBDGJLHE_GIFMIOMFGNE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BF5E80)
#define HBFIBDGJLHE_GIFMIOMFGNE_DOENBHFJBOL_OFFSET UNITYSDK_OFFSET(0x15BF1170)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x15C00090)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_AUDIO_OFFSET UNITYSDK_OFFSET(0x15C00170)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_BRAKEBYDETECTNPC_OFFSET UNITYSDK_OFFSET(0x15C004A0)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_BRAKEBYDETECTPLAYER_OFFSET UNITYSDK_OFFSET(0x15C00460)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_COLLISION_OFFSET UNITYSDK_OFFSET(0x15C00130)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_CURRENTCENTRALFORCE_OFFSET UNITYSDK_OFFSET(0x15C002A0)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_CURRENTFLOWDISTANCE_OFFSET UNITYSDK_OFFSET(0x15C001D0)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_CURRENTFLOWOFFSET_OFFSET UNITYSDK_OFFSET(0x15C001B0)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_CURRENTFLOW_OFFSET UNITYSDK_OFFSET(0x15C001F0)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_CURRENTFORWARDSLOPE_OFFSET UNITYSDK_OFFSET(0x15C002C0)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x15C00250)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_CURRENTROTATION_OFFSET UNITYSDK_OFFSET(0x15C00280)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_DECELERATION_OFFSET UNITYSDK_OFFSET(0x15C000B0)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_DESTINATIONFLOW_OFFSET UNITYSDK_OFFSET(0x15C00210)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_DETECTNPCTIMER_OFFSET UNITYSDK_OFFSET(0x15C003C0)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_DETECTTRIGGER_OFFSET UNITYSDK_OFFSET(0x15C00150)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_EMERGENCYBRAKE_OFFSET UNITYSDK_OFFSET(0x15C000D0)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_FIRSTUPDATE_OFFSET UNITYSDK_OFFSET(0x15C002E0)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_HALFLENGTH_OFFSET UNITYSDK_OFFSET(0x15BFFFF0)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_HALFWIDTH_OFFSET UNITYSDK_OFFSET(0x15C00010)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_HASAUDIO_OFFSET UNITYSDK_OFFSET(0x15C00420)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_IDLESTATE_OFFSET UNITYSDK_OFFSET(0x15C004E0)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_ID_OFFSET UNITYSDK_OFFSET(0x15BFFFE0)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_INTERNALRANDOM_OFFSET UNITYSDK_OFFSET(0x15C00320)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_ISBLOCKININTERSECTIONFIRST_OFFSET UNITYSDK_OFFSET(0x15C00400)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_ISBLOCKININTERSECTION_OFFSET UNITYSDK_OFFSET(0x15C003E0)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_ISDETECTNPC_OFFSET UNITYSDK_OFFSET(0x15C003A0)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_ISDETECTPLAYERTIMER_OFFSET UNITYSDK_OFFSET(0x15C00380)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_ISDETECTPLAYER_OFFSET UNITYSDK_OFFSET(0x15C00360)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_LASTFLOW_OFFSET UNITYSDK_OFFSET(0x15C00230)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_LASTSPEED_OFFSET UNITYSDK_OFFSET(0x15C00050)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_MAXSPEED_OFFSET UNITYSDK_OFFSET(0x15C00070)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_MONO_OFFSET UNITYSDK_OFFSET(0x15C000F0)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_PROXY_OFFSET UNITYSDK_OFFSET(0x15C00340)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_REALACCELERATION_OFFSET UNITYSDK_OFFSET(0x15C00190)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_ROADRAGEBYDETECTNPC_OFFSET UNITYSDK_OFFSET(0x15C004C0)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_ROADRAGEBYDETECTPLAYER_OFFSET UNITYSDK_OFFSET(0x15C00480)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x15C00030)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x15C00110)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_UPDATEAUDIO_OFFSET UNITYSDK_OFFSET(0x15C00440)
#define HBFIBDGJLHE_GIFMIOMFGNE_GET_WAITDESTROY_OFFSET UNITYSDK_OFFSET(0x15C00300)
#define HBFIBDGJLHE_GIFMIOMFGNE_HDCANJCHLKN_OFFSET UNITYSDK_OFFSET(0x15C00BE0)
#define HBFIBDGJLHE_GIFMIOMFGNE_HOENINBLNJN_OFFSET UNITYSDK_OFFSET(0x15BF91D0)
#define HBFIBDGJLHE_GIFMIOMFGNE_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0x15C00740)
#define HBFIBDGJLHE_GIFMIOMFGNE_JDLJGNOELML_OFFSET UNITYSDK_OFFSET(0x15BEFEA0)
#define HBFIBDGJLHE_GIFMIOMFGNE_MDAIKAHFFNP_OFFSET UNITYSDK_OFFSET(0x15BF0610)
#define HBFIBDGJLHE_GIFMIOMFGNE_OGGBPFJNCLA_OFFSET UNITYSDK_OFFSET(0x15BF0A60)
#define HBFIBDGJLHE_GIFMIOMFGNE_PDMDIGBCCCI_OFFSET UNITYSDK_OFFSET(0x15C00B60)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x15C000A0)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_AUDIO_OFFSET UNITYSDK_OFFSET(0x15C00180)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_BRAKEBYDETECTNPC_OFFSET UNITYSDK_OFFSET(0x15C004B0)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_BRAKEBYDETECTPLAYER_OFFSET UNITYSDK_OFFSET(0x15C00470)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_COLLISION_OFFSET UNITYSDK_OFFSET(0x15C00140)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_CURRENTCENTRALFORCE_OFFSET UNITYSDK_OFFSET(0x15C002B0)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_CURRENTFLOWDISTANCE_OFFSET UNITYSDK_OFFSET(0x15C001E0)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_CURRENTFLOWOFFSET_OFFSET UNITYSDK_OFFSET(0x15C001C0)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_CURRENTFLOW_OFFSET UNITYSDK_OFFSET(0x15C00200)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_CURRENTFORWARDSLOPE_OFFSET UNITYSDK_OFFSET(0x15C002D0)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x15C00270)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_CURRENTROTATION_OFFSET UNITYSDK_OFFSET(0x15C00290)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_DECELERATION_OFFSET UNITYSDK_OFFSET(0x15C000C0)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_DESTINATIONFLOW_OFFSET UNITYSDK_OFFSET(0x15C00220)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_DETECTNPCTIMER_OFFSET UNITYSDK_OFFSET(0x15C003D0)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_DETECTTRIGGER_OFFSET UNITYSDK_OFFSET(0x15C00160)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_EMERGENCYBRAKE_OFFSET UNITYSDK_OFFSET(0x15C000E0)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_FIRSTUPDATE_OFFSET UNITYSDK_OFFSET(0x15C002F0)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_HALFLENGTH_OFFSET UNITYSDK_OFFSET(0x15C00000)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_HALFWIDTH_OFFSET UNITYSDK_OFFSET(0x15C00020)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_HASAUDIO_OFFSET UNITYSDK_OFFSET(0x15C00430)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_IDLESTATE_OFFSET UNITYSDK_OFFSET(0x15C004F0)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_INTERNALRANDOM_OFFSET UNITYSDK_OFFSET(0x15C00330)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_ISBLOCKININTERSECTIONFIRST_OFFSET UNITYSDK_OFFSET(0x15C00410)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_ISBLOCKININTERSECTION_OFFSET UNITYSDK_OFFSET(0x15C003F0)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_ISDETECTNPC_OFFSET UNITYSDK_OFFSET(0x15C003B0)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_ISDETECTPLAYERTIMER_OFFSET UNITYSDK_OFFSET(0x15C00390)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_ISDETECTPLAYER_OFFSET UNITYSDK_OFFSET(0x15C00370)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_LASTFLOW_OFFSET UNITYSDK_OFFSET(0x15C00240)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_LASTSPEED_OFFSET UNITYSDK_OFFSET(0x15C00060)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_MAXSPEED_OFFSET UNITYSDK_OFFSET(0x15C00080)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_MONO_OFFSET UNITYSDK_OFFSET(0x15C00100)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_PROXY_OFFSET UNITYSDK_OFFSET(0x15C00350)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_REALACCELERATION_OFFSET UNITYSDK_OFFSET(0x15C001A0)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_ROADRAGEBYDETECTNPC_OFFSET UNITYSDK_OFFSET(0x15C004D0)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_ROADRAGEBYDETECTPLAYER_OFFSET UNITYSDK_OFFSET(0x15C00490)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x15C00040)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x15C00120)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_UPDATEAUDIO_OFFSET UNITYSDK_OFFSET(0x15C00450)
#define HBFIBDGJLHE_GIFMIOMFGNE_SET_WAITDESTROY_OFFSET UNITYSDK_OFFSET(0x15C00310)

inline static constexpr unsigned int HBFIBDGJLHE_GIFMIOMFGNE_TypeDefinitionIndex = 82172;

	class HBFIBDGJLHE_GIFMIOMFGNE : public ::System::Object
	{
	public:
		::HBFIBDGJLHE_OCJKOIKBNIN* _LastFlow_k__BackingField; // 0x10
		::HBFIBDGJLHE* _Proxy_k__BackingField; // 0x18
		::RPG::Client::CityCarFlow::MonoCityCarAudio* _Audio_k__BackingField; // 0x20
		::System::Random* _InternalRandom_k__BackingField; // 0x28
		::RPG::Client::CityCarFlow::MonoCityCar* _Mono_k__BackingField; // 0x30
		::RPG::Client::MonoEntityTriggerCollision* _Collision_k__BackingField; // 0x38
		::HBFIBDGJLHE_OCJKOIKBNIN* _DestinationFlow_k__BackingField; // 0x40
		::HBFIBDGJLHE_OCJKOIKBNIN* _CurrentFlow_k__BackingField; // 0x48
		::RPG::Client::CityCarFlow::MonoCityCarDetectTrigger* _DetectTrigger_k__BackingField; // 0x50
		::UnityEngine::Transform* _Transform_k__BackingField; // 0x58
		::System::Boolean _IsBlockInIntersectionFirst_k__BackingField; // 0x60
		::System::Boolean _UpdateAudio_k__BackingField; // 0x61
		::System::Boolean _IsDetectNPC_k__BackingField; // 0x62
		::System::Boolean _IsBlockInIntersection_k__BackingField; // 0x63
		::HBFIBDGJLHE_ETriggerState _BrakeByDetectPlayer_k__BackingField; // 0x64
		::UnityEngine::Vector3 _CurrentPosition_k__BackingField; // 0x68
		::System::Single _RealAcceleration_k__BackingField; // 0x74
		::System::Single _IsDetectPlayerTimer_k__BackingField; // 0x78
		::System::Single _Deceleration_k__BackingField; // 0x7C
		::System::Single _MaxSpeed_k__BackingField; // 0x80
		::HBFIBDGJLHE_ETriggerState _RoadRageByDetectPlayer_k__BackingField; // 0x84
		::System::Single _HalfLength_k__BackingField; // 0x88
		::System::Single _Acceleration_k__BackingField; // 0x8C
		::System::Single _DetectNpcTimer_k__BackingField; // 0x90
		::HBFIBDGJLHE_ETriggerState _RoadRageByDetectNPC_k__BackingField; // 0x94
		::HBFIBDGJLHE_ETriggerState _BrakeByDetectNPC_k__BackingField; // 0x98
		::System::Boolean _IsDetectPlayer_k__BackingField; // 0x9C
		::System::Boolean _FirstUpdate_k__BackingField; // 0x9D
		::System::Boolean _WaitDestroy_k__BackingField; // 0x9E
		::System::Boolean _HasAudio_k__BackingField; // 0x9F
		::System::Single _HalfWidth_k__BackingField; // 0xA0
		::System::Single _CurrentCentralForce_k__BackingField; // 0xA4
		::System::Single _Speed_k__BackingField; // 0xA8
		::System::Single _CurrentForwardSlope_k__BackingField; // 0xAC
		::System::Single _CurrentFlowOffset_k__BackingField; // 0xB0
		::UnityEngine::Quaternion _CurrentRotation_k__BackingField; // 0xB4
		::System::Single _CurrentFlowDistance_k__BackingField; // 0xC4
		::System::UInt32 _ID_k__BackingField; // 0xC8
		::HBFIBDGJLHE_ETriggerState _IdleState_k__BackingField; // 0xCC
		::System::Single _EmergencyBrake_k__BackingField; // 0xD0
		::System::Single _LastSpeed_k__BackingField; // 0xD4
		static ::System::UInt32* StaticGet_KPJPCGADMFB()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "GIFMIOMFGNE")->GetStaticField(0x15510);
		}

		// static const ::System::Object GIGMEHGLCLB; // 0x0
		// static const ::System::Object LHONAILMHMH; // 0x0
		// static const ::System::Object OLDAOONDLCP; // 0x0
		// static const ::System::Object FMNAGEADFPB; // 0x0
		// static const ::System::Object BFOLBKFMPCE; // 0x0
		// static const ::System::Object EHHNMPFNCPA; // 0x0
		// static const ::System::Object KBGKPODIFOO; // 0x0
		// static const ::System::Object MMJBFPONKBP; // 0x0
		// static const ::System::Object CHIMAFNPAJK; // 0x0
		// static const ::System::Object EIAAEPBPJOE; // 0x0
		// static const ::System::Object HIGHDKBPMCD; // 0x0
		// static const ::System::Object KGMBPKAIBKF; // 0x0
		// static const ::System::Object HGHHCCMAAHH; // 0x0
		// static const ::System::Object OFEMKGDLDII; // 0x0
		::System::Void _ctor(::HBFIBDGJLHE* a1, ::RPG::Client::CityCarFlow::MonoCityCar* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE*, ::RPG::Client::CityCarFlow::MonoCityCar*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_ID_OFFSET))(this);
		}

		::System::Single get_HalfLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_HALFLENGTH_OFFSET))(this);
		}

		::System::Void set_HalfLength(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_HALFLENGTH_OFFSET))(this, a1);
		}

		::System::Single get_HalfWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_HALFWIDTH_OFFSET))(this);
		}

		::System::Void set_HalfWidth(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_HALFWIDTH_OFFSET))(this, a1);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_SPEED_OFFSET))(this);
		}

		::System::Void set_Speed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_SPEED_OFFSET))(this, a1);
		}

		::System::Single get_LastSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_LASTSPEED_OFFSET))(this);
		}

		::System::Void set_LastSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_LASTSPEED_OFFSET))(this, a1);
		}

		::System::Single get_MaxSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_MAXSPEED_OFFSET))(this);
		}

		::System::Void set_MaxSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_MAXSPEED_OFFSET))(this, a1);
		}

		::System::Single get_Acceleration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_ACCELERATION_OFFSET))(this);
		}

		::System::Void set_Acceleration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_ACCELERATION_OFFSET))(this, a1);
		}

		::System::Single get_Deceleration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_DECELERATION_OFFSET))(this);
		}

		::System::Void set_Deceleration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_DECELERATION_OFFSET))(this, a1);
		}

		::System::Single get_EmergencyBrake()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_EMERGENCYBRAKE_OFFSET))(this);
		}

		::System::Void set_EmergencyBrake(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_EMERGENCYBRAKE_OFFSET))(this, a1);
		}

		::RPG::Client::CityCarFlow::MonoCityCar* get_Mono()
		{
			return ((::RPG::Client::CityCarFlow::MonoCityCar*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_MONO_OFFSET))(this);
		}

		::System::Void set_Mono(::RPG::Client::CityCarFlow::MonoCityCar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CityCarFlow::MonoCityCar*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_MONO_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_TRANSFORM_OFFSET))(this);
		}

		::System::Void set_Transform(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_TRANSFORM_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEntityTriggerCollision* get_Collision()
		{
			return ((::RPG::Client::MonoEntityTriggerCollision*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_COLLISION_OFFSET))(this);
		}

		::System::Void set_Collision(::RPG::Client::MonoEntityTriggerCollision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEntityTriggerCollision*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_COLLISION_OFFSET))(this, a1);
		}

		::RPG::Client::CityCarFlow::MonoCityCarDetectTrigger* get_DetectTrigger()
		{
			return ((::RPG::Client::CityCarFlow::MonoCityCarDetectTrigger*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_DETECTTRIGGER_OFFSET))(this);
		}

		::System::Void set_DetectTrigger(::RPG::Client::CityCarFlow::MonoCityCarDetectTrigger* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CityCarFlow::MonoCityCarDetectTrigger*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_DETECTTRIGGER_OFFSET))(this, a1);
		}

		::RPG::Client::CityCarFlow::MonoCityCarAudio* get_Audio()
		{
			return ((::RPG::Client::CityCarFlow::MonoCityCarAudio*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_AUDIO_OFFSET))(this);
		}

		::System::Void set_Audio(::RPG::Client::CityCarFlow::MonoCityCarAudio* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CityCarFlow::MonoCityCarAudio*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_AUDIO_OFFSET))(this, a1);
		}

		::System::Single get_RealAcceleration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_REALACCELERATION_OFFSET))(this);
		}

		::System::Void set_RealAcceleration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_REALACCELERATION_OFFSET))(this, a1);
		}

		::System::Single get_CurrentFlowOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_CURRENTFLOWOFFSET_OFFSET))(this);
		}

		::System::Void set_CurrentFlowOffset(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_CURRENTFLOWOFFSET_OFFSET))(this, a1);
		}

		::System::Single get_CurrentFlowDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_CURRENTFLOWDISTANCE_OFFSET))(this);
		}

		::System::Void set_CurrentFlowDistance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_CURRENTFLOWDISTANCE_OFFSET))(this, a1);
		}

		::HBFIBDGJLHE_OCJKOIKBNIN* get_CurrentFlow()
		{
			return ((::HBFIBDGJLHE_OCJKOIKBNIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_CURRENTFLOW_OFFSET))(this);
		}

		::System::Void set_CurrentFlow(::HBFIBDGJLHE_OCJKOIKBNIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_OCJKOIKBNIN*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_CURRENTFLOW_OFFSET))(this, a1);
		}

		::HBFIBDGJLHE_OCJKOIKBNIN* get_DestinationFlow()
		{
			return ((::HBFIBDGJLHE_OCJKOIKBNIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_DESTINATIONFLOW_OFFSET))(this);
		}

		::System::Void set_DestinationFlow(::HBFIBDGJLHE_OCJKOIKBNIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_OCJKOIKBNIN*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_DESTINATIONFLOW_OFFSET))(this, a1);
		}

		::HBFIBDGJLHE_OCJKOIKBNIN* get_LastFlow()
		{
			return ((::HBFIBDGJLHE_OCJKOIKBNIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_LASTFLOW_OFFSET))(this);
		}

		::System::Void set_LastFlow(::HBFIBDGJLHE_OCJKOIKBNIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_OCJKOIKBNIN*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_LASTFLOW_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_CurrentPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_CURRENTPOSITION_OFFSET))(this);
		}

		::System::Void set_CurrentPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_CURRENTPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_CurrentRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_CURRENTROTATION_OFFSET))(this);
		}

		::System::Void set_CurrentRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_CURRENTROTATION_OFFSET))(this, a1);
		}

		::System::Single get_CurrentCentralForce()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_CURRENTCENTRALFORCE_OFFSET))(this);
		}

		::System::Void set_CurrentCentralForce(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_CURRENTCENTRALFORCE_OFFSET))(this, a1);
		}

		::System::Single get_CurrentForwardSlope()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_CURRENTFORWARDSLOPE_OFFSET))(this);
		}

		::System::Void set_CurrentForwardSlope(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_CURRENTFORWARDSLOPE_OFFSET))(this, a1);
		}

		::System::Boolean get_FirstUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_FIRSTUPDATE_OFFSET))(this);
		}

		::System::Void set_FirstUpdate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_FIRSTUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean get_WaitDestroy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_WAITDESTROY_OFFSET))(this);
		}

		::System::Void set_WaitDestroy(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_WAITDESTROY_OFFSET))(this, a1);
		}

		::System::Random* get_InternalRandom()
		{
			return ((::System::Random*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_INTERNALRANDOM_OFFSET))(this);
		}

		::System::Void set_InternalRandom(::System::Random* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Random*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_INTERNALRANDOM_OFFSET))(this, a1);
		}

		::HBFIBDGJLHE* get_Proxy()
		{
			return ((::HBFIBDGJLHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_PROXY_OFFSET))(this);
		}

		::System::Void set_Proxy(::HBFIBDGJLHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_PROXY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDetectPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_ISDETECTPLAYER_OFFSET))(this);
		}

		::System::Void set_IsDetectPlayer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_ISDETECTPLAYER_OFFSET))(this, a1);
		}

		::System::Single get_IsDetectPlayerTimer()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_ISDETECTPLAYERTIMER_OFFSET))(this);
		}

		::System::Void set_IsDetectPlayerTimer(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_ISDETECTPLAYERTIMER_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDetectNPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_ISDETECTNPC_OFFSET))(this);
		}

		::System::Void set_IsDetectNPC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_ISDETECTNPC_OFFSET))(this, a1);
		}

		::System::Single get_DetectNpcTimer()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_DETECTNPCTIMER_OFFSET))(this);
		}

		::System::Void set_DetectNpcTimer(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_DETECTNPCTIMER_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBlockInIntersection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_ISBLOCKININTERSECTION_OFFSET))(this);
		}

		::System::Void set_IsBlockInIntersection(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_ISBLOCKININTERSECTION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBlockInIntersectionFirst()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_ISBLOCKININTERSECTIONFIRST_OFFSET))(this);
		}

		::System::Void set_IsBlockInIntersectionFirst(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_ISBLOCKININTERSECTIONFIRST_OFFSET))(this, a1);
		}

		::System::Boolean get_HasAudio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_HASAUDIO_OFFSET))(this);
		}

		::System::Void set_HasAudio(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_HASAUDIO_OFFSET))(this, a1);
		}

		::System::Boolean get_UpdateAudio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_UPDATEAUDIO_OFFSET))(this);
		}

		::System::Void set_UpdateAudio(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_UPDATEAUDIO_OFFSET))(this, a1);
		}

		::HBFIBDGJLHE_ETriggerState get_BrakeByDetectPlayer()
		{
			return ((::HBFIBDGJLHE_ETriggerState(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_BRAKEBYDETECTPLAYER_OFFSET))(this);
		}

		::System::Void set_BrakeByDetectPlayer(::HBFIBDGJLHE_ETriggerState a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_ETriggerState))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_BRAKEBYDETECTPLAYER_OFFSET))(this, a1);
		}

		::HBFIBDGJLHE_ETriggerState get_RoadRageByDetectPlayer()
		{
			return ((::HBFIBDGJLHE_ETriggerState(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_ROADRAGEBYDETECTPLAYER_OFFSET))(this);
		}

		::System::Void set_RoadRageByDetectPlayer(::HBFIBDGJLHE_ETriggerState a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_ETriggerState))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_ROADRAGEBYDETECTPLAYER_OFFSET))(this, a1);
		}

		::HBFIBDGJLHE_ETriggerState get_BrakeByDetectNPC()
		{
			return ((::HBFIBDGJLHE_ETriggerState(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_BRAKEBYDETECTNPC_OFFSET))(this);
		}

		::System::Void set_BrakeByDetectNPC(::HBFIBDGJLHE_ETriggerState a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_ETriggerState))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_BRAKEBYDETECTNPC_OFFSET))(this, a1);
		}

		::HBFIBDGJLHE_ETriggerState get_RoadRageByDetectNPC()
		{
			return ((::HBFIBDGJLHE_ETriggerState(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_ROADRAGEBYDETECTNPC_OFFSET))(this);
		}

		::System::Void set_RoadRageByDetectNPC(::HBFIBDGJLHE_ETriggerState a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_ETriggerState))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_ROADRAGEBYDETECTNPC_OFFSET))(this, a1);
		}

		::HBFIBDGJLHE_ETriggerState get_IdleState()
		{
			return ((::HBFIBDGJLHE_ETriggerState(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_GET_IDLESTATE_OFFSET))(this);
		}

		::System::Void set_IdleState(::HBFIBDGJLHE_ETriggerState a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_ETriggerState))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_SET_IDLESTATE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_DISPOSE_OFFSET))(this);
		}

		::System::Void JDEKJLHMPLG(::HBFIBDGJLHE* a1, ::HBFIBDGJLHE_OCJKOIKBNIN* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE*, ::HBFIBDGJLHE_OCJKOIKBNIN*, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_JDEKJLHMPLG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HOENINBLNJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_HOENINBLNJN_OFFSET))(this);
		}

		::System::Void ALJIOCDBMKO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_ALJIOCDBMKO_OFFSET))(this, a1);
		}

		::System::Void PDMDIGBCCCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_PDMDIGBCCCI_OFFSET))(this);
		}

		::System::Void MDAIKAHFFNP(::HBFIBDGJLHE_OCJKOIKBNIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_OCJKOIKBNIN*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_MDAIKAHFFNP_OFFSET))(this, a1);
		}

		::System::Void HDCANJCHLKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_HDCANJCHLKN_OFFSET))(this);
		}

		::System::Void OGGBPFJNCLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_OGGBPFJNCLA_OFFSET))(this);
		}

		::System::Void DOENBHFJBOL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_DOENBHFJBOL_OFFSET))(this, a1);
		}

		::System::Void JDLJGNOELML(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GIFMIOMFGNE_JDLJGNOELML_OFFSET))(this, a1, a2, a3);
		}

	};

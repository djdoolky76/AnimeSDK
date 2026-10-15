#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AirshipCarEmitPrefab.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
class CBABAAOHGHH;
class DJPBNHAADAF;
namespace RPG::Client { class AirshipCar; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AIRSHIPCAREMITTER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC6521F0)
#define RPG_CLIENT_AIRSHIPCAREMITTER_CREATEMANAGER_OFFSET UNITYSDK_OFFSET(0xC651690)
#define RPG_CLIENT_AIRSHIPCAREMITTER_CTOR_OFFSET UNITYSDK_OFFSET(0xC6524A0)
#define RPG_CLIENT_AIRSHIPCAREMITTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC651DB0)
#define RPG_CLIENT_AIRSHIPCAREMITTER_DKNKIMFABJB_OFFSET UNITYSDK_OFFSET(0xC651D10)
#define RPG_CLIENT_AIRSHIPCAREMITTER_FADNJECGNKO_OFFSET UNITYSDK_OFFSET(0xC651FF0)
#define RPG_CLIENT_AIRSHIPCAREMITTER_GET_CURRENTEMITINTERVAL_OFFSET UNITYSDK_OFFSET(0xC652480)
#define RPG_CLIENT_AIRSHIPCAREMITTER_GET_CURRENTMAXALIVECOUNT_OFFSET UNITYSDK_OFFSET(0xC652460)
#define RPG_CLIENT_AIRSHIPCAREMITTER_GET_WAITEMITTIMER_OFFSET UNITYSDK_OFFSET(0xC651740)
#define RPG_CLIENT_AIRSHIPCAREMITTER_ISREADYTOEMIT_OFFSET UNITYSDK_OFFSET(0xC651790)
#define RPG_CLIENT_AIRSHIPCAREMITTER_JNOBAGHEBKE_OFFSET UNITYSDK_OFFSET(0xC651B30)
#define RPG_CLIENT_AIRSHIPCAREMITTER_JOFNEECOKHH_OFFSET UNITYSDK_OFFSET(0xC651AE0)
#define RPG_CLIENT_AIRSHIPCAREMITTER_LGAJBHKJPIM_OFFSET UNITYSDK_OFFSET(0xC651E00)
#define RPG_CLIENT_AIRSHIPCAREMITTER_READYTOEMIT_OFFSET UNITYSDK_OFFSET(0xC651800)
#define RPG_CLIENT_AIRSHIPCAREMITTER_RESETTIMER_OFFSET UNITYSDK_OFFSET(0xC651A30)
#define RPG_CLIENT_AIRSHIPCAREMITTER_RESET_OFFSET UNITYSDK_OFFSET(0xC6523B0)
#define RPG_CLIENT_AIRSHIPCAREMITTER_SET_CURRENTEMITINTERVAL_OFFSET UNITYSDK_OFFSET(0xC652490)
#define RPG_CLIENT_AIRSHIPCAREMITTER_SET_CURRENTMAXALIVECOUNT_OFFSET UNITYSDK_OFFSET(0xC652470)
#define RPG_CLIENT_AIRSHIPCAREMITTER_TICK_OFFSET UNITYSDK_OFFSET(0xC651F90)
#define RPG_CLIENT_AIRSHIPCAREMITTER_TRYDESTROY_OFFSET UNITYSDK_OFFSET(0xC651C40)
#define RPG_CLIENT_AIRSHIPCAREMITTER_TRYEMIT_OFFSET UNITYSDK_OFFSET(0xC651850)
#define RPG_CLIENT_AIRSHIPCAREMITTER_UPDATELEVELINFO_OFFSET UNITYSDK_OFFSET(0xC652280)

namespace RPG::Client
{
	class AirshipCarEmitter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single emitInterval; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* emitIntervalCurve; // 0x20
		::System::Int32 maxAliveCount; // 0x28
		::UnityEngine::Vector2 initialEmitRange; // 0x2C
		::System::Byte _padding1[0x4];
		::Il2CppArray<::System::Object*>* levelInfo; // 0x38
		::Il2CppArray<::RPG::Client::AirshipCarEmitPrefab>* airshipEmitPrefabs; // 0x40
		::System::Int32 _CurrentMaxAliveCount_k__BackingField; // 0x48
		::System::Single _CurrentEmitInterval_k__BackingField; // 0x4C
		::System::Single ANCCFCLMLKH; // 0x50
		::System::Byte _padding2[0x4];
		::System::Collections::Generic::List_1<::DJPBNHAADAF*>* PGIBPPGCEEB; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_CTOR_OFFSET))(this);
		}

		::CBABAAOHGHH* CreateManager(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::CBABAAOHGHH*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_CREATEMANAGER_OFFSET))(this, a1, a2);
		}

		::System::Single get_WaitEmitTimer()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_GET_WAITEMITTIMER_OFFSET))(this);
		}

		::System::Boolean IsReadyToEmit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_ISREADYTOEMIT_OFFSET))(this);
		}

		::System::Void ReadyToEmit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_READYTOEMIT_OFFSET))(this);
		}

		::DJPBNHAADAF* TryEmit(::UnityEngine::Transform* a1, ::System::Boolean a2)
		{
			return ((::DJPBNHAADAF*(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_TRYEMIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryDestroy(::DJPBNHAADAF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DJPBNHAADAF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_TRYDESTROY_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_DISPOSE_OFFSET))(this);
		}

		::System::Void ResetTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_RESETTIMER_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_TICK_OFFSET))(this, a1);
		}

		::RPG::Client::AirshipCar* JOFNEECOKHH()
		{
			return ((::RPG::Client::AirshipCar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_JOFNEECOKHH_OFFSET))(this);
		}

		static ::RPG::Client::AirshipCar* FADNJECGNKO(::Il2CppArray<::RPG::Client::AirshipCarEmitPrefab>* a1)
		{
			return ((::RPG::Client::AirshipCar*(*)(::Il2CppArray<::RPG::Client::AirshipCarEmitPrefab>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_FADNJECGNKO_OFFSET))(a1);
		}

		::DJPBNHAADAF* JNOBAGHEBKE(::RPG::Client::AirshipCar* a1, ::UnityEngine::Transform* a2)
		{
			return ((::DJPBNHAADAF*(*)(::PVOID, ::RPG::Client::AirshipCar*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_JNOBAGHEBKE_OFFSET))(this, a1, a2);
		}

		::System::Void LGAJBHKJPIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_LGAJBHKJPIM_OFFSET))(this);
		}

		::System::Void DKNKIMFABJB(::RPG::Client::AirshipCar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AirshipCar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_DKNKIMFABJB_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_AWAKE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_RESET_OFFSET))(this);
		}

		::System::Int32 get_CurrentMaxAliveCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_GET_CURRENTMAXALIVECOUNT_OFFSET))(this);
		}

		::System::Void set_CurrentMaxAliveCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_SET_CURRENTMAXALIVECOUNT_OFFSET))(this, a1);
		}

		::System::Single get_CurrentEmitInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_GET_CURRENTEMITINTERVAL_OFFSET))(this);
		}

		::System::Void set_CurrentEmitInterval(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_SET_CURRENTEMITINTERVAL_OFFSET))(this, a1);
		}

		::System::Void UpdateLevelInfo(::RPG::CustomRP::Quality a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_UPDATELEVELINFO_OFFSET))(this, a1);
		}

	};
}

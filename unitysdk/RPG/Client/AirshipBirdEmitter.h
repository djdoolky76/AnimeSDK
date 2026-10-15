#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AirshipBirdEmitPrefab.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
class CBABAAOHGHH;
class JBNEHIIFAOD;
namespace RPG::Client { class AirshipBird; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AIRSHIPBIRDEMITTER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC64D380)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_CREATEMANAGER_OFFSET UNITYSDK_OFFSET(0xC64C820)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_CTOR_OFFSET UNITYSDK_OFFSET(0xC64D630)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC64CF40)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_DKNKIMFABJB_OFFSET UNITYSDK_OFFSET(0xC64CEA0)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_FADNJECGNKO_OFFSET UNITYSDK_OFFSET(0xC64D180)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_GET_CURRENTEMITINTERVAL_OFFSET UNITYSDK_OFFSET(0xC64D610)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_GET_CURRENTMAXALIVECOUNT_OFFSET UNITYSDK_OFFSET(0xC64D5F0)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_GET_WAITEMITTIMER_OFFSET UNITYSDK_OFFSET(0xC64C8D0)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_ISREADYTOEMIT_OFFSET UNITYSDK_OFFSET(0xC64C920)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_JNOBAGHEBKE_OFFSET UNITYSDK_OFFSET(0xC64CCC0)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_JOFNEECOKHH_OFFSET UNITYSDK_OFFSET(0xC64CC70)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_LGAJBHKJPIM_OFFSET UNITYSDK_OFFSET(0xC64CF90)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_READYTOEMIT_OFFSET UNITYSDK_OFFSET(0xC64C990)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_RESETTIMER_OFFSET UNITYSDK_OFFSET(0xC64CBC0)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_RESET_OFFSET UNITYSDK_OFFSET(0xC64D540)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_SET_CURRENTEMITINTERVAL_OFFSET UNITYSDK_OFFSET(0xC64D620)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_SET_CURRENTMAXALIVECOUNT_OFFSET UNITYSDK_OFFSET(0xC64D600)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_TICK_OFFSET UNITYSDK_OFFSET(0xC64D120)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_TRYDESTROY_OFFSET UNITYSDK_OFFSET(0xC64CDD0)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_TRYEMIT_OFFSET UNITYSDK_OFFSET(0xC64C9E0)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_UPDATELEVELINFO_OFFSET UNITYSDK_OFFSET(0xC64D410)

namespace RPG::Client
{
	class AirshipBirdEmitter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single emitInterval; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* emitIntervalCurve; // 0x20
		::System::Int32 maxAliveCount; // 0x28
		::UnityEngine::Vector2 initialEmitRange; // 0x2C
		::System::Byte _padding1[0x4];
		::Il2CppArray<::System::Object*>* levelInfo; // 0x38
		::Il2CppArray<::RPG::Client::AirshipBirdEmitPrefab>* airshipEmitPrefabs; // 0x40
		::System::Int32 _CurrentMaxAliveCount_k__BackingField; // 0x48
		::System::Single _CurrentEmitInterval_k__BackingField; // 0x4C
		::System::Single ANCCFCLMLKH; // 0x50
		::System::Byte _padding2[0x4];
		::System::Collections::Generic::List_1<::JBNEHIIFAOD*>* PGIBPPGCEEB; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_CTOR_OFFSET))(this);
		}

		::CBABAAOHGHH* CreateManager(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::CBABAAOHGHH*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_CREATEMANAGER_OFFSET))(this, a1, a2);
		}

		::System::Single get_WaitEmitTimer()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_GET_WAITEMITTIMER_OFFSET))(this);
		}

		::System::Boolean IsReadyToEmit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_ISREADYTOEMIT_OFFSET))(this);
		}

		::System::Void ReadyToEmit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_READYTOEMIT_OFFSET))(this);
		}

		::JBNEHIIFAOD* TryEmit(::UnityEngine::Transform* a1, ::System::Boolean a2)
		{
			return ((::JBNEHIIFAOD*(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_TRYEMIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryDestroy(::JBNEHIIFAOD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBNEHIIFAOD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_TRYDESTROY_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_DISPOSE_OFFSET))(this);
		}

		::System::Void ResetTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_RESETTIMER_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_TICK_OFFSET))(this, a1);
		}

		::RPG::Client::AirshipBird* JOFNEECOKHH()
		{
			return ((::RPG::Client::AirshipBird*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_JOFNEECOKHH_OFFSET))(this);
		}

		static ::RPG::Client::AirshipBird* FADNJECGNKO(::Il2CppArray<::RPG::Client::AirshipBirdEmitPrefab>* a1)
		{
			return ((::RPG::Client::AirshipBird*(*)(::Il2CppArray<::RPG::Client::AirshipBirdEmitPrefab>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_FADNJECGNKO_OFFSET))(a1);
		}

		::JBNEHIIFAOD* JNOBAGHEBKE(::RPG::Client::AirshipBird* a1, ::UnityEngine::Transform* a2)
		{
			return ((::JBNEHIIFAOD*(*)(::PVOID, ::RPG::Client::AirshipBird*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_JNOBAGHEBKE_OFFSET))(this, a1, a2);
		}

		::System::Void LGAJBHKJPIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_LGAJBHKJPIM_OFFSET))(this);
		}

		::System::Void DKNKIMFABJB(::RPG::Client::AirshipBird* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AirshipBird*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_DKNKIMFABJB_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_AWAKE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_RESET_OFFSET))(this);
		}

		::System::Int32 get_CurrentMaxAliveCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_GET_CURRENTMAXALIVECOUNT_OFFSET))(this);
		}

		::System::Void set_CurrentMaxAliveCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_SET_CURRENTMAXALIVECOUNT_OFFSET))(this, a1);
		}

		::System::Single get_CurrentEmitInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_GET_CURRENTEMITINTERVAL_OFFSET))(this);
		}

		::System::Void set_CurrentEmitInterval(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_SET_CURRENTEMITINTERVAL_OFFSET))(this, a1);
		}

		::System::Void UpdateLevelInfo(::RPG::CustomRP::Quality a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_UPDATELEVELINFO_OFFSET))(this, a1);
		}

	};
}

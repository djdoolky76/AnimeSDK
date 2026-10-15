#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AirshipEmitPrefab.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
class CADDDIKDHBJ;
class CBABAAOHGHH;
class NBJNPBNNLBH;
namespace RPG::Client { class Airship; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AIRSHIPEMITTER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC653AF0)
#define RPG_CLIENT_AIRSHIPEMITTER_CHANNELNAME_OFFSET UNITYSDK_OFFSET(0xC653FB0)
#define RPG_CLIENT_AIRSHIPEMITTER_CREATEMANAGER_OFFSET UNITYSDK_OFFSET(0xC6525D0)
#define RPG_CLIENT_AIRSHIPEMITTER_CTOR_OFFSET UNITYSDK_OFFSET(0xC6540D0)
#define RPG_CLIENT_AIRSHIPEMITTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC653380)
#define RPG_CLIENT_AIRSHIPEMITTER_DKNKIMFABJB_OFFSET UNITYSDK_OFFSET(0xC653300)
#define RPG_CLIENT_AIRSHIPEMITTER_FADNJECGNKO_OFFSET UNITYSDK_OFFSET(0xC6538F0)
#define RPG_CLIENT_AIRSHIPEMITTER_GET_CURRENTEMITINTERVAL_OFFSET UNITYSDK_OFFSET(0xC653F70)
#define RPG_CLIENT_AIRSHIPEMITTER_GET_CURRENTMAXALIVECOUNT_OFFSET UNITYSDK_OFFSET(0xC653F50)
#define RPG_CLIENT_AIRSHIPEMITTER_GET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0xC653F90)
#define RPG_CLIENT_AIRSHIPEMITTER_GET_WAITEMITTIMER_OFFSET UNITYSDK_OFFSET(0xC652660)
#define RPG_CLIENT_AIRSHIPEMITTER_ISREADYTOEMIT_OFFSET UNITYSDK_OFFSET(0xC6526B0)
#define RPG_CLIENT_AIRSHIPEMITTER_JNOBAGHEBKE_OFFSET UNITYSDK_OFFSET(0xC652AA0)
#define RPG_CLIENT_AIRSHIPEMITTER_JOFNEECOKHH_OFFSET UNITYSDK_OFFSET(0xC652A50)
#define RPG_CLIENT_AIRSHIPEMITTER_KKGIDBBNMIP_OFFSET UNITYSDK_OFFSET(0xC653E70)
#define RPG_CLIENT_AIRSHIPEMITTER_LGAJBHKJPIM_OFFSET UNITYSDK_OFFSET(0xC6533D0)
#define RPG_CLIENT_AIRSHIPEMITTER_NECOPLLIIAM_OFFSET UNITYSDK_OFFSET(0xC653D50)
#define RPG_CLIENT_AIRSHIPEMITTER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC653DE0)
#define RPG_CLIENT_AIRSHIPEMITTER_ONSAMPLE_OFFSET UNITYSDK_OFFSET(0xC654030)
#define RPG_CLIENT_AIRSHIPEMITTER_READYTOEMIT_OFFSET UNITYSDK_OFFSET(0xC652720)
#define RPG_CLIENT_AIRSHIPEMITTER_RESETTIMER_OFFSET UNITYSDK_OFFSET(0xC6529A0)
#define RPG_CLIENT_AIRSHIPEMITTER_RESET_OFFSET UNITYSDK_OFFSET(0xC653ED0)
#define RPG_CLIENT_AIRSHIPEMITTER_SAMPLEDELAY_OFFSET UNITYSDK_OFFSET(0xC653FF0)
#define RPG_CLIENT_AIRSHIPEMITTER_SET_CURRENTEMITINTERVAL_OFFSET UNITYSDK_OFFSET(0xC653F80)
#define RPG_CLIENT_AIRSHIPEMITTER_SET_CURRENTMAXALIVECOUNT_OFFSET UNITYSDK_OFFSET(0xC653F60)
#define RPG_CLIENT_AIRSHIPEMITTER_SET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0xC653FA0)
#define RPG_CLIENT_AIRSHIPEMITTER_SHOULDEMITBYSIGNAL_OFFSET UNITYSDK_OFFSET(0xC653870)
#define RPG_CLIENT_AIRSHIPEMITTER_TICK_OFFSET UNITYSDK_OFFSET(0xC6537E0)
#define RPG_CLIENT_AIRSHIPEMITTER_TRYDESTROY_OFFSET UNITYSDK_OFFSET(0xC653080)
#define RPG_CLIENT_AIRSHIPEMITTER_TRYEMIT_OFFSET UNITYSDK_OFFSET(0xC652770)
#define RPG_CLIENT_AIRSHIPEMITTER_UPDATELEVELINFO_OFFSET UNITYSDK_OFFSET(0xC653C20)

namespace RPG::Client
{
	inline static constexpr unsigned int AirshipEmitter_TypeDefinitionIndex = 59792;

	class AirshipEmitter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean useSyncLoad; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single emitInterval; // 0x1C
		::UnityEngine::AnimationCurve* emitIntervalCurve; // 0x20
		::System::Int32 maxAliveCount; // 0x28
		::UnityEngine::Vector2 initialEmitRange; // 0x2C
		::System::Byte _padding1[0x4];
		::Il2CppArray<::System::Object*>* levelInfo; // 0x38
		::Il2CppArray<::RPG::Client::AirshipEmitPrefab>* airshipEmitPrefabs; // 0x40
		::System::Boolean enableSignalBinding; // 0x48
		::System::Byte _padding2[0x7];
		::System::String* signalChannelName; // 0x50
		::System::Int32 targetSignValue; // 0x58
		::System::Single emitTimeOffset; // 0x5C
		::System::Int32 debugCurrentSignalValue; // 0x60
		::System::Boolean debugSignalMatched; // 0x64
		::System::Byte _padding3[0x3];
		::System::Single debugEmitCountdown; // 0x68
		::System::Int32 _CurrentMaxAliveCount_k__BackingField; // 0x6C
		::System::Single _CurrentEmitInterval_k__BackingField; // 0x70
		::System::Single ANCCFCLMLKH; // 0x74
		::System::Collections::Generic::List_1<::NBJNPBNNLBH*>* PGIBPPGCEEB; // 0x78
		::System::Boolean EEKOJGCGHLB; // 0x80
		::System::Byte _padding4[0x3];
		::System::Single MEEEDHKBDJL; // 0x84
		::System::Int32 DFGABAIIJOH; // 0x88
		::System::Byte _padding5[0x4];
		::CADDDIKDHBJ* _OwnerFMSystem_k__BackingField; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_CTOR_OFFSET))(this);
		}

		::CBABAAOHGHH* CreateManager(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::CBABAAOHGHH*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_CREATEMANAGER_OFFSET))(this, a1, a2);
		}

		::System::Single get_WaitEmitTimer()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_GET_WAITEMITTIMER_OFFSET))(this);
		}

		::System::Boolean IsReadyToEmit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_ISREADYTOEMIT_OFFSET))(this);
		}

		::System::Void ReadyToEmit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_READYTOEMIT_OFFSET))(this);
		}

		::NBJNPBNNLBH* TryEmit(::UnityEngine::Transform* a1, ::System::Boolean a2)
		{
			return ((::NBJNPBNNLBH*(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_TRYEMIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryDestroy(::NBJNPBNNLBH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NBJNPBNNLBH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_TRYDESTROY_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_DISPOSE_OFFSET))(this);
		}

		::System::Void ResetTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_RESETTIMER_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_TICK_OFFSET))(this, a1);
		}

		::System::Boolean ShouldEmitBySignal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_SHOULDEMITBYSIGNAL_OFFSET))(this);
		}

		::RPG::Client::Airship* JOFNEECOKHH()
		{
			return ((::RPG::Client::Airship*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_JOFNEECOKHH_OFFSET))(this);
		}

		static ::RPG::Client::Airship* FADNJECGNKO(::Il2CppArray<::RPG::Client::AirshipEmitPrefab>* a1)
		{
			return ((::RPG::Client::Airship*(*)(::Il2CppArray<::RPG::Client::AirshipEmitPrefab>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_FADNJECGNKO_OFFSET))(a1);
		}

		::NBJNPBNNLBH* JNOBAGHEBKE(::RPG::Client::Airship* a1, ::UnityEngine::Transform* a2)
		{
			return ((::NBJNPBNNLBH*(*)(::PVOID, ::RPG::Client::Airship*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_JNOBAGHEBKE_OFFSET))(this, a1, a2);
		}

		::System::Void LGAJBHKJPIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_LGAJBHKJPIM_OFFSET))(this);
		}

		::System::Void DKNKIMFABJB(::RPG::Client::Airship* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Airship*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_DKNKIMFABJB_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_RESET_OFFSET))(this);
		}

		::System::Void NECOPLLIIAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_NECOPLLIIAM_OFFSET))(this);
		}

		::System::Void KKGIDBBNMIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_KKGIDBBNMIP_OFFSET))(this);
		}

		::System::Int32 get_CurrentMaxAliveCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_GET_CURRENTMAXALIVECOUNT_OFFSET))(this);
		}

		::System::Void set_CurrentMaxAliveCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_SET_CURRENTMAXALIVECOUNT_OFFSET))(this, a1);
		}

		::System::Single get_CurrentEmitInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_GET_CURRENTEMITINTERVAL_OFFSET))(this);
		}

		::System::Void set_CurrentEmitInterval(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_SET_CURRENTEMITINTERVAL_OFFSET))(this, a1);
		}

		::CADDDIKDHBJ* get_OwnerFMSystem()
		{
			return ((::CADDDIKDHBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_GET_OWNERFMSYSTEM_OFFSET))(this);
		}

		::System::Void set_OwnerFMSystem(::CADDDIKDHBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CADDDIKDHBJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_SET_OWNERFMSYSTEM_OFFSET))(this, a1);
		}

		::System::String* ChannelName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_CHANNELNAME_OFFSET))(this);
		}

		::System::Single SampleDelay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_SAMPLEDELAY_OFFSET))(this);
		}

		::System::Void OnSample(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_ONSAMPLE_OFFSET))(this, a1);
		}

		::System::Void UpdateLevelInfo(::RPG::CustomRP::Quality a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_UPDATELEVELINFO_OFFSET))(this, a1);
		}

	};
}

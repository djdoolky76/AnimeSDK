#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace Cinemachine { class CinemachineBasicMultiChannelPerlin; }
namespace Cinemachine { class CinemachineFreeLook; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASHAKE_AIFJDPEHCPC_OFFSET UNITYSDK_OFFSET(0xDECAD70)
#define RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASHAKE_AWAKE_OFFSET UNITYSDK_OFFSET(0xDECB1F0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASHAKE_CTOR_OFFSET UNITYSDK_OFFSET(0xDECB330)
#define RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASHAKE_PCAFELOCKJH_OFFSET UNITYSDK_OFFSET(0xDECB2E0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASHAKE_PNINDAJJEGP_OFFSET UNITYSDK_OFFSET(0xDECB180)
#define RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASHAKE_STARTSHAKE_OFFSET UNITYSDK_OFFSET(0xDECAFE0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASHAKE_STOPSHAKE_OFFSET UNITYSDK_OFFSET(0xDECB090)
#define RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASHAKE_TICK_OFFSET UNITYSDK_OFFSET(0xDECAA40)

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoRoadRashCameraShake_TypeDefinitionIndex = 75843;

	class MonoRoadRashCameraShake : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* CameraShakes; // 0x18
		::Cinemachine::CinemachineFreeLook* Camera; // 0x20
		::System::Boolean editorUpdate; // 0x28
		::System::Byte _padding0[0x7];
		::Cinemachine::CinemachineBasicMultiChannelPerlin* OBIEPHKGFAD; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* EFMPDHDGAPC; // 0x38
		::System::Int32 JFELLAPNGGJ; // 0x40
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* KOAIOCGABOF; // 0x48
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>>* NMFFDDKMFAO; // 0x50
		::System::Int32 CIHPIBADLCD; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASHAKE_CTOR_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASHAKE_TICK_OFFSET))(this, a1);
		}

		::System::Void StartShake(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASHAKE_STARTSHAKE_OFFSET))(this, a1);
		}

		::System::Void StopShake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASHAKE_STOPSHAKE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASHAKE_AWAKE_OFFSET))(this);
		}

		::System::Void AIFJDPEHCPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASHAKE_AIFJDPEHCPC_OFFSET))(this);
		}

		::System::Void PNINDAJJEGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASHAKE_PNINDAJJEGP_OFFSET))(this);
		}

		::System::Void PCAFELOCKJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASHAKE_PCAFELOCKJH_OFFSET))(this);
		}

	};
}

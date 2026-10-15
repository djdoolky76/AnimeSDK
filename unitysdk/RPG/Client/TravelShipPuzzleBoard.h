#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class MGJOAOHPFBO;
namespace RPG::Client { class TravelShipLevelConfigAsset; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_ANHINLJCKBJ_OFFSET UNITYSDK_OFFSET(0xE31A170)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_BROADCASTEVENT_OFFSET UNITYSDK_OFFSET(0xE3197A0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_CCTOR_OFFSET UNITYSDK_OFFSET(0xE31A300)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xE31A2A0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE318E80)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_GET_ISTAKEOFF_OFFSET UNITYSDK_OFFSET(0xE318E60)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_GODKOFBKDAH_OFFSET UNITYSDK_OFFSET(0xE318DA0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_IGIABJKPMAK_OFFSET UNITYSDK_OFFSET(0xE3193F0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xE3181E0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xE3196E0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_JMAJKNPDBFN_OFFSET UNITYSDK_OFFSET(0xE319720)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_JPBPCAOPOBM_OFFSET UNITYSDK_OFFSET(0xE319F70)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_KKKPFOBOPCK_OFFSET UNITYSDK_OFFSET(0xE319B80)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_KKPKJIOEBIM_OFFSET UNITYSDK_OFFSET(0xE3186E0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_KMPGCDHGGKM_OFFSET UNITYSDK_OFFSET(0xE31A0E0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xE319EB0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0xE319F10)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_ONRECEIVEEXIT_OFFSET UNITYSDK_OFFSET(0xE319AE0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_OOMOGLMNKMK_OFFSET UNITYSDK_OFFSET(0xE319190)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_PKJLOKBKIBM_OFFSET UNITYSDK_OFFSET(0xE3184B0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_PLIONAKOBGG_OFFSET UNITYSDK_OFFSET(0xE3189C0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xE318550)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_SWITCHDRAWDEBUG_OFFSET UNITYSDK_OFFSET(0xE319B30)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xE319870)

namespace RPG::Client
{
	class TravelShipPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::UnityEngine::Transform* SwitchTravelShipOrigin; // 0x48
		::System::Single NavigationPointStepUpHeight; // 0x50
		::System::Single TakeOffDuration; // 0x54
		::UnityEngine::AnimationCurve* TakeOffHeightCurve; // 0x58
		::System::String* TakeOffEventName; // 0x60
		::System::String* ExitEventName; // 0x68
		::System::String* PlayerTeleportEventName; // 0x70
		::Il2CppArray<::RPG::Client::TravelShipLevelConfigAsset*>* ConfigAssets; // 0x78
		::System::Boolean KPLNPJPDFAG; // 0x80
		::System::Byte _padding0[0x3];
		::System::Int32 PFLIGKIGCAE; // 0x84
		::UnityEngine::Vector3 ACCDFNJMPEL; // 0x88
		::UnityEngine::Quaternion DJDPNLJPLEL; // 0x94
		::UnityEngine::Vector3 OIMMGKNHKOA; // 0xA4
		::UnityEngine::Quaternion HBAIICJGPGC; // 0xB0
		::System::Boolean BDAIEMOEFPD; // 0xC0
		::System::Boolean FAEODGGPGKB; // 0xC1
		::System::Byte _padding1[0x6];
		::RPG::GameCore::GameEntity* JCCHOIPFHHD; // 0xC8
		::MGJOAOHPFBO* CPIIOIPAAKK; // 0xD0
		::System::Single LKOFBHBBDKB; // 0xD8
		static ::System::String** StaticGet_FLOEGOFOCAA()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "TravelShipPuzzleBoard")->GetStaticField(0x261C0);
		}

		// static const ::System::Object AvatarID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_CCTOR_OFFSET))();
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void JMAJKNPDBFN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_JMAJKNPDBFN_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_UPDATE_OFFSET))(this);
		}

		::System::Void OnReceiveExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_ONRECEIVEEXIT_OFFSET))(this);
		}

		::System::Void BroadcastEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_BROADCASTEVENT_OFFSET))(this, a1);
		}

		::System::Void SwitchDrawDebug()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_SWITCHDRAWDEBUG_OFFSET))(this);
		}

		::System::Void KKPKJIOEBIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_KKPKJIOEBIM_OFFSET))(this);
		}

		::System::Void IGIABJKPMAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_IGIABJKPMAK_OFFSET))(this);
		}

		::System::Void KKKPFOBOPCK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_KKKPFOBOPCK_OFFSET))(this, a1);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_ONDRAWGIZMOS_OFFSET))(this);
		}

		::System::Void JPBPCAOPOBM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_JPBPCAOPOBM_OFFSET))(this, a1);
		}

		::System::Void KMPGCDHGGKM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_KMPGCDHGGKM_OFFSET))(this, a1);
		}

		::System::Void ANHINLJCKBJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_ANHINLJCKBJ_OFFSET))(this, a1);
		}

		::System::Void PLIONAKOBGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_PLIONAKOBGG_OFFSET))(this);
		}

		::System::Void OOMOGLMNKMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_OOMOGLMNKMK_OFFSET))(this);
		}

		::System::Void GODKOFBKDAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_GODKOFBKDAH_OFFSET))(this);
		}

		::System::Void PKJLOKBKIBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_PKJLOKBKIBM_OFFSET))(this);
		}

		::System::Boolean get_IsTakeOff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_GET_ISTAKEOFF_OFFSET))(this);
		}

	};
}

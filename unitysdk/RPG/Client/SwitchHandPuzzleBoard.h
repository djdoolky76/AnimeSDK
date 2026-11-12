#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/GameCore/ESwitchHandGestureType.h"
class CCJJEJFDBIF;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_CCTOR_OFFSET UNITYSDK_OFFSET(0xEC0A770)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xEC0A6F0)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_DFABOAEOGEK_OFFSET UNITYSDK_OFFSET(0xEC08C80)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEC090D0)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_EEIPIIPLEFP_OFFSET UNITYSDK_OFFSET(0xEC0A610)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_FCDKEMLBFJO_OFFSET UNITYSDK_OFFSET(0xEC08F00)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_HNELMPOEFDG_OFFSET UNITYSDK_OFFSET(0xEC0A560)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xEC09180)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONERAVISIBLESTATECHANGED_OFFSET UNITYSDK_OFFSET(0xEC09D80)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONGAMERESET_OFFSET UNITYSDK_OFFSET(0xEC0A450)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONGESTURETYPESWITCHFROM_OFFSET UNITYSDK_OFFSET(0xEC091C0)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONGESTURETYPESWITCHTO_OFFSET UNITYSDK_OFFSET(0xEC09370)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONLIFTGESTUREEXIT_OFFSET UNITYSDK_OFFSET(0xEC09EB0)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONPLAYERTELEPORT_OFFSET UNITYSDK_OFFSET(0xEC0A060)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONPLAYERTRIGGERPULLBACK_OFFSET UNITYSDK_OFFSET(0xEC0A340)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONROCKETGESTUREFIRE_OFFSET UNITYSDK_OFFSET(0xEC096D0)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONROCKETGESTURELAUNCH_OFFSET UNITYSDK_OFFSET(0xEC09520)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONROCKETGESTUREPUNCHED_OFFSET UNITYSDK_OFFSET(0xEC09A30)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONROCKETGESTUREPUNCHHIT_OFFSET UNITYSDK_OFFSET(0xEC09BE0)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONROCKETGESTURESTOP_OFFSET UNITYSDK_OFFSET(0xEC09880)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONROCKETPUNCHHITSTUB_OFFSET UNITYSDK_OFFSET(0xEC0A190)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xEC08E50)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xEC08B60)

namespace RPG::Client
{
	inline static constexpr unsigned int SwitchHandPuzzleBoard_TypeDefinitionIndex = 70739;

	class SwitchHandPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::System::UInt32 puzzleID; // 0x48
		::System::Byte _padding0[0x4];
		::System::String* customStr_ExitGame; // 0x50
		::System::String* customStr_SwitchGestureTo; // 0x58
		::System::String* customStr_SwitchGestureFrom; // 0x60
		::System::String* customStr_SwitchGesture; // 0x68
		::System::String* customStr_EraVisibleChange; // 0x70
		::System::String* customStr_RocketPunchHit; // 0x78
		::CCJJEJFDBIF* EHOLJJNAMAG; // 0x80
		static ::Il2CppArray<::System::String*>** StaticGet_GestureTypeToString()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.Client", "SwitchHandPuzzleBoard")->GetStaticField(0xFF60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_CCTOR_OFFSET))();
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void OnGestureTypeSwitchFrom(::RPG::GameCore::ESwitchHandGestureType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ESwitchHandGestureType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONGESTURETYPESWITCHFROM_OFFSET))(this, a1);
		}

		::System::Void OnGestureTypeSwitchTo(::RPG::GameCore::ESwitchHandGestureType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ESwitchHandGestureType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONGESTURETYPESWITCHTO_OFFSET))(this, a1);
		}

		::System::Void OnRocketGestureLaunch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONROCKETGESTURELAUNCH_OFFSET))(this);
		}

		::System::Void OnRocketGestureFire()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONROCKETGESTUREFIRE_OFFSET))(this);
		}

		::System::Void OnRocketGestureStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONROCKETGESTURESTOP_OFFSET))(this);
		}

		::System::Void OnRocketGesturePunched()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONROCKETGESTUREPUNCHED_OFFSET))(this);
		}

		::System::Void OnRocketGesturePunchHit(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONROCKETGESTUREPUNCHHIT_OFFSET))(this, a1);
		}

		::System::Void OnEraVisibleStateChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONERAVISIBLESTATECHANGED_OFFSET))(this, a1);
		}

		::System::Void OnLiftGestureExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONLIFTGESTUREEXIT_OFFSET))(this);
		}

		::System::Void OnPlayerTeleport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONPLAYERTELEPORT_OFFSET))(this);
		}

		::System::Void OnRocketPunchHitStub()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONROCKETPUNCHHITSTUB_OFFSET))(this);
		}

		::System::Void OnPlayerTriggerPullBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONPLAYERTRIGGERPULLBACK_OFFSET))(this);
		}

		::System::Void OnGameReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONGAMERESET_OFFSET))(this);
		}

		::System::Void DFABOAEOGEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_DFABOAEOGEK_OFFSET))(this);
		}

		::System::Void FCDKEMLBFJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_FCDKEMLBFJO_OFFSET))(this);
		}

		::System::Void HNELMPOEFDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_HNELMPOEFDG_OFFSET))(this);
		}

		::System::Void EEIPIIPLEFP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_EEIPIIPLEFP_OFFSET))(this, a1);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/GravityBallWallControllerMovement.h"
#include "unitysdk/RPG/Client/Prop/GravityBallWallController_GravityBallWallRotateMode.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class HBMNNCAGMMO;
namespace RPG::Client::Prop { class GravityBallObstacle; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_APKMCEIAFPN_OFFSET UNITYSDK_OFFSET(0xDCF6100)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xDCF5210)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_BBEPCHFBNNO_OFFSET UNITYSDK_OFFSET(0xDCF57C0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_CFJCHELCKGC_OFFSET UNITYSDK_OFFSET(0xDCF5AA0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_CMPIDGOPINK_OFFSET UNITYSDK_OFFSET(0xDCF56D0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0xDCF71C0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_DACKEILIGLK_OFFSET UNITYSDK_OFFSET(0xDCF4E00)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_EKPNECAPOFL_OFFSET UNITYSDK_OFFSET(0xDCF50F0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_EPNEMMFNMIK_OFFSET UNITYSDK_OFFSET(0xDCF66A0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xDCF5DA0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_GETROTATEPROGRESS_OFFSET UNITYSDK_OFFSET(0xDCF4C40)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_GETROTATION_OFFSET UNITYSDK_OFFSET(0xDCF51C0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_GET_ENABLECONTROLLER_OFFSET UNITYSDK_OFFSET(0xDCF4C30)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_HIDEOBSTACLEITEMS_OFFSET UNITYSDK_OFFSET(0xDCF6E80)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_HIDE_OFFSET UNITYSDK_OFFSET(0xDCF6650)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_HPBLIFCMGHC_OFFSET UNITYSDK_OFFSET(0xDCF6480)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_IKAGMBLDMHJ_OFFSET UNITYSDK_OFFSET(0xDCF5D40)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_ISENABLECONTROLLER_OFFSET UNITYSDK_OFFSET(0xDCF4CE0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_JMDCAMPKNCM_OFFSET UNITYSDK_OFFSET(0xDCF5870)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_KLAACAICLII_OFFSET UNITYSDK_OFFSET(0xDCF63D0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_KNDMCGLNMBA_OFFSET UNITYSDK_OFFSET(0xDCF6770)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_MHJLOIDBKHE_OFFSET UNITYSDK_OFFSET(0xDCF6240)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_ONBALLOUTOFPUZZLE_OFFSET UNITYSDK_OFFSET(0xDCF5010)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDCF69B0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_ONPUZZLERESET_OFFSET UNITYSDK_OFFSET(0xDCF6A40)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_RESETOBSTACLEITEMS_OFFSET UNITYSDK_OFFSET(0xDCF6CB0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_RESETTOINITROTATION_OFFSET UNITYSDK_OFFSET(0xDCF4D70)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_SETEFFVISIBLE_OFFSET UNITYSDK_OFFSET(0xDCF5F50)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_SETENABLECONTROLLER_OFFSET UNITYSDK_OFFSET(0xDCF4D20)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_SETMOVEMENT_OFFSET UNITYSDK_OFFSET(0xDCF4C90)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_SETWALLBG_OFFSET UNITYSDK_OFFSET(0xDCF6380)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_STARTSHOW_OFFSET UNITYSDK_OFFSET(0xDCF6960)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_STARTUPOBSTACLEITEMS_OFFSET UNITYSDK_OFFSET(0xDCF6B40)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_STOPOBSTACLEITEMS_OFFSET UNITYSDK_OFFSET(0xDCF7050)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xDCF55F0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int GravityBallWallController_TypeDefinitionIndex = 78599;

	class GravityBallWallController : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::UnityEngine::Rigidbody* HPAGDLDHKFC; // 0x48
		::RPG::Client::Prop::GravityBallWallControllerMovement MCJMOCEJKKM; // 0x50
		::System::Boolean FHICGOLLDDA; // 0x54
		::System::Byte _padding0[0x3];
		::System::Single AngleSpeed; // 0x58
		::System::Single ForwardAngleAcceleration; // 0x5C
		::System::Single BackwardAngleAcceleration; // 0x60
		::System::Single SlowdownAngleAcceleration; // 0x64
		::System::Single WallAnimWidth; // 0x68
		::System::Single ShowTime; // 0x6C
		::UnityEngine::AnimationCurve* ShowCurve; // 0x70
		::UnityEngine::GameObject* Wall; // 0x78
		::System::Single HAPJCKFHGIJ; // 0x80
		::RPG::Client::Prop::GravityBallWallController_GravityBallWallRotateMode RotateMode; // 0x84
		::UnityEngine::Quaternion KHOPAMJJINE; // 0x88
		::System::Single AMAHHCEIEOD; // 0x98
		::System::Boolean IJDAMOPNGCJ; // 0x9C
		::System::Boolean DIDMLIDKNNC; // 0x9D
		::System::Byte _padding1[0x2];
		::System::Single JHOEOJILFMN; // 0xA0
		::System::Byte _padding2[0x4];
		::RPG::GameCore::GameEntity* PKPCLBHFIKJ; // 0xA8
		::UnityEngine::Transform* JBBOCMKLKPL; // 0xB0
		::HBMNNCAGMMO* MEGKBJCPBAG; // 0xB8
		::System::Collections::Generic::List_1<::RPG::Client::Prop::GravityBallObstacle*>* KNOBGNHGLMO; // 0xC0
		::UnityEngine::GameObject* KKMIGDFDBDK; // 0xC8
		::UnityEngine::GameObject* JKJEHJCDOJC; // 0xD0
		// static const ::System::Object BPAIJGEKNGD; // 0x0
		// static const ::System::String* DHAOLIOAEJA; // 0x0
		// static const ::System::String* PDKCCEDBBHF; // 0x0
		// static const ::System::String* PNKODAOFFEB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Boolean get_EnableController()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_GET_ENABLECONTROLLER_OFFSET))(this);
		}

		::System::Single GetRotateProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_GETROTATEPROGRESS_OFFSET))(this);
		}

		::System::Void SetMovement(::RPG::Client::Prop::GravityBallWallControllerMovement a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::GravityBallWallControllerMovement))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_SETMOVEMENT_OFFSET))(this, a1);
		}

		::System::Boolean IsEnableController()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_ISENABLECONTROLLER_OFFSET))(this);
		}

		::System::Void SetEnableController(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_SETENABLECONTROLLER_OFFSET))(this, a1);
		}

		::System::Void ResetToInitRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_RESETTOINITROTATION_OFFSET))(this);
		}

		::System::Void OnBallOutofPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_ONBALLOUTOFPUZZLE_OFFSET))(this);
		}

		::System::Single GetRotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_GETROTATION_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void JMDCAMPKNCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_JMDCAMPKNCM_OFFSET))(this);
		}

		::System::Void CFJCHELCKGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_CFJCHELCKGC_OFFSET))(this);
		}

		::System::Void IKAGMBLDMHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_IKAGMBLDMHJ_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void DACKEILIGLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_DACKEILIGLK_OFFSET))(this);
		}

		::System::Void EKPNECAPOFL(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_EKPNECAPOFL_OFFSET))(this, a1, a2);
		}

		::System::Void SetWallBG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_SETWALLBG_OFFSET))(this, a1);
		}

		::System::Void KLAACAICLII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_KLAACAICLII_OFFSET))(this);
		}

		::System::Void HPBLIFCMGHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_HPBLIFCMGHC_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_HIDE_OFFSET))(this);
		}

		::System::Void EPNEMMFNMIK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_EPNEMMFNMIK_OFFSET))(this, a1);
		}

		::System::Void KNDMCGLNMBA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_KNDMCGLNMBA_OFFSET))(this, a1);
		}

		::System::Void CMPIDGOPINK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_CMPIDGOPINK_OFFSET))(this);
		}

		::System::Void StartShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_STARTSHOW_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void BBEPCHFBNNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_BBEPCHFBNNO_OFFSET))(this);
		}

		::System::Void OnPuzzleReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_ONPUZZLERESET_OFFSET))(this);
		}

		::System::Void StartupObstacleItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_STARTUPOBSTACLEITEMS_OFFSET))(this);
		}

		::System::Void ResetObstacleItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_RESETOBSTACLEITEMS_OFFSET))(this);
		}

		::System::Void HideObstacleItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_HIDEOBSTACLEITEMS_OFFSET))(this);
		}

		::System::Void StopObstacleItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_STOPOBSTACLEITEMS_OFFSET))(this);
		}

		::System::Void SetEffVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_SETEFFVISIBLE_OFFSET))(this, a1);
		}

		::System::Void APKMCEIAFPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_APKMCEIAFPN_OFFSET))(this);
		}

		::System::Void MHJLOIDBKHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_MHJLOIDBKHE_OFFSET))(this);
		}

	};
}

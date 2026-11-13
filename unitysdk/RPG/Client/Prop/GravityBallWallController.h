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

#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_APKMCEIAFPN_OFFSET UNITYSDK_OFFSET(0x1A523520)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A522630)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_BBEPCHFBNNO_OFFSET UNITYSDK_OFFSET(0x1A522BE0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_CFJCHELCKGC_OFFSET UNITYSDK_OFFSET(0x1A522EC0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_CMPIDGOPINK_OFFSET UNITYSDK_OFFSET(0x1A522AF0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5245E0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_DACKEILIGLK_OFFSET UNITYSDK_OFFSET(0x1A522220)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_EKPNECAPOFL_OFFSET UNITYSDK_OFFSET(0x1A522510)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_EPNEMMFNMIK_OFFSET UNITYSDK_OFFSET(0x1A523AC0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1A5231C0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_GETROTATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x1A522060)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_GETROTATION_OFFSET UNITYSDK_OFFSET(0x1A5225E0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_GET_ENABLECONTROLLER_OFFSET UNITYSDK_OFFSET(0x1A522050)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_HIDEOBSTACLEITEMS_OFFSET UNITYSDK_OFFSET(0x1A5242A0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_HIDE_OFFSET UNITYSDK_OFFSET(0x1A523A70)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_HPBLIFCMGHC_OFFSET UNITYSDK_OFFSET(0x1A5238A0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_IKAGMBLDMHJ_OFFSET UNITYSDK_OFFSET(0x1A523160)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_ISENABLECONTROLLER_OFFSET UNITYSDK_OFFSET(0x1A522100)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_JMDCAMPKNCM_OFFSET UNITYSDK_OFFSET(0x1A522C90)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_KLAACAICLII_OFFSET UNITYSDK_OFFSET(0x1A5237F0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_KNDMCGLNMBA_OFFSET UNITYSDK_OFFSET(0x1A523B90)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_MHJLOIDBKHE_OFFSET UNITYSDK_OFFSET(0x1A523660)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_ONBALLOUTOFPUZZLE_OFFSET UNITYSDK_OFFSET(0x1A522430)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A523DD0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_ONPUZZLERESET_OFFSET UNITYSDK_OFFSET(0x1A523E60)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_RESETOBSTACLEITEMS_OFFSET UNITYSDK_OFFSET(0x1A5240D0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_RESETTOINITROTATION_OFFSET UNITYSDK_OFFSET(0x1A522190)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_SETEFFVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A523370)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_SETENABLECONTROLLER_OFFSET UNITYSDK_OFFSET(0x1A522140)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_SETMOVEMENT_OFFSET UNITYSDK_OFFSET(0x1A5220B0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_SETWALLBG_OFFSET UNITYSDK_OFFSET(0x1A5237A0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_STARTSHOW_OFFSET UNITYSDK_OFFSET(0x1A523D80)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_STARTUPOBSTACLEITEMS_OFFSET UNITYSDK_OFFSET(0x1A523F60)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_STOPOBSTACLEITEMS_OFFSET UNITYSDK_OFFSET(0x1A524470)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A522A10)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int GravityBallWallController_TypeDefinitionIndex = 81333;

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

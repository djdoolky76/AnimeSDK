#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LookAtDisableCause.h"
#include "unitysdk/RPG/Client/LookAtTargetData.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class AttachmentSolver; }
namespace RPG::Client { class LookAtSolver; }
namespace RPG::Client { class LookAtSolverConfigBase; }
namespace RPG::Client { class UVMoveLookAt; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_AVATARLOOKATCONTROLLER_ACDPBPKPKGE_OFFSET UNITYSDK_OFFSET(0x1A4D85C0)
#define RPG_CLIENT_AVATARLOOKATCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A4D8560)
#define RPG_CLIENT_AVATARLOOKATCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0x1A4D8970)
#define RPG_CLIENT_AVATARLOOKATCONTROLLER_GET_CURRENTSOLVERNAME_OFFSET UNITYSDK_OFFSET(0x1A4D8950)
#define RPG_CLIENT_AVATARLOOKATCONTROLLER_GET_CURRENTSOLVER_OFFSET UNITYSDK_OFFSET(0x1A4D8940)
#define RPG_CLIENT_AVATARLOOKATCONTROLLER_GET_ISLOOKATENABLED_OFFSET UNITYSDK_OFFSET(0x1A4D88B0)
#define RPG_CLIENT_AVATARLOOKATCONTROLLER_LOOKATTARGET_OFFSET UNITYSDK_OFFSET(0x1A4D7690)
#define RPG_CLIENT_AVATARLOOKATCONTROLLER_MAPTARGETFORWARD_OFFSET UNITYSDK_OFFSET(0x1A4D7730)
#define RPG_CLIENT_AVATARLOOKATCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A4D8860)
#define RPG_CLIENT_AVATARLOOKATCONTROLLER_PHPJOKFCHGA_OFFSET UNITYSDK_OFFSET(0x1A4D8030)
#define RPG_CLIENT_AVATARLOOKATCONTROLLER_SETDISABLEWITHCAUSE_OFFSET UNITYSDK_OFFSET(0x1A4D84A0)
#define RPG_CLIENT_AVATARLOOKATCONTROLLER_SETUPCURVEBLENDER_OFFSET UNITYSDK_OFFSET(0x1A4D79D0)
#define RPG_CLIENT_AVATARLOOKATCONTROLLER_SET_CURRENTSOLVERNAME_OFFSET UNITYSDK_OFFSET(0x1A4D8960)
#define RPG_CLIENT_AVATARLOOKATCONTROLLER_STOPLOOKAT_OFFSET UNITYSDK_OFFSET(0x1A4D75E0)
#define RPG_CLIENT_AVATARLOOKATCONTROLLER_SWITCHSOLVER_OFFSET UNITYSDK_OFFSET(0x1A4D7A40)
#define RPG_CLIENT_AVATARLOOKATCONTROLLER_UPDATELOOKATSOLVE_OFFSET UNITYSDK_OFFSET(0x1A4D7DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarLookAtController_TypeDefinitionIndex = 70315;

	class AvatarLookAtController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::AnimationCurve* MonsterRootYawMapping; // 0x18
		::System::Single TargetHeightOffset; // 0x20
		::System::Single TargetSwitchSpeed; // 0x24
		::System::Single BlendInOutTime; // 0x28
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* LookAtYawMapping; // 0x30
		::RPG::Client::LookAtSolver* Solver; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::LookAtSolverConfigBase*>* SolverConfigs; // 0x40
		::RPG::Client::AttachmentSolver* AttachmentSolver; // 0x48
		::System::String* _CurrentSolverName_k__BackingField; // 0x50
		::RPG::Client::LookAtTargetData HLFPJNCLONE; // 0x58
		::RPG::Client::LookAtSolver* IKGKGJIJDFK; // 0xE0
		::RPG::Client::UVMoveLookAt* OMOFNKPEMPI; // 0xE8
		// static const ::System::String* NHFFAEMLHKN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARLOOKATCONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Void StopLookAt(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARLOOKATCONTROLLER_STOPLOOKAT_OFFSET))(this, a1);
		}

		::System::Void LookAtTarget(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARLOOKATCONTROLLER_LOOKATTARGET_OFFSET))(this, a1);
		}

		static ::UnityEngine::Vector3 MapTargetForward(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::AnimationCurve* a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARLOOKATCONTROLLER_MAPTARGETFORWARD_OFFSET))(a1, a2, a3);
		}

		::System::Void SetupCurveBlender(::System::Single a1, ::UnityEngine::AnimationCurve* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARLOOKATCONTROLLER_SETUPCURVEBLENDER_OFFSET))(this, a1, a2);
		}

		::System::Boolean SwitchSolver(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARLOOKATCONTROLLER_SWITCHSOLVER_OFFSET))(this, a1);
		}

		::System::Boolean UpdateLookAtSolve(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARLOOKATCONTROLLER_UPDATELOOKATSOLVE_OFFSET))(this, a1);
		}

		::System::Void SetDisableWithCause(::RPG::Client::LookAtDisableCause a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LookAtDisableCause, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARLOOKATCONTROLLER_SETDISABLEWITHCAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARLOOKATCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARLOOKATCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void ACDPBPKPKGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARLOOKATCONTROLLER_ACDPBPKPKGE_OFFSET))(this);
		}

		::UnityEngine::Vector3 PHPJOKFCHGA(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARLOOKATCONTROLLER_PHPJOKFCHGA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLookAtEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARLOOKATCONTROLLER_GET_ISLOOKATENABLED_OFFSET))(this);
		}

		::RPG::Client::LookAtSolver* get_CurrentSolver()
		{
			return ((::RPG::Client::LookAtSolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARLOOKATCONTROLLER_GET_CURRENTSOLVER_OFFSET))(this);
		}

		::System::String* get_CurrentSolverName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARLOOKATCONTROLLER_GET_CURRENTSOLVERNAME_OFFSET))(this);
		}

		::System::Void set_CurrentSolverName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARLOOKATCONTROLLER_SET_CURRENTSOLVERNAME_OFFSET))(this, a1);
		}

	};
}

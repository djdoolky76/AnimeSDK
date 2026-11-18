#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RootMotion::FinalIK { class IK; }
namespace RootMotion::FinalIK { class TwistSolver; }

#define ROOTMOTION_FINALIK_TWISTRELAXER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1FEDA990)
#define ROOTMOTION_FINALIK_TWISTRELAXER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1FEDAB20)
#define ROOTMOTION_FINALIK_TWISTRELAXER_ONPOSTUPDATE_OFFSET UNITYSDK_OFFSET(0x1FEDA800)
#define ROOTMOTION_FINALIK_TWISTRELAXER_START_OFFSET UNITYSDK_OFFSET(0x1FEDA3F0)
#define ROOTMOTION_FINALIK_TWISTRELAXER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1FEDA660)
#define ROOTMOTION_FINALIK_TWISTRELAXER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FEDACF0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int TwistRelaxer_TypeDefinitionIndex = 36960;

	class TwistRelaxer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RootMotion::FinalIK::IK* ik; // 0x18
		::Il2CppArray<::RootMotion::FinalIK::TwistSolver*>* twistSolvers; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_TWISTRELAXER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_TWISTRELAXER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_TWISTRELAXER_UPDATE_OFFSET))(this);
		}

		::System::Void OnPostUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_TWISTRELAXER_ONPOSTUPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_TWISTRELAXER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_TWISTRELAXER_ONDESTROY_OFFSET))(this);
		}
	};
}

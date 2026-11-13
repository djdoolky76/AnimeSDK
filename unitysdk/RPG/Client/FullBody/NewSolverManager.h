#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_AAKPPDGDOOI_OFFSET UNITYSDK_OFFSET(0x1A7ED320)
#define RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_ACDPBPKPKGE_OFFSET UNITYSDK_OFFSET(0x1A7ED200)
#define RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_AHGLGHMHPOA_OFFSET UNITYSDK_OFFSET(0x1A7ED3A0)
#define RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1A7ECD50)
#define RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_DISABLE_OFFSET UNITYSDK_OFFSET(0x1A7ECFD0)
#define RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_EELCBKHMPBA_OFFSET UNITYSDK_OFFSET(0x1A7ED830)
#define RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_EFLLCMNJGPC_OFFSET UNITYSDK_OFFSET(0x1A7ED120)
#define RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1A7ED8A0)
#define RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_KPKDAIGMCHM_OFFSET UNITYSDK_OFFSET(0x1A7ED160)
#define RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A7ED9E0)
#define RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_NHEEOHLLJMB_OFFSET UNITYSDK_OFFSET(0x1A7ED0E0)
#define RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A7ED1A0)
#define RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_START_OFFSET UNITYSDK_OFFSET(0x1A7ED2D0)
#define RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_UPDATESOLVEREXTERNAL_OFFSET UNITYSDK_OFFSET(0x1A7EDB20)
#define RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A7ED6F0)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int NewSolverManager_TypeDefinitionIndex = 76421;

	class NewSolverManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean manualUpdate; // 0x18
		::System::Boolean fixTransforms; // 0x19
		::System::Byte _padding0[0x6];
		::UnityEngine::Animator* PKLLLOPBIJA; // 0x20
		::UnityEngine::Animation* FDFOKHDBBKG; // 0x28
		::System::Boolean GJEBGPPJPAE; // 0x30
		::System::Boolean JKAILKPLPDH; // 0x31
		::System::Boolean HDPCJAIFAJH; // 0x32
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_CTOR_OFFSET))(this);
		}

		::System::Void Disable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_DISABLE_OFFSET))(this);
		}

		::System::Void NHEEOHLLJMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_NHEEOHLLJMB_OFFSET))(this);
		}

		::System::Void EFLLCMNJGPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_EFLLCMNJGPC_OFFSET))(this);
		}

		::System::Void KPKDAIGMCHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_KPKDAIGMCHM_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_START_OFFSET))(this);
		}

		::System::Boolean AAKPPDGDOOI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_AAKPPDGDOOI_OFFSET))(this);
		}

		::System::Void ACDPBPKPKGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_ACDPBPKPKGE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void AHGLGHMHPOA(::UnityEngine::Transform* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_AHGLGHMHPOA_OFFSET))(this, a1, a2);
		}

		::System::Boolean EELCBKHMPBA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_EELCBKHMPBA_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void UpdateSolverExternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_UPDATESOLVEREXTERNAL_OFFSET))(this);
		}

	};
}

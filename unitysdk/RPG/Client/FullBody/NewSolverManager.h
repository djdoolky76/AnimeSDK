#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_AAKPPDGDOOI_OFFSET UNITYSDK_OFFSET(0xD08A680)
#define RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_ACDPBPKPKGE_OFFSET UNITYSDK_OFFSET(0xD08A560)
#define RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_AHGLGHMHPOA_OFFSET UNITYSDK_OFFSET(0xD08A700)
#define RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xD08A0B0)
#define RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_DISABLE_OFFSET UNITYSDK_OFFSET(0xD08A330)
#define RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_EELCBKHMPBA_OFFSET UNITYSDK_OFFSET(0xD08AB90)
#define RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_EFLLCMNJGPC_OFFSET UNITYSDK_OFFSET(0xD08A480)
#define RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xD08AC00)
#define RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_KPKDAIGMCHM_OFFSET UNITYSDK_OFFSET(0xD08A4C0)
#define RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD08AD40)
#define RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_NHEEOHLLJMB_OFFSET UNITYSDK_OFFSET(0xD08A440)
#define RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD08A500)
#define RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_START_OFFSET UNITYSDK_OFFSET(0xD08A630)
#define RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_UPDATESOLVEREXTERNAL_OFFSET UNITYSDK_OFFSET(0xD08AE80)
#define RPG_CLIENT_FULLBODY_NEWSOLVERMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0xD08AA50)

namespace RPG::Client::FullBody
{
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UPSTAIRFOOTIK_LBIHHAKDFOK_CTOR_OFFSET UNITYSDK_OFFSET(0xF3840)
#define RPG_CLIENT_UPSTAIRFOOTIK_LBIHHAKDFOK_FKKNPACOCEF_OFFSET UNITYSDK_OFFSET(0xF3820)
#define RPG_CLIENT_UPSTAIRFOOTIK_LBIHHAKDFOK_GOKKKABOAGJ_OFFSET UNITYSDK_OFFSET(0xF3850)
#define RPG_CLIENT_UPSTAIRFOOTIK_LBIHHAKDFOK_NDENHMOCIDP_OFFSET UNITYSDK_OFFSET(0xF3800)

namespace RPG::Client
{
	inline static constexpr unsigned int UpStairFootIK_LBIHHAKDFOK_TypeDefinitionIndex = 68500;

	struct alignas(8) UpStairFootIK_LBIHHAKDFOK
	{
		::UnityEngine::Transform* DICDJJOJKGF; // 0x10
		::UnityEngine::Vector3 FDOGMFPPPHK; // 0x18
		::UnityEngine::Vector3 JABNFIOPCCB; // 0x24
		::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPSTAIRFOOTIK_LBIHHAKDFOK_CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 NDENHMOCIDP()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPSTAIRFOOTIK_LBIHHAKDFOK_NDENHMOCIDP_OFFSET))(this);
		}

		::UnityEngine::Vector3 FKKNPACOCEF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPSTAIRFOOTIK_LBIHHAKDFOK_FKKNPACOCEF_OFFSET))(this);
		}

		::System::Void GOKKKABOAGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPSTAIRFOOTIK_LBIHHAKDFOK_GOKKKABOAGJ_OFFSET))(this);
		}

	};
}

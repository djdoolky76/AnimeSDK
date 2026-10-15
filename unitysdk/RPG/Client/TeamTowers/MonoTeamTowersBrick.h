#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"
class CAHLPKGIABH;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TEAMTOWERS_MONOTEAMTOWERSBRICK_CTOR_OFFSET UNITYSDK_OFFSET(0xE1E2850)
#define RPG_CLIENT_TEAMTOWERS_MONOTEAMTOWERSBRICK_GETSCREENRECT_OFFSET UNITYSDK_OFFSET(0xE1E2330)
#define RPG_CLIENT_TEAMTOWERS_MONOTEAMTOWERSBRICK_INIT_OFFSET UNITYSDK_OFFSET(0xE1E22C0)
#define RPG_CLIENT_TEAMTOWERS_MONOTEAMTOWERSBRICK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE1E2800)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int MonoTeamTowersBrick_TypeDefinitionIndex = 79086;

	class MonoTeamTowersBrick : public ::UnityEngine::MonoBehaviour
	{
	public:
		::CAHLPKGIABH* PANDMEPOLJP; // 0x18
		::UnityEngine::Transform* GJLADEKGOMP; // 0x20
		::UnityEngine::Camera* IEMGKEFBPCG; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_MONOTEAMTOWERSBRICK_CTOR_OFFSET))(this);
		}

		::System::Void Init(::CAHLPKGIABH* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Void(*)(::PVOID, ::CAHLPKGIABH*, ::UnityEngine::Transform*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_MONOTEAMTOWERSBRICK_INIT_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Rect GetScreenRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_MONOTEAMTOWERSBRICK_GETSCREENRECT_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_MONOTEAMTOWERSBRICK_ONDISABLE_OFFSET))(this);
		}

	};
}

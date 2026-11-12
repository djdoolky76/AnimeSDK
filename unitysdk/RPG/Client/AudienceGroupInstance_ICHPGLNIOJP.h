#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AudienceGroupInstance_FJBBJCJGFNF.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class AudienceLayoutConfig; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_ICHPGLNIOJP_CTOR_OFFSET UNITYSDK_OFFSET(0xD00D2D0)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_ICHPGLNIOJP_EEOOMIBEMNH_OFFSET UNITYSDK_OFFSET(0xD00D2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int AudienceGroupInstance_ICHPGLNIOJP_TypeDefinitionIndex = 71097;

	class AudienceGroupInstance_ICHPGLNIOJP : public ::RPG::Client::AudienceGroupInstance_FJBBJCJGFNF
	{
	public:
		::RPG::Client::AudienceLayoutConfig* EABKOHGCHFP; // 0x10
		::UnityEngine::Vector3 BHCMCMADHBF; // 0x18
		::UnityEngine::Vector2 IBKFEHNBIFF; // 0x24
		::System::Void _ctor(::RPG::Client::AudienceLayoutConfig* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudienceLayoutConfig*, ::UnityEngine::Vector3, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_ICHPGLNIOJP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EEOOMIBEMNH(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_ICHPGLNIOJP_EEOOMIBEMNH_OFFSET))(this, a1);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class MeshCollider; }
namespace UnityEngine { class PolygonCollider2D; }

#define RPG_CLIENT_BASECUSTOMCOLLIDER_CTOR_OFFSET UNITYSDK_OFFSET(0xC7E48A0)
#define RPG_CLIENT_BASECUSTOMCOLLIDER_HDJLPAMGMEJ_OFFSET UNITYSDK_OFFSET(0xC7E4780)
#define RPG_CLIENT_BASECUSTOMCOLLIDER_IMHKPPFDLOG_OFFSET UNITYSDK_OFFSET(0xC7E4660)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseCustomCollider_TypeDefinitionIndex = 68900;

	class BaseCustomCollider : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::MeshCollider* BACKGGIMDIO; // 0x18
		::UnityEngine::PolygonCollider2D* AKDDGKMEKGO; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECUSTOMCOLLIDER_CTOR_OFFSET))(this);
		}

		::UnityEngine::MeshCollider* IMHKPPFDLOG()
		{
			return ((::UnityEngine::MeshCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECUSTOMCOLLIDER_IMHKPPFDLOG_OFFSET))(this);
		}

		::UnityEngine::PolygonCollider2D* HDJLPAMGMEJ()
		{
			return ((::UnityEngine::PolygonCollider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECUSTOMCOLLIDER_HDJLPAMGMEJ_OFFSET))(this);
		}

	};
}

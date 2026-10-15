#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DDBOKLCFEEA;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MINIMAPLIMITAREA_CTOR_OFFSET UNITYSDK_OFFSET(0xD6B5BE0)
#define RPG_CLIENT_MINIMAPLIMITAREA_HGKLDBNGKHD_OFFSET UNITYSDK_OFFSET(0xD6B5AE0)
#define RPG_CLIENT_MINIMAPLIMITAREA_IGHKHOCMINE_OFFSET UNITYSDK_OFFSET(0xD6B5A30)
#define RPG_CLIENT_MINIMAPLIMITAREA_JKGNFGFLJBN_OFFSET UNITYSDK_OFFSET(0xD6B5940)
#define RPG_CLIENT_MINIMAPLIMITAREA_REFRESH_OFFSET UNITYSDK_OFFSET(0xD6B5630)

namespace RPG::Client
{
	inline static constexpr unsigned int MiniMapLimitArea_TypeDefinitionIndex = 68957;

	class MiniMapLimitArea : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* LGAFBMEJBPI; // 0x18
		::UnityEngine::GameObject* _LimitAreaNormal; // 0x20
		::UnityEngine::GameObject* _LimitAreaEdge; // 0x28
		::System::Single _LimitAreaPercentNormal; // 0x30
		::System::Single _LimitAreaPercentEdge; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPLIMITAREA_CTOR_OFFSET))(this);
		}

		::System::Void Refresh(::DDBOKLCFEEA* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DDBOKLCFEEA*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPLIMITAREA_REFRESH_OFFSET))(this, a1, a2);
		}

		::System::Void JKGNFGFLJBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPLIMITAREA_JKGNFGFLJBN_OFFSET))(this);
		}

		::System::Boolean IGHKHOCMINE(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPLIMITAREA_IGHKHOCMINE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HGKLDBNGKHD(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPLIMITAREA_HGKLDBNGKHD_OFFSET))(this, a1, a2, a3);
		}

	};
}

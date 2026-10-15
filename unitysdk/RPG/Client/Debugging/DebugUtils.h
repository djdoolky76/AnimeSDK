#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Nullable; }
namespace System { class String; }
namespace UnityEngine { class Camera; }

#define RPG_CLIENT_DEBUGGING_DEBUGUTILS_CTOR_OFFSET UNITYSDK_OFFSET(0xCBECAF0)
#define RPG_CLIENT_DEBUGGING_DEBUGUTILS_DRAWSTRING_OFFSET UNITYSDK_OFFSET(0xCBEC980)
#define RPG_CLIENT_DEBUGGING_DEBUGUTILS_PFLCOLIIFDN_1_OFFSET UNITYSDK_OFFSET(0xCBECA50)
#define RPG_CLIENT_DEBUGGING_DEBUGUTILS_PFLCOLIIFDN_OFFSET UNITYSDK_OFFSET(0xCBEC9A0)

namespace RPG::Client::Debugging
{
	inline static constexpr unsigned int DebugUtils_TypeDefinitionIndex = 82132;

	class DebugUtils : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_DEBUGUTILS_CTOR_OFFSET))(this);
		}

		static ::System::Void DrawString(::System::String* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Nullable* a5)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Nullable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_DEBUGUTILS_DRAWSTRING_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Vector3 PFLCOLIIFDN(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_DEBUGUTILS_PFLCOLIIFDN_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Vector3 PFLCOLIIFDN_1(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_DEBUGUTILS_PFLCOLIIFDN_1_OFFSET))(a1, a2, a3);
		}

	};
}

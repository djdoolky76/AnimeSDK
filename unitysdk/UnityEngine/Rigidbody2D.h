#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Component.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_RIGIDBODY2D_A6B0BCD930642D38_OFFSET UNITYSDK_OFFSET(0x41B1740)
#define UNITYENGINE_RIGIDBODY2D_BD5A4FB1F0A14B2F_OFFSET UNITYSDK_OFFSET(0x41B1790)
#define UNITYENGINE_RIGIDBODY2D_F2EDED45DCFF2D14_OFFSET UNITYSDK_OFFSET(0x41B1700)
#define UNITYENGINE_RIGIDBODY2D__CTOR_OFFSET UNITYSDK_OFFSET(0x410F8D0)

namespace UnityEngine
{
	inline static constexpr unsigned int Rigidbody2D_TypeDefinitionIndex = 21375;

	class Rigidbody2D : public ::UnityEngine::Component
	{
	public:
		::System::Single F2EDED45DCFF2D14()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_F2EDED45DCFF2D14_OFFSET))(this);
		}

		::UnityEngine::Vector2 BD5A4FB1F0A14B2F()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_BD5A4FB1F0A14B2F_OFFSET))(this);
		}

		::System::Void A6B0BCD930642D38(::UnityEngine::Vector2& FEC8DC0392823C8D)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_A6B0BCD930642D38_OFFSET))(this, FEC8DC0392823C8D);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D__CTOR_OFFSET))(this);
		}
	};
}

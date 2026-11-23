#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/B251CA72622763FF.h"
#include "unitysdk/UnityEngine/Collider.h"

namespace UnityEngine { class Mesh; }

#define UNITYENGINE_MESHCOLLIDER_B6E0911CC451D3A8_OFFSET UNITYSDK_OFFSET(0x41B3260)
#define UNITYENGINE_MESHCOLLIDER_E8A0470AF75A03D4_OFFSET UNITYSDK_OFFSET(0x41B3330)
#define UNITYENGINE_MESHCOLLIDER_EB75CB7ECC6966B8_OFFSET UNITYSDK_OFFSET(0x41B32A0)
#define UNITYENGINE_MESHCOLLIDER_F441519F973E20AE_OFFSET UNITYSDK_OFFSET(0x41B32E0)
#define UNITYENGINE_MESHCOLLIDER_F9C4B8E962C88B08_OFFSET UNITYSDK_OFFSET(0x41B3370)

namespace UnityEngine
{
	inline static constexpr unsigned int MeshCollider_TypeDefinitionIndex = 20818;

	class MeshCollider : public ::UnityEngine::Collider
	{
	public:
		::UnityEngine::Mesh* EB75CB7ECC6966B8()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHCOLLIDER_EB75CB7ECC6966B8_OFFSET))(this);
		}

		::System::Boolean B6E0911CC451D3A8()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHCOLLIDER_B6E0911CC451D3A8_OFFSET))(this);
		}

		::System::Void F441519F973E20AE(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHCOLLIDER_F441519F973E20AE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void E8A0470AF75A03D4(::UnityEngine::B251CA72622763FF E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::B251CA72622763FF))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHCOLLIDER_E8A0470AF75A03D4_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void F9C4B8E962C88B08(::UnityEngine::Mesh* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHCOLLIDER_F9C4B8E962C88B08_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}

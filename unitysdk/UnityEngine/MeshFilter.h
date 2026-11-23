#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Component.h"

namespace UnityEngine { class Mesh; }

#define UNITYENGINE_MESHFILTER_B936FCA2A1786B32_OFFSET UNITYSDK_OFFSET(0x4132550)
#define UNITYENGINE_MESHFILTER_BC00B05E3F3F5937_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define UNITYENGINE_MESHFILTER_E13585EC0C690C91_OFFSET UNITYSDK_OFFSET(0x41325A0)
#define UNITYENGINE_MESHFILTER_EB75CB7ECC6966B8_OFFSET UNITYSDK_OFFSET(0x4132510)
#define UNITYENGINE_MESHFILTER_F9C4B8E962C88B08_OFFSET UNITYSDK_OFFSET(0x41325F0)
#define UNITYENGINE_MESHFILTER_FCACA19C663A904B_OFFSET UNITYSDK_OFFSET(0x4132640)

namespace UnityEngine
{
	inline static constexpr unsigned int MeshFilter_TypeDefinitionIndex = 17131;

	class MeshFilter : public ::UnityEngine::Component
	{
	public:
		::System::Void B936FCA2A1786B32(::UnityEngine::Mesh* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHFILTER_B936FCA2A1786B32_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void E13585EC0C690C91(::UnityEngine::Mesh* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHFILTER_E13585EC0C690C91_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::Mesh* EB75CB7ECC6966B8()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHFILTER_EB75CB7ECC6966B8_OFFSET))(this);
		}

		::System::Void FCACA19C663A904B(::UnityEngine::Mesh* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHFILTER_FCACA19C663A904B_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void BC00B05E3F3F5937()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHFILTER_BC00B05E3F3F5937_OFFSET))(this);
		}

		::System::Void F9C4B8E962C88B08(::UnityEngine::Mesh* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHFILTER_F9C4B8E962C88B08_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Renderer.h"

#define UNITYENGINE_MESHRENDERER_A82A7095B378BD34_OFFSET UNITYSDK_OFFSET(0x4150AE0)
#define UNITYENGINE_MESHRENDERER_F6F09034B65F023A_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define UNITYENGINE_MESHRENDERER_FF2217E3C95392FF_OFFSET UNITYSDK_OFFSET(0x4150B40)
#define UNITYENGINE_MESHRENDERER_FF69A1CD88C55F63_OFFSET UNITYSDK_OFFSET(0x4150B80)

namespace UnityEngine
{
	inline static constexpr unsigned int MeshRenderer_TypeDefinitionIndex = 17300;

	class MeshRenderer : public ::UnityEngine::Renderer
	{
	public:
		static ::System::Void FF2217E3C95392FF(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_FF2217E3C95392FF_OFFSET))(E937D4885DAA1AE8);
		}

		::System::Void A82A7095B378BD34(::System::Single E540595EC8E2DE16, ::System::Boolean BCB7E77A79EB6022)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_A82A7095B378BD34_OFFSET))(this, E540595EC8E2DE16, BCB7E77A79EB6022);
		}

		::System::Void FF69A1CD88C55F63(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_FF69A1CD88C55F63_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void F6F09034B65F023A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_F6F09034B65F023A_OFFSET))(this);
		}
	};
}

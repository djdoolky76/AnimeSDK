#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

#define UNITYENGINE_LOWERRESBLITTEXTURE_A91808A5776BE466_OFFSET UNITYSDK_OFFSET(0x1EB8060)

namespace UnityEngine
{
	inline static constexpr unsigned int LowerResBlitTexture_TypeDefinitionIndex = 17261;

	class LowerResBlitTexture : public ::UnityEngine::Object
	{
	public:
		::System::Void A91808A5776BE466()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOWERRESBLITTEXTURE_A91808A5776BE466_OFFSET))(this);
		}
	};
}

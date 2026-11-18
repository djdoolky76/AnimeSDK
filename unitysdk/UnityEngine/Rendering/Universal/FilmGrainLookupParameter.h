#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FilmGrainLookup.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_FILMGRAINLOOKUPPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x108BF200)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int FilmGrainLookupParameter_TypeDefinitionIndex = 26895;

	class FilmGrainLookupParameter
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::FilmGrainLookup value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::FilmGrainLookup, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FILMGRAINLOOKUPPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}

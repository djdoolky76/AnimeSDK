#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_PROBUILDER_PROGRIDSNOSNAPATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x2050D7E0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ProGridsNoSnapAttribute_TypeDefinitionIndex = 45486;

	class ProGridsNoSnapAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROGRIDSNOSNAPATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}

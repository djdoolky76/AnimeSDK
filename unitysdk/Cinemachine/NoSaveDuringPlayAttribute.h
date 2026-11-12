#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define CINEMACHINE_NOSAVEDURINGPLAYATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x174F08B0)

namespace Cinemachine
{
	inline static constexpr unsigned int NoSaveDuringPlayAttribute_TypeDefinitionIndex = 40757;

	class NoSaveDuringPlayAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NOSAVEDURINGPLAYATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}

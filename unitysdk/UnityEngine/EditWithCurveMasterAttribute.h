#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define UNITYENGINE_EDITWITHCURVEMASTERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x20073AD0)

namespace UnityEngine
{
	inline static constexpr unsigned int EditWithCurveMasterAttribute_TypeDefinitionIndex = 95439;

	class EditWithCurveMasterAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EDITWITHCURVEMASTERATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}

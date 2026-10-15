#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_PROBUILDER_PROGRIDSCONDITIONALSNAPATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F25C680)

namespace UnityEngine::ProBuilder
{
	class ProGridsConditionalSnapAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROGRIDSCONDITIONALSNAPATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}

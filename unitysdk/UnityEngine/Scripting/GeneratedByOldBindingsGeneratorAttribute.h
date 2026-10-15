#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_SCRIPTING_GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F49D330)

namespace UnityEngine::Scripting
{
	class GeneratedByOldBindingsGeneratorAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}

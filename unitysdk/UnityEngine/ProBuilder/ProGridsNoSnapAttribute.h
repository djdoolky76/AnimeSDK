#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_PROBUILDER_PROGRIDSNOSNAPATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F25C690)

namespace UnityEngine::ProBuilder
{
	class ProGridsNoSnapAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROGRIDSNOSNAPATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}

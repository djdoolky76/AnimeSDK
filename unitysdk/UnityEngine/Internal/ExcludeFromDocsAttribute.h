#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_INTERNAL_EXCLUDEFROMDOCSATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3F3160)

namespace UnityEngine::Internal
{
	class ExcludeFromDocsAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_EXCLUDEFROMDOCSATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}

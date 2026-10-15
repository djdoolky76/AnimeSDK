#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"
namespace System { class String; }

#define UNITYENGINE_HEADERATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3F2F40)

namespace UnityEngine
{
	class HeaderAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::String* header; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_HEADERATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Type; }

#define UNITYENGINE_TIMELINE_SUPPORTSCHILDTRACKSATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x20643020)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int SupportsChildTracksAttribute_TypeDefinitionIndex = 39790;

	class SupportsChildTracksAttribute : public ::System::Attribute
	{
	public:
		::System::Type* childType; // 0x10
		::System::Int32 levels; // 0x18
		::System::Void _ctor(::System::Type* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SUPPORTSCHILDTRACKSATTRIBUTE_CTOR_OFFSET))(this, a1, a2);
		}

	};
}

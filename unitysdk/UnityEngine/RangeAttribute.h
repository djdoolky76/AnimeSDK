#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define UNITYENGINE_RANGEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F412A50)

namespace UnityEngine
{
	class RangeAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Single max; // 0x10
		::System::Single min; // 0x14
		::System::Void _ctor(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RANGEATTRIBUTE_CTOR_OFFSET))(this, a1, a2);
		}

	};
}

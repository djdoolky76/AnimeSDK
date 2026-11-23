#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_BA47C5F0BC32A332_FEDE998D765BF3A8_OFFSET UNITYSDK_OFFSET(0x410ACF0)
#define UNITYENGINE_BA47C5F0BC32A332__CTOR_OFFSET UNITYSDK_OFFSET(0x240A3B0)

namespace UnityEngine
{
	inline static constexpr unsigned int BA47C5F0BC32A332_TypeDefinitionIndex = 16959;

	class BA47C5F0BC32A332 : public ::System::Attribute
	{
	public:
		::System::Int32 F5ABFFB6E061842F; // 0x10

		::System::Void _ctor(::System::Int32 EEE67C44C7E1DD7F)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_BA47C5F0BC32A332__CTOR_OFFSET))(this, EEE67C44C7E1DD7F);
		}

		::System::Int32 FEDE998D765BF3A8()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BA47C5F0BC32A332_FEDE998D765BF3A8_OFFSET))(this);
		}
	};
}

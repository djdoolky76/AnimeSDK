#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define VISIBILITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xE9F77F0)

inline static constexpr unsigned int VisibilityConfig_TypeDefinitionIndex = 47307;

	class VisibilityConfig : public ::System::Object
	{
	public:
		::System::Boolean enableHorizonCheck; // 0x10
		::System::Boolean enableOcclusionCheck; // 0x11
		::System::Byte _padding0[0x2];
		::System::Single horizonOffset; // 0x14
		::System::Single minAngularSize; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VISIBILITYCONFIG_CTOR_OFFSET))(this);
		}

	};

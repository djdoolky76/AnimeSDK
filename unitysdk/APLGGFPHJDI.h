#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define APLGGFPHJDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8ACE80)

inline static constexpr unsigned int APLGGFPHJDI_TypeDefinitionIndex = 42280;

	class APLGGFPHJDI : public ::System::Object
	{
	public:
		::System::UInt32 KLOEJIMMPJM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLGGFPHJDI_CTOR_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FEMGODPIOBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA3FDF0)

inline static constexpr unsigned int FEMGODPIOBN_TypeDefinitionIndex = 42119;

	class FEMGODPIOBN : public ::System::Object
	{
	public:
		::System::UInt32 AAGKEBFHLMC; // 0x10
		::System::UInt32 FGEADJLMEOI; // 0x14
		::System::UInt32 LPNBEANGIGE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMGODPIOBN_CTOR_OFFSET))(this);
		}

	};

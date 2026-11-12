#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HPEEICIIOCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCBC250)

inline static constexpr unsigned int HPEEICIIOCE_TypeDefinitionIndex = 44756;

	class HPEEICIIOCE : public ::System::Object
	{
	public:
		::System::UInt32 KCJKOICLIOM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPEEICIIOCE_CTOR_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PHHBEONLPNB_CTOR_OFFSET UNITYSDK_OFFSET(0xC244000)

inline static constexpr unsigned int PHHBEONLPNB_TypeDefinitionIndex = 79651;

	class PHHBEONLPNB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHBEONLPNB_CTOR_OFFSET))(this);
		}

	};

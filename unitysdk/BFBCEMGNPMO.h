#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BFBCEMGNPMO_CTOR_OFFSET UNITYSDK_OFFSET(0xB7E7810)

inline static constexpr unsigned int BFBCEMGNPMO_TypeDefinitionIndex = 74956;

	class BFBCEMGNPMO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBCEMGNPMO_CTOR_OFFSET))(this);
		}

	};

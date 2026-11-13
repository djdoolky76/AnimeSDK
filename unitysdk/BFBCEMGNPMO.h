#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BFBCEMGNPMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1A952170)

inline static constexpr unsigned int BFBCEMGNPMO_TypeDefinitionIndex = 74955;

	class BFBCEMGNPMO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBCEMGNPMO_CTOR_OFFSET))(this);
		}

	};

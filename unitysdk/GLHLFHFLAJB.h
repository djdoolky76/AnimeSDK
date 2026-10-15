#pragma once
#include "unitysdk/unitysdk.h"

#define GLHLFHFLAJB_CTOR_OFFSET UNITYSDK_OFFSET(0x15AAB000)

inline static constexpr unsigned int GLHLFHFLAJB_TypeDefinitionIndex = 75826;

	class GLHLFHFLAJB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLHLFHFLAJB_CTOR_OFFSET))(this);
		}

	};

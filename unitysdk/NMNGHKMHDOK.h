#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NMNGHKMHDOK_CTOR_OFFSET UNITYSDK_OFFSET(0xBC895B0)

inline static constexpr unsigned int NMNGHKMHDOK_TypeDefinitionIndex = 56680;

	class NMNGHKMHDOK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMNGHKMHDOK_CTOR_OFFSET))(this);
		}

	};

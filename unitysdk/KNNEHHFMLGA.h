#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KNNEHHFMLGA_CTOR_OFFSET UNITYSDK_OFFSET(0x18FAFC80)

inline static constexpr unsigned int KNNEHHFMLGA_TypeDefinitionIndex = 77018;

	class KNNEHHFMLGA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNNEHHFMLGA_CTOR_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KNNEHHFMLGA_CTOR_OFFSET UNITYSDK_OFFSET(0xBDDC1B0)

inline static constexpr unsigned int KNNEHHFMLGA_TypeDefinitionIndex = 77019;

	class KNNEHHFMLGA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNNEHHFMLGA_CTOR_OFFSET))(this);
		}

	};

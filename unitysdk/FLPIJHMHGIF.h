#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FLPIJHMHGIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA712B0)

inline static constexpr unsigned int FLPIJHMHGIF_TypeDefinitionIndex = 42227;

	class FLPIJHMHGIF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLPIJHMHGIF_CTOR_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKMKCCJIPIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8663A0)

inline static constexpr unsigned int AKMKCCJIPIF_TypeDefinitionIndex = 43253;

	class AKMKCCJIPIF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMKCCJIPIF_CTOR_OFFSET))(this);
		}

	};

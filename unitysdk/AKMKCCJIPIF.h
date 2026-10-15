#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKMKCCJIPIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C890190)

inline static constexpr unsigned int AKMKCCJIPIF_TypeDefinitionIndex = 42278;

	class AKMKCCJIPIF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMKCCJIPIF_CTOR_OFFSET))(this);
		}

	};

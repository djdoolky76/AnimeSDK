#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIGCDGKOBMK.h"

#define NECJDDBANEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F4950)

inline static constexpr unsigned int NECJDDBANEJ_TypeDefinitionIndex = 42762;

	class NECJDDBANEJ : public ::DIGCDGKOBMK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NECJDDBANEJ_CTOR_OFFSET))(this);
		}

	};

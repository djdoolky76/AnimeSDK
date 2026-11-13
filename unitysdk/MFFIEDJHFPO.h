#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJIGMBHENE.h"

#define MFFIEDJHFPO_CTOR_OFFSET UNITYSDK_OFFSET(0x17C7E9A0)

inline static constexpr unsigned int MFFIEDJHFPO_TypeDefinitionIndex = 62581;

	class MFFIEDJHFPO : public ::HDJIGMBHENE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFIEDJHFPO_CTOR_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EABCFKBADGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB343E0)

inline static constexpr unsigned int EABCFKBADGP_TypeDefinitionIndex = 44757;

	class EABCFKBADGP : public ::System::Object
	{
	public:
		::System::Int32 JFLMDBHNLOK; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EABCFKBADGP_CTOR_OFFSET))(this);
		}

	};

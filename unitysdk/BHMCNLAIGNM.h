#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONEGHOPELAC.h"

#define BHMCNLAIGNM_CTOR_OFFSET UNITYSDK_OFFSET(0x151FD500)

inline static constexpr unsigned int BHMCNLAIGNM_TypeDefinitionIndex = 49842;

	class BHMCNLAIGNM : public ::ONEGHOPELAC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMCNLAIGNM_CTOR_OFFSET))(this);
		}

	};

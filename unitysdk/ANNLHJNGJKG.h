#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BOFJHGFAJBN.h"

#define ANNLHJNGJKG_CTOR_OFFSET UNITYSDK_OFFSET(0x15894FB0)
#define ANNLHJNGJKG_LKINLAMMGID_OFFSET UNITYSDK_OFFSET(0x15894FC0)

inline static constexpr unsigned int ANNLHJNGJKG_TypeDefinitionIndex = 49650;

	class ANNLHJNGJKG : public ::BOFJHGFAJBN
	{
	public:
		::System::Boolean KDDCFJMGFIA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNLHJNGJKG_CTOR_OFFSET))(this);
		}

		::System::Boolean LKINLAMMGID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNLHJNGJKG_LKINLAMMGID_OFFSET))(this);
		}

	};

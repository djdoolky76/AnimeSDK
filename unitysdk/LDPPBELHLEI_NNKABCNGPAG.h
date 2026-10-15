#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
namespace System { class Object; }

#define LDPPBELHLEI_NNKABCNGPAG_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0xB649270)
#define LDPPBELHLEI_NNKABCNGPAG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18640)
#define LDPPBELHLEI_NNKABCNGPAG_EQUALS_OFFSET UNITYSDK_OFFSET(0x185E0)
#define LDPPBELHLEI_NNKABCNGPAG_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0xB648730)
#define LDPPBELHLEI_NNKABCNGPAG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18650)

inline static constexpr unsigned int LDPPBELHLEI_NNKABCNGPAG_TypeDefinitionIndex = 59702;

	struct alignas(4) LDPPBELHLEI_NNKABCNGPAG
	{
		::RPG::GameCore::EntityType GMPGDEINODK; // 0x10
		::System::UInt32 PHFMCACHFIJ; // 0x14
		/*
		::System::Boolean Equals(::LDPPBELHLEI_NNKABCNGPAG a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LDPPBELHLEI_NNKABCNGPAG))((::PBYTE)hIl2Cpp + LDPPBELHLEI_NNKABCNGPAG_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDPPBELHLEI_NNKABCNGPAG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPPBELHLEI_NNKABCNGPAG_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::LDPPBELHLEI_NNKABCNGPAG a1, ::LDPPBELHLEI_NNKABCNGPAG a2)
		{
			return ((::System::Boolean(*)(::LDPPBELHLEI_NNKABCNGPAG, ::LDPPBELHLEI_NNKABCNGPAG))((::PBYTE)hIl2Cpp + LDPPBELHLEI_NNKABCNGPAG_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::LDPPBELHLEI_NNKABCNGPAG a1, ::LDPPBELHLEI_NNKABCNGPAG a2)
		{
			return ((::System::Boolean(*)(::LDPPBELHLEI_NNKABCNGPAG, ::LDPPBELHLEI_NNKABCNGPAG))((::PBYTE)hIl2Cpp + LDPPBELHLEI_NNKABCNGPAG_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

	};

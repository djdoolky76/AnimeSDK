#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class NBHCDAEKHGJ;

#define FFKDIBNNCDA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x130EDBB0)
#define FFKDIBNNCDA_GET_BLOCKPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x6C95B0)
#define FFKDIBNNCDA_GET_BLOCKVALUE_OFFSET UNITYSDK_OFFSET(0x6C8DB0)
#define FFKDIBNNCDA_SET_BLOCKPERCENTAGE_OFFSET UNITYSDK_OFFSET(0xB88D90)
#define FFKDIBNNCDA_SET_BLOCKVALUE_OFFSET UNITYSDK_OFFSET(0x6C8D40)

inline static constexpr unsigned int FFKDIBNNCDA_TypeDefinitionIndex = 74086;

	struct alignas(4) FFKDIBNNCDA
	{
		::RPG::GameCore::FixPoint _BlockValue_k__BackingField; // 0x10
		::RPG::GameCore::FixPoint _BlockPercentage_k__BackingField; // 0x18
		/*
		static ::FFKDIBNNCDA BPLPBPMEODA(::NBHCDAEKHGJ* a1)
		{
			return ((::FFKDIBNNCDA(*)(::NBHCDAEKHGJ*))((::PBYTE)hIl2Cpp + FFKDIBNNCDA_BPLPBPMEODA_OFFSET))(a1);
		}
		*/

		::RPG::GameCore::FixPoint get_BlockValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKDIBNNCDA_GET_BLOCKVALUE_OFFSET))(this);
		}

		::System::Void set_BlockValue(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + FFKDIBNNCDA_SET_BLOCKVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_BlockPercentage()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKDIBNNCDA_GET_BLOCKPERCENTAGE_OFFSET))(this);
		}

		::System::Void set_BlockPercentage(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + FFKDIBNNCDA_SET_BLOCKPERCENTAGE_OFFSET))(this, a1);
		}

	};

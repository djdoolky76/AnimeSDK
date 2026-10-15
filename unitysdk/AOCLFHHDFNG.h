#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KMGHEKCKAAP.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/TimeScaleReason.h"
namespace RPG { template <typename T> class PoolList_1; }

#define AOCLFHHDFNG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C870540)
#define AOCLFHHDFNG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C870610)

inline static constexpr unsigned int AOCLFHHDFNG_TypeDefinitionIndex = 43313;

	class AOCLFHHDFNG : public ::KMGHEKCKAAP
	{
	public:
		::RPG::PoolList_1<::RPG::Client::LittleGame::FiveDim::TimeScaleReason>* BEJCJLENKBN; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOCLFHHDFNG_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOCLFHHDFNG_CLEAR_OFFSET))(this);
		}

	};

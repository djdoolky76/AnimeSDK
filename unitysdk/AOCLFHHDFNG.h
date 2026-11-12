#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KMGHEKCKAAP.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/TimeScaleReason.h"
namespace RPG { template <typename T> class PoolList_1; }

#define AOCLFHHDFNG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DA1FCE0)
#define AOCLFHHDFNG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1FDA0)

inline static constexpr unsigned int AOCLFHHDFNG_TypeDefinitionIndex = 44294;

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

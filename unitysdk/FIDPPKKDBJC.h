#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MatchThreePropType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
namespace RPG { template <typename T> class PoolList_1; }

#define FIDPPKKDBJC_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA6E5E0)
#define FIDPPKKDBJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA6E640)

inline static constexpr unsigned int FIDPPKKDBJC_TypeDefinitionIndex = 42281;

	class FIDPPKKDBJC : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::System::ValueTuple>* NJJHNLLAMCC; // 0x10
		::RPG::GameCore::MatchThreePropType KAGGJMNLPBE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDPPKKDBJC_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDPPKKDBJC_CLEAR_OFFSET))(this);
		}

	};

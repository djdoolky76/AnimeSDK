#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComicDessertComplexityRestriction; }

#define RPG_GAMECORE_COMICDESSERTCOMPLEXITYRESTRICTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1F513870)
#define RPG_GAMECORE_COMICDESSERTCOMPLEXITYRESTRICTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F513750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComicDessertComplexityRestriction_TypeDefinitionIndex = 21875;

	class ComicDessertComplexityRestriction : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Complexity; // 0x10
		::System::UInt32 MaxCount; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMICDESSERTCOMPLEXITYRESTRICTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComicDessertComplexityRestriction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComicDessertComplexityRestriction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMICDESSERTCOMPLEXITYRESTRICTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

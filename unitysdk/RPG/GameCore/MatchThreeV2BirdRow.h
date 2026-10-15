#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeV2BirdRow; }

#define RPG_GAMECORE_MATCHTHREEV2BIRDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D85BDB0)
#define RPG_GAMECORE_MATCHTHREEV2BIRDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D85BC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeV2BirdRow_TypeDefinitionIndex = 11946;

	class MatchThreeV2BirdRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnlockLevelList; // 0x10
		::System::UInt32 BirdID; // 0x18
		::System::UInt32 Order; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2BIRDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MatchThreeV2BirdRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MatchThreeV2BirdRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2BIRDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

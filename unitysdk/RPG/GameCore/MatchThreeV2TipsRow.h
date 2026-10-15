#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class BLFLMBHILEO;
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeV2TipsRow; }

#define RPG_GAMECORE_MATCHTHREEV2TIPSROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8301B0)
#define RPG_GAMECORE_MATCHTHREEV2TIPSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D82FFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeV2TipsRow_TypeDefinitionIndex = 11938;

	class MatchThreeV2TipsRow : public ::System::Object
	{
	public:
		::Il2CppArray<::BLFLMBHILEO*>* Condition; // 0x10
		::RPG::Client::TextID TipsDesc; // 0x18
		::System::UInt32 Weight; // 0x28
		::System::UInt32 TipsID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2TIPSROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MatchThreeV2TipsRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MatchThreeV2TipsRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2TIPSROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

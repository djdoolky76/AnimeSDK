#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarblePVEMatchTalkConfigRow; }

#define RPG_GAMECORE_MARBLEPVEMATCHTALKCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8153F0)
#define RPG_GAMECORE_MARBLEPVEMATCHTALKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D815270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarblePVEMatchTalkConfigRow_TypeDefinitionIndex = 11859;

	class MarblePVEMatchTalkConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TalkIDList; // 0x10
		::System::UInt32 SealID; // 0x18
		::System::UInt32 MatchID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPVEMATCHTALKCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarblePVEMatchTalkConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarblePVEMatchTalkConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPVEMATCHTALKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

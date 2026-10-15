#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyMtCategoryScoreRow; }

#define RPG_GAMECORE_TRAINPARTYMTCATEGORYSCOREROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC33000)
#define RPG_GAMECORE_TRAINPARTYMTCATEGORYSCOREROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC32E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyMtCategoryScoreRow_TypeDefinitionIndex = 15332;

	class TrainPartyMtCategoryScoreRow : public ::System::Object
	{
	public:
		::System::UInt32 Level; // 0x10
		::System::UInt32 Ratio; // 0x14
		::System::UInt32 CategoryID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMTCATEGORYSCOREROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyMtCategoryScoreRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyMtCategoryScoreRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMTCATEGORYSCOREROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

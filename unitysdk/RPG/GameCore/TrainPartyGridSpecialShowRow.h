#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyGridSpecialShowRow; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYGRIDSPECIALSHOWROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC31990)
#define RPG_GAMECORE_TRAINPARTYGRIDSPECIALSHOWROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC31860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyGridSpecialShowRow_TypeDefinitionIndex = 15311;

	class TrainPartyGridSpecialShowRow : public ::System::Object
	{
	public:
		::System::String* GridSpecialShowImagePath; // 0x10
		::System::UInt32 GridID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYGRIDSPECIALSHOWROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyGridSpecialShowRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyGridSpecialShowRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYGRIDSPECIALSHOWROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

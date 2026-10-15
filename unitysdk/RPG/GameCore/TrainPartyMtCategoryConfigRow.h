#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyMtCategoryConfigRow; }

#define RPG_GAMECORE_TRAINPARTYMTCATEGORYCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC055D0)
#define RPG_GAMECORE_TRAINPARTYMTCATEGORYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC05330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyMtCategoryConfigRow_TypeDefinitionIndex = 15331;

	class TrainPartyMtCategoryConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID CategoryDesc; // 0x10
		::RPG::Client::TextID CategoryName; // 0x20
		::System::UInt32 CategoryID; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID CategoryTableName; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMTCATEGORYCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyMtCategoryConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyMtCategoryConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMTCATEGORYCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartySkillConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYSKILLCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E311330)
#define RPG_GAMECORE_TRAINPARTYSKILLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E311030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartySkillConfigRow_TypeDefinitionIndex = 15477;

	class TrainPartySkillConfigRow : public ::System::Object
	{
	public:
		::System::String* SkillFigurePath; // 0x10
		::System::String* SkillIconPath; // 0x18
		::RPG::Client::TextID SkillName; // 0x20
		::RPG::Client::TextID SkillDescription; // 0x30
		::System::UInt32 SKillID; // 0x40
		::System::Boolean IsRare; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSKILLCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartySkillConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartySkillConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSKILLCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

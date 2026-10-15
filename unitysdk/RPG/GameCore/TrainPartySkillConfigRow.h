#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartySkillConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYSKILLCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC07A50)
#define RPG_GAMECORE_TRAINPARTYSKILLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC07750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartySkillConfigRow_TypeDefinitionIndex = 15321;

	class TrainPartySkillConfigRow : public ::System::Object
	{
	public:
		::System::String* SkillIconPath; // 0x10
		::System::String* SkillFigurePath; // 0x18
		::System::Boolean IsRare; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 SKillID; // 0x24
		::RPG::Client::TextID SkillName; // 0x28
		::RPG::Client::TextID SkillDescription; // 0x38
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingPartnerRow; }
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGPARTNERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB4C090)
#define RPG_GAMECORE_SWORDTRAININGPARTNERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB4B770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingPartnerRow_TypeDefinitionIndex = 12439;

	class SwordTrainingPartnerRow : public ::System::Object
	{
	public:
		::System::String* PartnerImage; // 0x10
		::Il2CppArray<::System::UInt32>* PartnerAbilityIDList; // 0x18
		::System::UInt32 UnlockID; // 0x20
		::System::UInt32 PartnerID; // 0x24
		::System::UInt32 AvatarID; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID PartnerName; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingPartnerRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingPartnerRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class AJCJJOCGIEL;
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class RogueMagicTalentRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMAGICTALENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x20777A70)
#define RPG_GAMECORE_ROGUEMAGICTALENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x207777A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicTalentRow_TypeDefinitionIndex = 15024;

	class RogueMagicTalentRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* Cost; // 0x10
		::System::String* TalentIcon; // 0x18
		::Il2CppArray<::AJCJJOCGIEL*>* DescParams; // 0x20
		::System::UInt32 TalentID; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID EffectDesc; // 0x30
		::System::UInt32 NameDisplayID; // 0x40
		::System::UInt32 Level; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICTALENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicTalentRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicTalentRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICTALENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

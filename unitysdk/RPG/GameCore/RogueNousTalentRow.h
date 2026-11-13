#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class RogueNousTalentRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUENOUSTALENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x207B33F0)
#define RPG_GAMECORE_ROGUENOUSTALENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x207B2B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousTalentRow_TypeDefinitionIndex = 15083;

	class RogueNousTalentRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* NextTalentIDList; // 0x10
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* Cost; // 0x18
		::System::String* Icon; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectDescParamList; // 0x28
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x30
		::RPG::Client::TextID EffectTitle; // 0x38
		::RPG::Client::TextID EffectTag; // 0x48
		::RPG::Client::TextID EffectDesc; // 0x58
		::System::UInt32 TalentID; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSTALENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueNousTalentRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueNousTalentRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSTALENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

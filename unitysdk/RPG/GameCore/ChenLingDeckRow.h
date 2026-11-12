#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingDeckRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGDECKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E79BC80)
#define RPG_GAMECORE_CHENLINGDECKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E79B740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingDeckRow_TypeDefinitionIndex = 11065;

	class ChenLingDeckRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RelatedCardList; // 0x10
		::System::String* IconPath; // 0x18
		::Il2CppArray<::System::UInt32>* CardList; // 0x20
		::Il2CppArray<::System::UInt32>* InitialCardList; // 0x28
		::Il2CppArray<::System::UInt32>* ActivityPanelSoldieList; // 0x30
		::Il2CppArray<::System::UInt32>* InitialEffectList; // 0x38
		::System::String* DeckIconPath; // 0x40
		::Il2CppArray<::System::UInt32>* ShowCardList; // 0x48
		::RPG::Client::TextID Name; // 0x50
		::System::UInt32 GuideGroupID; // 0x60
		::System::UInt32 ID; // 0x64
		::RPG::Client::TextID Desc; // 0x68
		::RPG::Client::TextID BGDesc; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGDECKROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingDeckRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingDeckRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGDECKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

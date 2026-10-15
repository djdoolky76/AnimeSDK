#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class RogueTalentRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUETALENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2F470)
#define RPG_GAMECORE_ROGUETALENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA2EFD0)

namespace RPG::GameCore
{
	class RogueTalentRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* Cost; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectDescParamList; // 0x18
		::System::String* Icon; // 0x20
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x28
		::Il2CppArray<::System::UInt32>* NextTalentIDList; // 0x30
		::RPG::Client::TextID EffectTitle; // 0x38
		::System::Boolean IsImportant; // 0x48
		::System::Byte _padding0[0x3];
		::System::UInt32 TalentID; // 0x4C
		::RPG::Client::TextID EffectDesc; // 0x50
		::RPG::Client::TextID EffectTag; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTalentRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTalentRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

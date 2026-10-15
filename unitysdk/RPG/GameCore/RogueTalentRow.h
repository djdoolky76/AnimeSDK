#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class RogueTalentRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUETALENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA01BD0)
#define RPG_GAMECORE_ROGUETALENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA01730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTalentRow_TypeDefinitionIndex = 14841;

	class RogueTalentRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* Cost; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectDescParamList; // 0x18
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x20
		::Il2CppArray<::System::UInt32>* NextTalentIDList; // 0x28
		::System::String* Icon; // 0x30
		::RPG::Client::TextID EffectTitle; // 0x38
		::RPG::Client::TextID EffectDesc; // 0x48
		::System::Boolean IsImportant; // 0x58
		::System::Byte _padding0[0x3];
		::System::UInt32 TalentID; // 0x5C
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

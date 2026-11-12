#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class RogueTalentRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUETALENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC416F0)
#define RPG_GAMECORE_ROGUETALENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EC41250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTalentRow_TypeDefinitionIndex = 14997;

	class RogueTalentRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x10
		::Il2CppArray<::System::UInt32>* NextTalentIDList; // 0x18
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* Cost; // 0x20
		::System::String* Icon; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectDescParamList; // 0x30
		::RPG::Client::TextID EffectTitle; // 0x38
		::System::UInt32 TalentID; // 0x48
		::System::Boolean IsImportant; // 0x4C
		::System::Byte _padding0[0x3];
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

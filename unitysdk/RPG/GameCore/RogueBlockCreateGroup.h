#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RogueDLCBlockType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueBlockCreateGroup; }
namespace RPG::GameCore { class RogueDLCBlockWeight; }
namespace RPG::GameCore { class RogueDLCMarkType; }

#define RPG_GAMECORE_ROGUEBLOCKCREATEGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9AB5E0)
#define RPG_GAMECORE_ROGUEBLOCKCREATEGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9AB3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueBlockCreateGroup_TypeDefinitionIndex = 17913;

	class RogueBlockCreateGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 BlockCreateID; // 0x10
		::System::UInt32 GroupID; // 0x14
		::RPG::GameCore::RogueDLCBlockType BlockType; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::RogueDLCBlockWeight*>* BlockCreatNumList; // 0x20
		::Il2CppArray<::RPG::GameCore::RogueDLCMarkType*>* MarkCreateRandomList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBLOCKCREATEGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueBlockCreateGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueBlockCreateGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBLOCKCREATEGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

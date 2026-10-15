#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RogueDLCBlockType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueChestGridItem; }

#define RPG_GAMECORE_ROGUECHESTGRIDITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B0AB0)
#define RPG_GAMECORE_ROGUECHESTGRIDITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9B08C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueChestGridItem_TypeDefinitionIndex = 17909;

	class RogueChestGridItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 PosX; // 0x10
		::System::UInt32 PosY; // 0x14
		::Il2CppArray<::RPG::GameCore::RogueDLCBlockType>* BlockTypeList; // 0x18
		::System::Boolean ExportToJson; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECHESTGRIDITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueChestGridItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueChestGridItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECHESTGRIDITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

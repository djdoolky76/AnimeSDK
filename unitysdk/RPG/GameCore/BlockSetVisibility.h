#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BlockSetVisibility; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace System { class String; }

#define RPG_GAMECORE_BLOCKSETVISIBILITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D470B40)
#define RPG_GAMECORE_BLOCKSETVISIBILITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D470B50)
#define RPG_GAMECORE_BLOCKSETVISIBILITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D470B10)

namespace RPG::GameCore
{
	class BlockSetVisibility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* BlockTags; // 0x18
		::RPG::GameCore::HoyoTagContainer* BlockHoyoTags; // 0x20
		::RPG::GameCore::HoyoTagContainer* BlockAllHoyoTags; // 0x28
		::Il2CppArray<::RPG::GameCore::DynamicString*>* BlockAlias; // 0x30
		::System::Boolean Visible; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKSETVISIBILITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BlockSetVisibility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BlockSetVisibility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKSETVISIBILITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BlockSetVisibility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BlockSetVisibility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKSETVISIBILITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

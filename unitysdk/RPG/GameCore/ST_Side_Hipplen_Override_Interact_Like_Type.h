#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenInteractLikeType.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_Hipplen_Override_Interact_Like_Type; }

#define RPG_GAMECORE_ST_SIDE_HIPPLEN_OVERRIDE_INTERACT_LIKE_TYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA843B0)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_OVERRIDE_INTERACT_LIKE_TYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA843C0)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_OVERRIDE_INTERACT_LIKE_TYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA84370)

namespace RPG::GameCore
{
	class ST_Side_Hipplen_Override_Interact_Like_Type : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::HipplenInteractLikeType LikeType; // 0x18
		::System::Boolean ResetOnExit; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_OVERRIDE_INTERACT_LIKE_TYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_Hipplen_Override_Interact_Like_Type* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_Hipplen_Override_Interact_Like_Type*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_OVERRIDE_INTERACT_LIKE_TYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_Hipplen_Override_Interact_Like_Type* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_Hipplen_Override_Interact_Like_Type*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_OVERRIDE_INTERACT_LIKE_TYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/InwardBubbleTalkType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetInwardBubbleInfo; }

#define RPG_GAMECORE_SETINWARDBUBBLEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB6AB0)
#define RPG_GAMECORE_SETINWARDBUBBLEINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB6AC0)
#define RPG_GAMECORE_SETINWARDBUBBLEINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB6A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetInwardBubbleInfo_TypeDefinitionIndex = 21613;

	class SetInwardBubbleInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::EntityType TargetEntityType; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::UInt32 GroupID; // 0x20
		::RPG::GameCore::InwardBubbleTalkType Type; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETINWARDBUBBLEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetInwardBubbleInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetInwardBubbleInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETINWARDBUBBLEINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetInwardBubbleInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetInwardBubbleInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETINWARDBUBBLEINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

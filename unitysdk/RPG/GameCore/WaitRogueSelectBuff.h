#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitRogueSelectBuff; }

#define RPG_GAMECORE_WAITROGUESELECTBUFF_CTOR_OFFSET UNITYSDK_OFFSET(0x20800300)
#define RPG_GAMECORE_WAITROGUESELECTBUFF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x20800310)
#define RPG_GAMECORE_WAITROGUESELECTBUFF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208002C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRogueSelectBuff_TypeDefinitionIndex = 20821;

	class WaitRogueSelectBuff : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESELECTBUFF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRogueSelectBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRogueSelectBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESELECTBUFF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRogueSelectBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRogueSelectBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESELECTBUFF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

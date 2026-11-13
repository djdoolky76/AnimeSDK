#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitRogueSimpleTalkFinish; }

#define RPG_GAMECORE_WAITROGUESIMPLETALKFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x208004A0)
#define RPG_GAMECORE_WAITROGUESIMPLETALKFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208004B0)
#define RPG_GAMECORE_WAITROGUESIMPLETALKFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208003E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRogueSimpleTalkFinish_TypeDefinitionIndex = 21454;

	class WaitRogueSimpleTalkFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESIMPLETALKFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRogueSimpleTalkFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRogueSimpleTalkFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESIMPLETALKFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRogueSimpleTalkFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRogueSimpleTalkFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESIMPLETALKFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitRogueSelectMiracle; }

#define RPG_GAMECORE_WAITROGUESELECTMIRACLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC728C0)
#define RPG_GAMECORE_WAITROGUESELECTMIRACLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC728D0)
#define RPG_GAMECORE_WAITROGUESELECTMIRACLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC72880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRogueSelectMiracle_TypeDefinitionIndex = 20487;

	class WaitRogueSelectMiracle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESELECTMIRACLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRogueSelectMiracle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRogueSelectMiracle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESELECTMIRACLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRogueSelectMiracle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRogueSelectMiracle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESELECTMIRACLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

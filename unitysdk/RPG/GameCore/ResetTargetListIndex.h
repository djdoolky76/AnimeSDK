#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ResetTargetListIndex; }

#define RPG_GAMECORE_RESETTARGETLISTINDEX_CTOR_OFFSET UNITYSDK_OFFSET(0x20722A50)
#define RPG_GAMECORE_RESETTARGETLISTINDEX_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x20722A60)
#define RPG_GAMECORE_RESETTARGETLISTINDEX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x20722990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetTargetListIndex_TypeDefinitionIndex = 22880;

	class ResetTargetListIndex : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTARGETLISTINDEX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetTargetListIndex* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetTargetListIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTARGETLISTINDEX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetTargetListIndex* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetTargetListIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTARGETLISTINDEX_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

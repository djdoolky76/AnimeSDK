#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClearTutorialGuide; }

#define RPG_GAMECORE_CLEARTUTORIALGUIDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B7700)
#define RPG_GAMECORE_CLEARTUTORIALGUIDE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B7710)
#define RPG_GAMECORE_CLEARTUTORIALGUIDE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B76D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearTutorialGuide_TypeDefinitionIndex = 24349;

	class ClearTutorialGuide : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ReleaseAllLock; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARTUTORIALGUIDE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearTutorialGuide* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearTutorialGuide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARTUTORIALGUIDE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearTutorialGuide* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearTutorialGuide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARTUTORIALGUIDE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

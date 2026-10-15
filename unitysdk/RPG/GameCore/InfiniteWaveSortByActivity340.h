#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class InfiniteWaveSortByActivity340; }

#define RPG_GAMECORE_INFINITEWAVESORTBYACTIVITY340_CTOR_OFFSET UNITYSDK_OFFSET(0x1D759990)
#define RPG_GAMECORE_INFINITEWAVESORTBYACTIVITY340_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7599A0)
#define RPG_GAMECORE_INFINITEWAVESORTBYACTIVITY340_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7598D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InfiniteWaveSortByActivity340_TypeDefinitionIndex = 23260;

	class InfiniteWaveSortByActivity340 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVESORTBYACTIVITY340_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::InfiniteWaveSortByActivity340* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InfiniteWaveSortByActivity340*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVESORTBYACTIVITY340_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::InfiniteWaveSortByActivity340* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InfiniteWaveSortByActivity340*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVESORTBYACTIVITY340_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

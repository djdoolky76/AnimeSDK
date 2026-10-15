#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OnMuseumPerformanceEnd; }

#define RPG_GAMECORE_ONMUSEUMPERFORMANCEEND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B30B0)
#define RPG_GAMECORE_ONMUSEUMPERFORMANCEEND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8B30C0)
#define RPG_GAMECORE_ONMUSEUMPERFORMANCEEND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8B2FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OnMuseumPerformanceEnd_TypeDefinitionIndex = 20906;

	class OnMuseumPerformanceEnd : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONMUSEUMPERFORMANCEEND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OnMuseumPerformanceEnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OnMuseumPerformanceEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONMUSEUMPERFORMANCEEND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OnMuseumPerformanceEnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OnMuseumPerformanceEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONMUSEUMPERFORMANCEEND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

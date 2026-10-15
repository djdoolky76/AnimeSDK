#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class RandomSelectMuseumStuff; }

#define RPG_GAMECORE_RANDOMSELECTMUSEUMSTUFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D96C660)
#define RPG_GAMECORE_RANDOMSELECTMUSEUMSTUFF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D96C6C0)
#define RPG_GAMECORE_RANDOMSELECTMUSEUMSTUFF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D96C5E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RandomSelectMuseumStuff_TypeDefinitionIndex = 21089;

	class RandomSelectMuseumStuff : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* RandomCount; // 0x18
		::RPG::GameCore::DynamicString* CustomString; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTMUSEUMSTUFF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RandomSelectMuseumStuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RandomSelectMuseumStuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTMUSEUMSTUFF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RandomSelectMuseumStuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RandomSelectMuseumStuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTMUSEUMSTUFF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

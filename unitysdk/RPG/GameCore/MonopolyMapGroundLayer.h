#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonopolyMapBaseLayer.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyMapGroundLayer; }

#define RPG_GAMECORE_MONOPOLYMAPGROUNDLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1EABCF90)
#define RPG_GAMECORE_MONOPOLYMAPGROUNDLAYER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EABCFA0)
#define RPG_GAMECORE_MONOPOLYMAPGROUNDLAYER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EABD5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyMapGroundLayer_TypeDefinitionIndex = 16397;

	class MonopolyMapGroundLayer : public ::RPG::GameCore::MonopolyMapBaseLayer
	{
	public:
		::System::UInt32 ContentID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYMAPGROUNDLAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyMapGroundLayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyMapGroundLayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYMAPGROUNDLAYER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyMapGroundLayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyMapGroundLayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYMAPGROUNDLAYER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

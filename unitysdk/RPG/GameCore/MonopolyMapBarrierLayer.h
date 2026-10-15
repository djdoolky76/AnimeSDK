#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonopolyMapBaseLayer.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyMapBarrierLayer; }

#define RPG_GAMECORE_MONOPOLYMAPBARRIERLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D874D20)
#define RPG_GAMECORE_MONOPOLYMAPBARRIERLAYER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D874D30)
#define RPG_GAMECORE_MONOPOLYMAPBARRIERLAYER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D874CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyMapBarrierLayer_TypeDefinitionIndex = 16240;

	class MonopolyMapBarrierLayer : public ::RPG::GameCore::MonopolyMapBaseLayer
	{
	public:
		::System::UInt32 EventID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYMAPBARRIERLAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyMapBarrierLayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyMapBarrierLayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYMAPBARRIERLAYER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyMapBarrierLayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyMapBarrierLayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYMAPBARRIERLAYER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

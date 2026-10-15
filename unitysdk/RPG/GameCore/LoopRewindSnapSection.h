#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoopRewindSnapSection; }

#define RPG_GAMECORE_LOOPREWINDSNAPSECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C8920)
#define RPG_GAMECORE_LOOPREWINDSNAPSECTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C87A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopRewindSnapSection_TypeDefinitionIndex = 20639;

	class LoopRewindSnapSection : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single StartRatio; // 0x10
		::System::Single EndRatio; // 0x14
		::System::Single SnapRatio; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPREWINDSNAPSECTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopRewindSnapSection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopRewindSnapSection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPREWINDSNAPSECTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

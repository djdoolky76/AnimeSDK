#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfSpecialEventWaveOrder; }
namespace RPG::GameCore { class ElfWaveOrder; }

#define RPG_GAMECORE_ELFSPECIALEVENTWAVEORDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D60BA70)
#define RPG_GAMECORE_ELFSPECIALEVENTWAVEORDER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D60B2C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfSpecialEventWaveOrder_TypeDefinitionIndex = 18498;

	class ElfSpecialEventWaveOrder : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single EatingTime; // 0x10
		::System::Single WaitTime; // 0x14
		::Il2CppArray<::RPG::GameCore::ElfWaveOrder*>* OrderWaves; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSPECIALEVENTWAVEORDER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfSpecialEventWaveOrder* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfSpecialEventWaveOrder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSPECIALEVENTWAVEORDER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

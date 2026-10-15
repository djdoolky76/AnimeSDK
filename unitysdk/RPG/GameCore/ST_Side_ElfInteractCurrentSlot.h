#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_ElfInteractCurrentSlot; }

#define RPG_GAMECORE_ST_SIDE_ELFINTERACTCURRENTSLOT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA82F40)
#define RPG_GAMECORE_ST_SIDE_ELFINTERACTCURRENTSLOT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA82F50)
#define RPG_GAMECORE_ST_SIDE_ELFINTERACTCURRENTSLOT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA82F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_ElfInteractCurrentSlot_TypeDefinitionIndex = 21540;

	class ST_Side_ElfInteractCurrentSlot : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single Duration; // 0x18
		::System::Boolean ChangeAnim; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 State; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ELFINTERACTCURRENTSLOT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_ElfInteractCurrentSlot* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_ElfInteractCurrentSlot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ELFINTERACTCURRENTSLOT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_ElfInteractCurrentSlot* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_ElfInteractCurrentSlot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ELFINTERACTCURRENTSLOT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

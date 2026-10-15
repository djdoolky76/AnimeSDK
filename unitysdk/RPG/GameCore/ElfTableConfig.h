#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfTableConfig; }

#define RPG_GAMECORE_ELFTABLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D60BF50)
#define RPG_GAMECORE_ELFTABLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D60BF60)
#define RPG_GAMECORE_ELFTABLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D60BE90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfTableConfig_TypeDefinitionIndex = 18481;

	class ElfTableConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::UInt32 Level; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFTABLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfTableConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfTableConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFTABLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfTableConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfTableConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFTABLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

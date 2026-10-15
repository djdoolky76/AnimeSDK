#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimGridViewConfig; }

#define RPG_GAMECORE_FIVEDIMGRIDVIEWCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D696BA0)
#define RPG_GAMECORE_FIVEDIMGRIDVIEWCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D696BB0)
#define RPG_GAMECORE_FIVEDIMGRIDVIEWCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D696B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGridViewConfig_TypeDefinitionIndex = 18549;

	class FiveDimGridViewConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsGridView; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 GridSizeX; // 0x14
		::System::UInt32 GridSizeY; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRIDVIEWCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimGridViewConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimGridViewConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRIDVIEWCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimGridViewConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimGridViewConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRIDVIEWCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

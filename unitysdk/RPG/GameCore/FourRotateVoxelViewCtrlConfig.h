#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelViewCtrlConfig; }

#define RPG_GAMECORE_FOURROTATEVOXELVIEWCTRLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F2590)
#define RPG_GAMECORE_FOURROTATEVOXELVIEWCTRLCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6F25A0)
#define RPG_GAMECORE_FOURROTATEVOXELVIEWCTRLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F2550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelViewCtrlConfig_TypeDefinitionIndex = 16763;

	class FourRotateVoxelViewCtrlConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsViewCtrl; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 AnimMatIndex; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELVIEWCTRLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelViewCtrlConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelViewCtrlConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELVIEWCTRLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelViewCtrlConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelViewCtrlConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELVIEWCTRLCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

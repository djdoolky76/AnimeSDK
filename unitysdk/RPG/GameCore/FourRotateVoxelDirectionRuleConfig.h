#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelCameraDirectionMask.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelDirectionRuleConfig; }

#define RPG_GAMECORE_FOURROTATEVOXELDIRECTIONRULECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6ED700)
#define RPG_GAMECORE_FOURROTATEVOXELDIRECTIONRULECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6ED710)
#define RPG_GAMECORE_FOURROTATEVOXELDIRECTIONRULECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6ED6C0)

namespace RPG::GameCore
{
	class FourRotateVoxelDirectionRuleConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsDirectionRule; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FourRotateVoxelCameraDirectionMask RenderDirectionMask; // 0x14
		::RPG::GameCore::FourRotateVoxelCameraDirectionMask TriggerDirectionMask; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELDIRECTIONRULECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelDirectionRuleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelDirectionRuleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELDIRECTIONRULECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelDirectionRuleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelDirectionRuleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELDIRECTIONRULECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ModifyGlobalVisionParams; }

#define RPG_GAMECORE_MODIFYGLOBALVISIONPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D897720)
#define RPG_GAMECORE_MODIFYGLOBALVISIONPARAMS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D897740)
#define RPG_GAMECORE_MODIFYGLOBALVISIONPARAMS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8976E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyGlobalVisionParams_TypeDefinitionIndex = 20553;

	class ModifyGlobalVisionParams : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single GlobalVisionDistanceFactor; // 0x18
		::System::Single GlobalVisionDistanceBias; // 0x1C
		::System::Single GlobalVisionAngleFactor; // 0x20
		::System::Single GlobalVisionAngleBias; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYGLOBALVISIONPARAMS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyGlobalVisionParams* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyGlobalVisionParams*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYGLOBALVISIONPARAMS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyGlobalVisionParams* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyGlobalVisionParams*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYGLOBALVISIONPARAMS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

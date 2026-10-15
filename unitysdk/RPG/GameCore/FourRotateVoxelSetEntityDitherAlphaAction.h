#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelSetEntityDitherAlphaAction; }

#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYDITHERALPHAACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C44D0)
#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYDITHERALPHAACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6C44E0)
#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYDITHERALPHAACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C4420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelSetEntityDitherAlphaAction_TypeDefinitionIndex = 16775;

	class FourRotateVoxelSetEntityDitherAlphaAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Single Alpha; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYDITHERALPHAACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelSetEntityDitherAlphaAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelSetEntityDitherAlphaAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYDITHERALPHAACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelSetEntityDitherAlphaAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelSetEntityDitherAlphaAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYDITHERALPHAACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

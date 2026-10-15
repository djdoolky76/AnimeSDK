#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelPlayZoomAndRotateCurveAction; }
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXELPLAYZOOMANDROTATECURVEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F0D30)
#define RPG_GAMECORE_FOURROTATEVOXELPLAYZOOMANDROTATECURVEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6F0D40)
#define RPG_GAMECORE_FOURROTATEVOXELPLAYZOOMANDROTATECURVEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F0CE0)

namespace RPG::GameCore
{
	class FourRotateVoxelPlayZoomAndRotateCurveAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Int32 TargetDirectionIndex; // 0x10
		::System::Int32 MaxRotateLoops; // 0x14
		::System::Int32 FocusEntityID; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* FocusAnchorName; // 0x20
		::System::String* CurveName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPLAYZOOMANDROTATECURVEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelPlayZoomAndRotateCurveAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelPlayZoomAndRotateCurveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPLAYZOOMANDROTATECURVEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelPlayZoomAndRotateCurveAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelPlayZoomAndRotateCurveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPLAYZOOMANDROTATECURVEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

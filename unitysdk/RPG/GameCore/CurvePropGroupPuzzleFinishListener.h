#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CurvePropGroupPuzzleFinishListener; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_CURVEPROPGROUPPUZZLEFINISHLISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5BB2A0)
#define RPG_GAMECORE_CURVEPROPGROUPPUZZLEFINISHLISTENER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5BB2B0)
#define RPG_GAMECORE_CURVEPROPGROUPPUZZLEFINISHLISTENER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5BB270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CurvePropGroupPuzzleFinishListener_TypeDefinitionIndex = 22256;

	class CurvePropGroupPuzzleFinishListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* UniqueName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CURVEPROPGROUPPUZZLEFINISHLISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CurvePropGroupPuzzleFinishListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CurvePropGroupPuzzleFinishListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CURVEPROPGROUPPUZZLEFINISHLISTENER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CurvePropGroupPuzzleFinishListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CurvePropGroupPuzzleFinishListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CURVEPROPGROUPPUZZLEFINISHLISTENER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

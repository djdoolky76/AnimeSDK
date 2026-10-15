#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropMoveToV2TargetBase; }

#define RPG_GAMECORE_PROPMOVETOV2TARGETBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D950800)
#define RPG_GAMECORE_PROPMOVETOV2TARGETBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D950810)
#define RPG_GAMECORE_PROPMOVETOV2TARGETBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D950560)

namespace RPG::GameCore
{
	class PropMoveToV2TargetBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPMOVETOV2TARGETBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropMoveToV2TargetBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropMoveToV2TargetBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPMOVETOV2TARGETBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropMoveToV2TargetBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropMoveToV2TargetBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPMOVETOV2TARGETBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

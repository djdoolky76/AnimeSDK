#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropsReqInteractByColonyMirrorTakenDiff; }

#define RPG_GAMECORE_PROPSREQINTERACTBYCOLONYMIRRORTAKENDIFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95CAD0)
#define RPG_GAMECORE_PROPSREQINTERACTBYCOLONYMIRRORTAKENDIFF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D95CAE0)
#define RPG_GAMECORE_PROPSREQINTERACTBYCOLONYMIRRORTAKENDIFF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D95CA10)

namespace RPG::GameCore
{
	class PropsReqInteractByColonyMirrorTakenDiff : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSREQINTERACTBYCOLONYMIRRORTAKENDIFF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropsReqInteractByColonyMirrorTakenDiff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropsReqInteractByColonyMirrorTakenDiff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSREQINTERACTBYCOLONYMIRRORTAKENDIFF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropsReqInteractByColonyMirrorTakenDiff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropsReqInteractByColonyMirrorTakenDiff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSREQINTERACTBYCOLONYMIRRORTAKENDIFF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

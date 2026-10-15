#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetBillboardInfo.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetRoguePFBillboardInfo; }

#define RPG_GAMECORE_SETROGUEPFBILLBOARDINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC05C0)
#define RPG_GAMECORE_SETROGUEPFBILLBOARDINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC05D0)
#define RPG_GAMECORE_SETROGUEPFBILLBOARDINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC0590)

namespace RPG::GameCore
{
	class SetRoguePFBillboardInfo : public ::RPG::GameCore::SetBillboardInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETROGUEPFBILLBOARDINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetRoguePFBillboardInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetRoguePFBillboardInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETROGUEPFBILLBOARDINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetRoguePFBillboardInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetRoguePFBillboardInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETROGUEPFBILLBOARDINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropInteractOverrideData01; }
namespace System { class String; }

#define RPG_GAMECORE_PROPINTERACTOVERRIDEDATA01_CTOR_OFFSET UNITYSDK_OFFSET(0x1D94E6B0)
#define RPG_GAMECORE_PROPINTERACTOVERRIDEDATA01_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D94E6C0)
#define RPG_GAMECORE_PROPINTERACTOVERRIDEDATA01_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D94E680)

namespace RPG::GameCore
{
	class PropInteractOverrideData01 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AreasPath; // 0x18
		::System::String* AreaName; // 0x20
		::System::String* AnchorName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTOVERRIDEDATA01_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropInteractOverrideData01* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropInteractOverrideData01*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTOVERRIDEDATA01_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropInteractOverrideData01* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropInteractOverrideData01*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTOVERRIDEDATA01_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

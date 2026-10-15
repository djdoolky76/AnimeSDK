#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GlobalMainIntensityEffectAutoRevert; }

#define RPG_GAMECORE_GLOBALMAININTENSITYEFFECTAUTOREVERT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D71E870)
#define RPG_GAMECORE_GLOBALMAININTENSITYEFFECTAUTOREVERT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D71E880)
#define RPG_GAMECORE_GLOBALMAININTENSITYEFFECTAUTOREVERT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D71E830)

namespace RPG::GameCore
{
	class GlobalMainIntensityEffectAutoRevert : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single FadeIn; // 0x18
		::System::Single FadeOut; // 0x1C
		::System::Single Duration; // 0x20
		::System::Single TargetIntensity; // 0x24
		::System::Boolean ByEntity; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMAININTENSITYEFFECTAUTOREVERT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GlobalMainIntensityEffectAutoRevert* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GlobalMainIntensityEffectAutoRevert*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMAININTENSITYEFFECTAUTOREVERT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GlobalMainIntensityEffectAutoRevert* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GlobalMainIntensityEffectAutoRevert*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMAININTENSITYEFFECTAUTOREVERT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

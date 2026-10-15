#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GlobalMainIntensityEffect; }

#define RPG_GAMECORE_GLOBALMAININTENSITYEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D71E600)
#define RPG_GAMECORE_GLOBALMAININTENSITYEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D71E610)
#define RPG_GAMECORE_GLOBALMAININTENSITYEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D71E5D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GlobalMainIntensityEffect_TypeDefinitionIndex = 23731;

	class GlobalMainIntensityEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsRevert; // 0x18
		::System::Boolean IsDurable; // 0x19
		::System::Byte _padding0[0x2];
		::System::Single TargetIntensity; // 0x1C
		::System::Single FadeDuration; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMAININTENSITYEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GlobalMainIntensityEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GlobalMainIntensityEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMAININTENSITYEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GlobalMainIntensityEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GlobalMainIntensityEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMAININTENSITYEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

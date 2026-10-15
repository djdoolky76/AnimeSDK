#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameTransformComponentConfig; }

#define RPG_GAMECORE_LITTLEGAMETRANSFORMCOMPONENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E70E0)
#define RPG_GAMECORE_LITTLEGAMETRANSFORMCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7E7100)
#define RPG_GAMECORE_LITTLEGAMETRANSFORMCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E70A0)

namespace RPG::GameCore
{
	class LittleGameTransformComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::RPG::MVector3 Position; // 0x10
		::RPG::MVector3 Rotation; // 0x1C
		::RPG::MVector3 Scale; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMETRANSFORMCOMPONENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameTransformComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameTransformComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMETRANSFORMCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameTransformComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameTransformComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMETRANSFORMCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMAGJGLPIIF.h"
#include "unitysdk/RPG/GameCore/RuanMadeCakeFeatureConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RuanMadeCakeFeature_HatColor; }

#define RPG_GAMECORE_RUANMADECAKEFEATURE_HATCOLOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6CC70)
#define RPG_GAMECORE_RUANMADECAKEFEATURE_HATCOLOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA6CC80)
#define RPG_GAMECORE_RUANMADECAKEFEATURE_HATCOLOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA6D320)

namespace RPG::GameCore
{
	class RuanMadeCakeFeature_HatColor : public ::RPG::GameCore::RuanMadeCakeFeatureConfig
	{
	public:
		::Il2CppArray<::BMAGJGLPIIF>* CustomColor; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_HATCOLOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RuanMadeCakeFeature_HatColor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RuanMadeCakeFeature_HatColor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_HATCOLOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RuanMadeCakeFeature_HatColor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RuanMadeCakeFeature_HatColor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_HATCOLOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

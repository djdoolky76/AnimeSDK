#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMAGJGLPIIF.h"
#include "unitysdk/RPG/GameCore/RuanMadeCakeFeatureConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RuanMadeCakeFeature_HatDecal; }
namespace System { class String; }

#define RPG_GAMECORE_RUANMADECAKEFEATURE_HATDECAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6CD90)
#define RPG_GAMECORE_RUANMADECAKEFEATURE_HATDECAL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA6CDA0)
#define RPG_GAMECORE_RUANMADECAKEFEATURE_HATDECAL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA6D350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RuanMadeCakeFeature_HatDecal_TypeDefinitionIndex = 17466;

	class RuanMadeCakeFeature_HatDecal : public ::RPG::GameCore::RuanMadeCakeFeatureConfig
	{
	public:
		::System::String* DecalTex; // 0x18
		::BMAGJGLPIIF FilingAndOffset; // 0x20
		::Il2CppArray<::BMAGJGLPIIF>* CustomColor; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_HATDECAL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RuanMadeCakeFeature_HatDecal* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RuanMadeCakeFeature_HatDecal*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_HATDECAL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RuanMadeCakeFeature_HatDecal* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RuanMadeCakeFeature_HatDecal*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_HATDECAL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMAGJGLPIIF.h"
#include "unitysdk/RPG/GameCore/RuanMadeCakeFeatureConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RuanMadeCakeFeature_BodyDecal; }
namespace System { class String; }

#define RPG_GAMECORE_RUANMADECAKEFEATURE_BODYDECAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3EFB0)
#define RPG_GAMECORE_RUANMADECAKEFEATURE_BODYDECAL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA3EFC0)
#define RPG_GAMECORE_RUANMADECAKEFEATURE_BODYDECAL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA3FA20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RuanMadeCakeFeature_BodyDecal_TypeDefinitionIndex = 17462;

	class RuanMadeCakeFeature_BodyDecal : public ::RPG::GameCore::RuanMadeCakeFeatureConfig
	{
	public:
		::System::String* DecalTex; // 0x18
		::BMAGJGLPIIF FilingAndOffset; // 0x20
		::Il2CppArray<::BMAGJGLPIIF>* CustomColor; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_BODYDECAL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RuanMadeCakeFeature_BodyDecal* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RuanMadeCakeFeature_BodyDecal*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_BODYDECAL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RuanMadeCakeFeature_BodyDecal* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RuanMadeCakeFeature_BodyDecal*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_BODYDECAL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

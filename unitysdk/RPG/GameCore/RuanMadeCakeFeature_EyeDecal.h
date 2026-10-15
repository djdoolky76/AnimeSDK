#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMAGJGLPIIF.h"
#include "unitysdk/RPG/GameCore/RuanMadeCakeFeatureConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RuanMadeCakeFeature_EyeDecal; }
namespace System { class String; }

#define RPG_GAMECORE_RUANMADECAKEFEATURE_EYEDECAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3F160)
#define RPG_GAMECORE_RUANMADECAKEFEATURE_EYEDECAL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA3F170)
#define RPG_GAMECORE_RUANMADECAKEFEATURE_EYEDECAL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA3FA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RuanMadeCakeFeature_EyeDecal_TypeDefinitionIndex = 17467;

	class RuanMadeCakeFeature_EyeDecal : public ::RPG::GameCore::RuanMadeCakeFeatureConfig
	{
	public:
		::System::String* DecalTex; // 0x18
		::BMAGJGLPIIF FilingAndOffset; // 0x20
		::Il2CppArray<::BMAGJGLPIIF>* CustomColor; // 0x30
		::System::Boolean HideLeftEye; // 0x38
		::System::Boolean HideRightEye; // 0x39
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_EYEDECAL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RuanMadeCakeFeature_EyeDecal* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RuanMadeCakeFeature_EyeDecal*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_EYEDECAL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RuanMadeCakeFeature_EyeDecal* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RuanMadeCakeFeature_EyeDecal*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_EYEDECAL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

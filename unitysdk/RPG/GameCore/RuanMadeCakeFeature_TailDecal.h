#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMAGJGLPIIF.h"
#include "unitysdk/RPG/GameCore/RuanMadeCakeFeatureConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RuanMadeCakeFeature_TailDecal; }
namespace System { class String; }

#define RPG_GAMECORE_RUANMADECAKEFEATURE_TAILDECAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6CF40)
#define RPG_GAMECORE_RUANMADECAKEFEATURE_TAILDECAL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA6CF50)
#define RPG_GAMECORE_RUANMADECAKEFEATURE_TAILDECAL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA6D380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RuanMadeCakeFeature_TailDecal_TypeDefinitionIndex = 17465;

	class RuanMadeCakeFeature_TailDecal : public ::RPG::GameCore::RuanMadeCakeFeatureConfig
	{
	public:
		::System::String* DecalTex; // 0x18
		::BMAGJGLPIIF FilingAndOffset; // 0x20
		::Il2CppArray<::BMAGJGLPIIF>* CustomColor; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_TAILDECAL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RuanMadeCakeFeature_TailDecal* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RuanMadeCakeFeature_TailDecal*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_TAILDECAL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RuanMadeCakeFeature_TailDecal* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RuanMadeCakeFeature_TailDecal*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_TAILDECAL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

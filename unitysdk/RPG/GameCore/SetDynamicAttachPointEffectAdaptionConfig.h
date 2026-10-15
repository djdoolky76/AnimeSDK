#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EffectScaleAdaptType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AttachPointEffectAdaptionConfig; }
namespace RPG::GameCore { class SetDynamicAttachPointEffectAdaptionConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICATTACHPOINTEFFECTADAPTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA718A0)
#define RPG_GAMECORE_SETDYNAMICATTACHPOINTEFFECTADAPTIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA718E0)
#define RPG_GAMECORE_SETDYNAMICATTACHPOINTEFFECTADAPTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA71840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicAttachPointEffectAdaptionConfig_TypeDefinitionIndex = 20273;

	class SetDynamicAttachPointEffectAdaptionConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::EffectScaleAdaptType>* ScaleAdaptTypes; // 0x20
		::System::String* EffectPathRule; // 0x28
		::Il2CppArray<::RPG::GameCore::AttachPointEffectAdaptionConfig*>* AttachPointEffectAdaptionList; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICATTACHPOINTEFFECTADAPTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicAttachPointEffectAdaptionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicAttachPointEffectAdaptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICATTACHPOINTEFFECTADAPTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicAttachPointEffectAdaptionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicAttachPointEffectAdaptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICATTACHPOINTEFFECTADAPTIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

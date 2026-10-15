#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ResolutionAdaptionConfig; }
namespace RPG::GameCore { class TeamFormationTemplateSingleConfig; }

#define RPG_GAMECORE_RESOLUTIONADAPTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95FBC0)
#define RPG_GAMECORE_RESOLUTIONADAPTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D95F910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResolutionAdaptionConfig_TypeDefinitionIndex = 17138;

	class ResolutionAdaptionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TeamFormationTemplateSingleConfig*>* TemplateSingleConfigList; // 0x10
		::System::Single InitFOV; // 0x18
		::RPG::MVector3 GamePreviewFixAnchorOffset; // 0x1C
		::RPG::MVector3 GamePreviewFixAimOffset; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOLUTIONADAPTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResolutionAdaptionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResolutionAdaptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOLUTIONADAPTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

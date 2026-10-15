#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client::TAUtils { class RendererSlots; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_EFFECT_CYRENERINGSTARSHININGMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCD1C260)
#define RPG_CLIENT_EFFECT_CYRENERINGSTARSHININGMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xCD1C210)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_CyreneRingStarShiningMonoPlugin_TypeDefinitionIndex = 70440;

	class Effect_CyreneRingStarShiningMonoPlugin
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TAUtils::RendererSlots*>* TargetMaterials; // 0x30
		::System::String* ShiningIntensityPropertyName; // 0x38
		::UnityEngine::Vector2 ShiningIntensityMinMax; // 0x40
		::System::Single ShiningIntensityPower; // 0x48
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* ShiningIntensityOverView; // 0x50
		::System::Single ShiningViewAngle; // 0x58
		::System::Single ShiningViewPower; // 0x5C
		::UnityEngine::AnimationCurve* ShiningIntensityOverLifetime; // 0x60
		::System::Single ShiningLifetime; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_CYRENERINGSTARSHININGMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_CYRENERINGSTARSHININGMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}

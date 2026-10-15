#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TutorialGuideHintType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialGuideHintAdaptConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TUTORIALGUIDEHINTADAPTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC3D750)
#define RPG_GAMECORE_TUTORIALGUIDEHINTADAPTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC3D5D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialGuideHintAdaptConfig_TypeDefinitionIndex = 24394;

	class TutorialGuideHintAdaptConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TutorialGuideHintType GuideHintType; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* PrefabPath; // 0x18
		::System::Boolean CopySize; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEHINTADAPTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialGuideHintAdaptConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialGuideHintAdaptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEHINTADAPTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

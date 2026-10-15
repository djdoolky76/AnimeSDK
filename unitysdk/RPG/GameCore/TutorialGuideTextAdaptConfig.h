#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TutorialGuideDirectionType.h"
#include "unitysdk/RPG/GameCore/TutorialGuideTextType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialGuideTextAdaptConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TUTORIALGUIDETEXTADAPTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6C5A0)
#define RPG_GAMECORE_TUTORIALGUIDETEXTADAPTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC6C330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialGuideTextAdaptConfig_TypeDefinitionIndex = 24395;

	class TutorialGuideTextAdaptConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TutorialGuideTextType GuideTextType; // 0x10
		::System::Boolean HasDirection; // 0x14
		::System::Byte _padding0[0x3];
		::System::String* PrefabPath; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TutorialGuideDirectionType, ::System::String*>* DirectionPrefabPathMap; // 0x20
		::System::String* OverrideTextPath; // 0x28
		::System::String* OverrideKeyMapPath; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETEXTADAPTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialGuideTextAdaptConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialGuideTextAdaptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETEXTADAPTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

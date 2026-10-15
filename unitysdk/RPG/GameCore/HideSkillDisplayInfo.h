#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HideSkillDisplayInfo; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_HIDESKILLDISPLAYINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73BB50)
#define RPG_GAMECORE_HIDESKILLDISPLAYINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D73BB60)
#define RPG_GAMECORE_HIDESKILLDISPLAYINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D73BB20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideSkillDisplayInfo_TypeDefinitionIndex = 22821;

	class HideSkillDisplayInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::System::String*>* SkillNameList; // 0x20
		::System::Boolean Clear; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDESKILLDISPLAYINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideSkillDisplayInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideSkillDisplayInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDESKILLDISPLAYINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideSkillDisplayInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideSkillDisplayInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDESKILLDISPLAYINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

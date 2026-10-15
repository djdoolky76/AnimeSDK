#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/System/Object.h"
class EANKAFJCEEH;
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_ENHANCESKILLPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xCDE34C0)
#define RPG_CLIENT_ENHANCESKILLPARAM_GETSHOWENHANCEEFFECT_OFFSET UNITYSDK_OFFSET(0xCDE33B0)

namespace RPG::Client
{
	inline static constexpr unsigned int EnhanceSkillParam_TypeDefinitionIndex = 71944;

	class EnhanceSkillParam : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Entity; // 0x10
		::System::Boolean IsShow; // 0x18
		::System::Boolean RefreshImmediate; // 0x19
		::System::Byte _padding0[0x2];
		::RPG::Client::UISkillIndex SkillIndex; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENHANCESKILLPARAM_CTOR_OFFSET))(this);
		}

		::System::Boolean GetShowEnhanceEffect(::RPG::GameCore::GameEntity* a1, ::EANKAFJCEEH* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::EANKAFJCEEH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENHANCESKILLPARAM_GETSHOWENHANCEEFFECT_OFFSET))(this, a1, a2);
		}

	};
}

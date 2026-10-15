#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HoyoTag; }
namespace RPG::GameCore { class PropTagComponent; }

#define RPG_GAMECORE_PROPTAGCOMPONENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D929DF0)
#define RPG_GAMECORE_PROPTAGCOMPONENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D92CCE0)
#define RPG_GAMECORE_PROPTAGCOMPONENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D92CA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropTagComponent_TypeDefinitionIndex = 17564;

	class PropTagComponent : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::HoyoTag* Tag; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTAGCOMPONENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropTagComponent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropTagComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTAGCOMPONENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropTagComponent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropTagComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTAGCOMPONENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}

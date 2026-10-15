#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByHeroGender; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHEROGENDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D42C0)
#define RPG_GAMECORE_BYHEROGENDER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4D4480)
#define RPG_GAMECORE_BYHEROGENDER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4D4450)
#define RPG_GAMECORE_BYHEROGENDER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4D42D0)
#define RPG_GAMECORE_BYHEROGENDER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4D4290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHeroGender_TypeDefinitionIndex = 23761;

	class ByHeroGender : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::GenderType Gender; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHEROGENDER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHeroGender* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHeroGender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHEROGENDER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHeroGender* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHeroGender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHEROGENDER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHeroGender* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHeroGender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHEROGENDER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHeroGender* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHeroGender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHEROGENDER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCurrentRogueHasMiracle; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCURRENTROGUEHASMIRACLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4EA310)
#define RPG_GAMECORE_BYCURRENTROGUEHASMIRACLE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4EA4C0)
#define RPG_GAMECORE_BYCURRENTROGUEHASMIRACLE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4EA490)
#define RPG_GAMECORE_BYCURRENTROGUEHASMIRACLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4EA320)
#define RPG_GAMECORE_BYCURRENTROGUEHASMIRACLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4EA2E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentRogueHasMiracle_TypeDefinitionIndex = 21045;

	class ByCurrentRogueHasMiracle : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 MiracleID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUEHASMIRACLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCurrentRogueHasMiracle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCurrentRogueHasMiracle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUEHASMIRACLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCurrentRogueHasMiracle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCurrentRogueHasMiracle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUEHASMIRACLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentRogueHasMiracle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentRogueHasMiracle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUEHASMIRACLE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentRogueHasMiracle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentRogueHasMiracle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUEHASMIRACLE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}

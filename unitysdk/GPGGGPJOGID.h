#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
class FCOEMCEDLNL;
class GPGGGPJOGID;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define GPGGGPJOGID_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE49460)
#define GPGGGPJOGID_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CE49670)
#define GPGGGPJOGID_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CE49640)
#define GPGGGPJOGID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE49470)
#define GPGGGPJOGID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE49430)

inline static constexpr unsigned int GPGGGPJOGID_TypeDefinitionIndex = 24201;

	class GPGGGPJOGID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::RPG::GameCore::RtBehaviorFlag FNPGDNFLMPC; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGGGPJOGID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GPGGGPJOGID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GPGGGPJOGID*))((::PBYTE)hIl2Cpp + GPGGGPJOGID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GPGGGPJOGID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GPGGGPJOGID*))((::PBYTE)hIl2Cpp + GPGGGPJOGID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::GPGGGPJOGID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::GPGGGPJOGID*))((::PBYTE)hIl2Cpp + GPGGGPJOGID_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::GPGGGPJOGID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::GPGGGPJOGID*))((::PBYTE)hIl2Cpp + GPGGGPJOGID_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

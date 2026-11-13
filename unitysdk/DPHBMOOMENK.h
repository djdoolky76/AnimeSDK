#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class DPHBMOOMENK;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define DPHBMOOMENK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E99D670)
#define DPHBMOOMENK_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E99D890)
#define DPHBMOOMENK_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E99D860)
#define DPHBMOOMENK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E99D680)
#define DPHBMOOMENK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E99D640)

inline static constexpr unsigned int DPHBMOOMENK_TypeDefinitionIndex = 22955;

	class DPHBMOOMENK : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::System::Boolean GIMEICMGJHM; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHBMOOMENK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DPHBMOOMENK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DPHBMOOMENK*))((::PBYTE)hIl2Cpp + DPHBMOOMENK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DPHBMOOMENK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DPHBMOOMENK*))((::PBYTE)hIl2Cpp + DPHBMOOMENK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::DPHBMOOMENK* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::DPHBMOOMENK*))((::PBYTE)hIl2Cpp + DPHBMOOMENK_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::DPHBMOOMENK* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::DPHBMOOMENK*))((::PBYTE)hIl2Cpp + DPHBMOOMENK_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class MLMOAFNJPBG;
namespace SimpleJSON { class JSONNode; }

#define MLMOAFNJPBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1BCC70)
#define MLMOAFNJPBG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D1CCD40)
#define MLMOAFNJPBG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D1CCD10)
#define MLMOAFNJPBG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1BCC80)
#define MLMOAFNJPBG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1CCCE0)

	class MLMOAFNJPBG : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLMOAFNJPBG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MLMOAFNJPBG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MLMOAFNJPBG*))((::PBYTE)hIl2Cpp + MLMOAFNJPBG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MLMOAFNJPBG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MLMOAFNJPBG*))((::PBYTE)hIl2Cpp + MLMOAFNJPBG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::MLMOAFNJPBG* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::MLMOAFNJPBG*))((::PBYTE)hIl2Cpp + MLMOAFNJPBG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::MLMOAFNJPBG* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::MLMOAFNJPBG*))((::PBYTE)hIl2Cpp + MLMOAFNJPBG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

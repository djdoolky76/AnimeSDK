#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class AOOFHMBDLPL;
class FCOEMCEDLNL;
namespace SimpleJSON { class JSONNode; }

#define AOOFHMBDLPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCEAAB0)
#define AOOFHMBDLPL_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CCEACA0)
#define AOOFHMBDLPL_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CCEAC70)
#define AOOFHMBDLPL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCEAAC0)
#define AOOFHMBDLPL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCEAA80)

	class AOOFHMBDLPL : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 LIFHGBNGGHK; // 0x20
		::System::UInt32 NMBKAIEIAPE; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOOFHMBDLPL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AOOFHMBDLPL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AOOFHMBDLPL*))((::PBYTE)hIl2Cpp + AOOFHMBDLPL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::AOOFHMBDLPL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AOOFHMBDLPL*))((::PBYTE)hIl2Cpp + AOOFHMBDLPL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::AOOFHMBDLPL* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::AOOFHMBDLPL*))((::PBYTE)hIl2Cpp + AOOFHMBDLPL_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::AOOFHMBDLPL* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::AOOFHMBDLPL*))((::PBYTE)hIl2Cpp + AOOFHMBDLPL_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

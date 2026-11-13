#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class AOOFHMBDLPL;
class FCOEMCEDLNL;
namespace SimpleJSON { class JSONNode; }

#define AOOFHMBDLPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECB83D0)
#define AOOFHMBDLPL_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1ECB85C0)
#define AOOFHMBDLPL_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1ECB8590)
#define AOOFHMBDLPL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ECB83E0)
#define AOOFHMBDLPL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ECB83A0)

inline static constexpr unsigned int AOOFHMBDLPL_TypeDefinitionIndex = 10244;

	class AOOFHMBDLPL : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 NMBKAIEIAPE; // 0x20
		::System::UInt32 LIFHGBNGGHK; // 0x24
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

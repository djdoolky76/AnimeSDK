#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class OKCCOEHNEEF;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define OKCCOEHNEEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D28D790)
#define OKCCOEHNEEF_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D28DA30)
#define OKCCOEHNEEF_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D28D9A0)
#define OKCCOEHNEEF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D28D800)
#define OKCCOEHNEEF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D28D700)

	class OKCCOEHNEEF : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* DBLDCKODNEN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKCCOEHNEEF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OKCCOEHNEEF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OKCCOEHNEEF*))((::PBYTE)hIl2Cpp + OKCCOEHNEEF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OKCCOEHNEEF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OKCCOEHNEEF*))((::PBYTE)hIl2Cpp + OKCCOEHNEEF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::OKCCOEHNEEF* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::OKCCOEHNEEF*))((::PBYTE)hIl2Cpp + OKCCOEHNEEF_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::OKCCOEHNEEF* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::OKCCOEHNEEF*))((::PBYTE)hIl2Cpp + OKCCOEHNEEF_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

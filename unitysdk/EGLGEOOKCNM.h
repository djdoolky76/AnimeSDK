#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class EGLGEOOKCNM;
class FCOEMCEDLNL;
namespace SimpleJSON { class JSONNode; }

#define EGLGEOOKCNM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD7E590)
#define EGLGEOOKCNM_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CD7E710)
#define EGLGEOOKCNM_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CD7E6E0)
#define EGLGEOOKCNM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD7E5A0)
#define EGLGEOOKCNM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD7E560)

	class EGLGEOOKCNM : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLGEOOKCNM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EGLGEOOKCNM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EGLGEOOKCNM*))((::PBYTE)hIl2Cpp + EGLGEOOKCNM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EGLGEOOKCNM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EGLGEOOKCNM*))((::PBYTE)hIl2Cpp + EGLGEOOKCNM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::EGLGEOOKCNM* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::EGLGEOOKCNM*))((::PBYTE)hIl2Cpp + EGLGEOOKCNM_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::EGLGEOOKCNM* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::EGLGEOOKCNM*))((::PBYTE)hIl2Cpp + EGLGEOOKCNM_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class EGLGEOOKCNM;
class FCOEMCEDLNL;
namespace SimpleJSON { class JSONNode; }

#define EGLGEOOKCNM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF4FC70)
#define EGLGEOOKCNM_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DF4FDF0)
#define EGLGEOOKCNM_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DF4FDC0)
#define EGLGEOOKCNM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DF4FC80)
#define EGLGEOOKCNM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DF4FC40)

inline static constexpr unsigned int EGLGEOOKCNM_TypeDefinitionIndex = 21867;

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

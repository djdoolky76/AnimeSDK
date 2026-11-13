#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class OAJIEODKBDF;
namespace SimpleJSON { class JSONNode; }

#define OAJIEODKBDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F7020)
#define OAJIEODKBDF_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E5F71A0)
#define OAJIEODKBDF_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E5F7170)
#define OAJIEODKBDF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E5F7030)
#define OAJIEODKBDF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E5F6FF0)

inline static constexpr unsigned int OAJIEODKBDF_TypeDefinitionIndex = 20307;

	class OAJIEODKBDF : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAJIEODKBDF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OAJIEODKBDF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OAJIEODKBDF*))((::PBYTE)hIl2Cpp + OAJIEODKBDF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OAJIEODKBDF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OAJIEODKBDF*))((::PBYTE)hIl2Cpp + OAJIEODKBDF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::OAJIEODKBDF* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::OAJIEODKBDF*))((::PBYTE)hIl2Cpp + OAJIEODKBDF_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::OAJIEODKBDF* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::OAJIEODKBDF*))((::PBYTE)hIl2Cpp + OAJIEODKBDF_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

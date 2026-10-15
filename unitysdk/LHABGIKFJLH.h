#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class LHABGIKFJLH;
namespace SimpleJSON { class JSONNode; }

#define LHABGIKFJLH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C1030)
#define LHABGIKFJLH_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D0C11B0)
#define LHABGIKFJLH_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D0C1180)
#define LHABGIKFJLH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0C1040)
#define LHABGIKFJLH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0C1000)

inline static constexpr unsigned int LHABGIKFJLH_TypeDefinitionIndex = 24150;

	class LHABGIKFJLH : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHABGIKFJLH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LHABGIKFJLH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LHABGIKFJLH*))((::PBYTE)hIl2Cpp + LHABGIKFJLH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LHABGIKFJLH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LHABGIKFJLH*))((::PBYTE)hIl2Cpp + LHABGIKFJLH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::LHABGIKFJLH* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::LHABGIKFJLH*))((::PBYTE)hIl2Cpp + LHABGIKFJLH_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::LHABGIKFJLH* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::LHABGIKFJLH*))((::PBYTE)hIl2Cpp + LHABGIKFJLH_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

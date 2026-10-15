#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMABCOBMACM.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class MDCEMPKNOKN;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define MDCEMPKNOKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1144D0)
#define MDCEMPKNOKN_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D114750)
#define MDCEMPKNOKN_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D114720)
#define MDCEMPKNOKN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1144E0)
#define MDCEMPKNOKN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1144A0)

inline static constexpr unsigned int MDCEMPKNOKN_TypeDefinitionIndex = 22782;

	class MDCEMPKNOKN : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* DPICNGBHFAC; // 0x20
		::CMABCOBMACM PICEOEEKCIN; // 0x28
		::RPG::GameCore::CompareType EHCHAPPGJDJ; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCEMPKNOKN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MDCEMPKNOKN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MDCEMPKNOKN*))((::PBYTE)hIl2Cpp + MDCEMPKNOKN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MDCEMPKNOKN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MDCEMPKNOKN*))((::PBYTE)hIl2Cpp + MDCEMPKNOKN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::MDCEMPKNOKN* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::MDCEMPKNOKN*))((::PBYTE)hIl2Cpp + MDCEMPKNOKN_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::MDCEMPKNOKN* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::MDCEMPKNOKN*))((::PBYTE)hIl2Cpp + MDCEMPKNOKN_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

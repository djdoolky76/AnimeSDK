#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class MCAIABAKIJJ;
namespace SimpleJSON { class JSONNode; }

#define MCAIABAKIJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D10B820)
#define MCAIABAKIJJ_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D10B9A0)
#define MCAIABAKIJJ_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D10B970)
#define MCAIABAKIJJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D10B830)
#define MCAIABAKIJJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D10B7F0)

inline static constexpr unsigned int MCAIABAKIJJ_TypeDefinitionIndex = 19895;

	class MCAIABAKIJJ : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCAIABAKIJJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MCAIABAKIJJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MCAIABAKIJJ*))((::PBYTE)hIl2Cpp + MCAIABAKIJJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MCAIABAKIJJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MCAIABAKIJJ*))((::PBYTE)hIl2Cpp + MCAIABAKIJJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::MCAIABAKIJJ* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::MCAIABAKIJJ*))((::PBYTE)hIl2Cpp + MCAIABAKIJJ_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::MCAIABAKIJJ* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::MCAIABAKIJJ*))((::PBYTE)hIl2Cpp + MCAIABAKIJJ_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

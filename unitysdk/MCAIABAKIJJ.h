#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class MCAIABAKIJJ;
namespace SimpleJSON { class JSONNode; }

#define MCAIABAKIJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB82870)
#define MCAIABAKIJJ_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1BB829F0)
#define MCAIABAKIJJ_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1BB829C0)
#define MCAIABAKIJJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1BB82880)
#define MCAIABAKIJJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1BB82840)

inline static constexpr unsigned int MCAIABAKIJJ_TypeDefinitionIndex = 20224;

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

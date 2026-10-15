#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class NDFKINKPKHF;
namespace SimpleJSON { class JSONNode; }

#define NDFKINKPKHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1CA020)
#define NDFKINKPKHF_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D1CA1A0)
#define NDFKINKPKHF_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D1CA170)
#define NDFKINKPKHF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1CA030)
#define NDFKINKPKHF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1C9FF0)

inline static constexpr unsigned int NDFKINKPKHF_TypeDefinitionIndex = 23045;

	class NDFKINKPKHF : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFKINKPKHF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NDFKINKPKHF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NDFKINKPKHF*))((::PBYTE)hIl2Cpp + NDFKINKPKHF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NDFKINKPKHF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NDFKINKPKHF*))((::PBYTE)hIl2Cpp + NDFKINKPKHF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::NDFKINKPKHF* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::NDFKINKPKHF*))((::PBYTE)hIl2Cpp + NDFKINKPKHF_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::NDFKINKPKHF* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::NDFKINKPKHF*))((::PBYTE)hIl2Cpp + NDFKINKPKHF_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

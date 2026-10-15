#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class DOHCNAGPAEM;
class FCOEMCEDLNL;
namespace SimpleJSON { class JSONNode; }

#define DOHCNAGPAEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD25B20)
#define DOHCNAGPAEM_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CD25CA0)
#define DOHCNAGPAEM_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CD25C70)
#define DOHCNAGPAEM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD25B30)
#define DOHCNAGPAEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD25AF0)

inline static constexpr unsigned int DOHCNAGPAEM_TypeDefinitionIndex = 10196;

	class DOHCNAGPAEM : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHCNAGPAEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DOHCNAGPAEM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DOHCNAGPAEM*))((::PBYTE)hIl2Cpp + DOHCNAGPAEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DOHCNAGPAEM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DOHCNAGPAEM*))((::PBYTE)hIl2Cpp + DOHCNAGPAEM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::DOHCNAGPAEM* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::DOHCNAGPAEM*))((::PBYTE)hIl2Cpp + DOHCNAGPAEM_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::DOHCNAGPAEM* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::DOHCNAGPAEM*))((::PBYTE)hIl2Cpp + DOHCNAGPAEM_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

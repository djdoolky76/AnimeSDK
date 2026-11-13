#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class DCGNLKPJHKF;
class FCOEMCEDLNL;
namespace SimpleJSON { class JSONNode; }

#define DCGNLKPJHKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6076E0)
#define DCGNLKPJHKF_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1F607860)
#define DCGNLKPJHKF_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1F607830)
#define DCGNLKPJHKF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F6076F0)
#define DCGNLKPJHKF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F6076B0)

inline static constexpr unsigned int DCGNLKPJHKF_TypeDefinitionIndex = 23744;

	class DCGNLKPJHKF : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGNLKPJHKF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DCGNLKPJHKF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DCGNLKPJHKF*))((::PBYTE)hIl2Cpp + DCGNLKPJHKF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DCGNLKPJHKF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DCGNLKPJHKF*))((::PBYTE)hIl2Cpp + DCGNLKPJHKF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::DCGNLKPJHKF* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::DCGNLKPJHKF*))((::PBYTE)hIl2Cpp + DCGNLKPJHKF_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::DCGNLKPJHKF* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::DCGNLKPJHKF*))((::PBYTE)hIl2Cpp + DCGNLKPJHKF_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

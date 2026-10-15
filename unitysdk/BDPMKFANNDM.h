#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class BDPMKFANNDM;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define BDPMKFANNDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD0B90)
#define BDPMKFANNDM_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CCD0E00)
#define BDPMKFANNDM_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CCD0DA0)
#define BDPMKFANNDM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCD0BD0)
#define BDPMKFANNDM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCD0B30)

inline static constexpr unsigned int BDPMKFANNDM_TypeDefinitionIndex = 24088;

	class BDPMKFANNDM : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::System::String*>* BILPBCJAANO; // 0x20
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPMKFANNDM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BDPMKFANNDM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BDPMKFANNDM*))((::PBYTE)hIl2Cpp + BDPMKFANNDM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BDPMKFANNDM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BDPMKFANNDM*))((::PBYTE)hIl2Cpp + BDPMKFANNDM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::BDPMKFANNDM* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::BDPMKFANNDM*))((::PBYTE)hIl2Cpp + BDPMKFANNDM_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::BDPMKFANNDM* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::BDPMKFANNDM*))((::PBYTE)hIl2Cpp + BDPMKFANNDM_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

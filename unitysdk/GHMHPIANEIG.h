#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class GHMHPIANEIG;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define GHMHPIANEIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE4AC90)
#define GHMHPIANEIG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CE4AF20)
#define GHMHPIANEIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CE4AEA0)
#define GHMHPIANEIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE4ACD0)
#define GHMHPIANEIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE4AC10)

inline static constexpr unsigned int GHMHPIANEIG_TypeDefinitionIndex = 22919;

	class GHMHPIANEIG : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::Il2CppArray<::System::String*>* FNKLEPJFCNB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMHPIANEIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GHMHPIANEIG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GHMHPIANEIG*))((::PBYTE)hIl2Cpp + GHMHPIANEIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GHMHPIANEIG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GHMHPIANEIG*))((::PBYTE)hIl2Cpp + GHMHPIANEIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::GHMHPIANEIG* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::GHMHPIANEIG*))((::PBYTE)hIl2Cpp + GHMHPIANEIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::GHMHPIANEIG* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::GHMHPIANEIG*))((::PBYTE)hIl2Cpp + GHMHPIANEIG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

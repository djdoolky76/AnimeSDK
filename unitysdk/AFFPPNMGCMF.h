#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveNodeType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class AFFPPNMGCMF;
class FCOEMCEDLNL;
namespace SimpleJSON { class JSONNode; }

#define AFFPPNMGCMF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC86780)
#define AFFPPNMGCMF_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CC86940)
#define AFFPPNMGCMF_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CC86910)
#define AFFPPNMGCMF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CC86790)
#define AFFPPNMGCMF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CC86750)

inline static constexpr unsigned int AFFPPNMGCMF_TypeDefinitionIndex = 24104;

	class AFFPPNMGCMF : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::IdleLiveNodeType CJCCMAACJDB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFFPPNMGCMF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AFFPPNMGCMF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AFFPPNMGCMF*))((::PBYTE)hIl2Cpp + AFFPPNMGCMF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::AFFPPNMGCMF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AFFPPNMGCMF*))((::PBYTE)hIl2Cpp + AFFPPNMGCMF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::AFFPPNMGCMF* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::AFFPPNMGCMF*))((::PBYTE)hIl2Cpp + AFFPPNMGCMF_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::AFFPPNMGCMF* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::AFFPPNMGCMF*))((::PBYTE)hIl2Cpp + AFFPPNMGCMF_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

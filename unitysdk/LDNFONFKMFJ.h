#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class LDNFONFKMFJ;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define LDNFONFKMFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0E3010)
#define LDNFONFKMFJ_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D0E3280)
#define LDNFONFKMFJ_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D0E3250)
#define LDNFONFKMFJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0E3020)
#define LDNFONFKMFJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0E2FE0)

inline static constexpr unsigned int LDNFONFKMFJ_TypeDefinitionIndex = 22445;

	class LDNFONFKMFJ : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* PJGLBPCJFEK; // 0x20
		::System::String* LLOBIMGOPOP; // 0x28
		::RPG::GameCore::CompareType OOFECODHNPJ; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNFONFKMFJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LDNFONFKMFJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LDNFONFKMFJ*))((::PBYTE)hIl2Cpp + LDNFONFKMFJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LDNFONFKMFJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LDNFONFKMFJ*))((::PBYTE)hIl2Cpp + LDNFONFKMFJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::LDNFONFKMFJ* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::LDNFONFKMFJ*))((::PBYTE)hIl2Cpp + LDNFONFKMFJ_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::LDNFONFKMFJ* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::LDNFONFKMFJ*))((::PBYTE)hIl2Cpp + LDNFONFKMFJ_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class CFBFPOLPBIE;
class FCOEMCEDLNL;
namespace SimpleJSON { class JSONNode; }

#define CFBFPOLPBIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBDC400)
#define CFBFPOLPBIE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DBDC5B0)
#define CFBFPOLPBIE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DBDC580)
#define CFBFPOLPBIE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DBDC410)
#define CFBFPOLPBIE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DBDC3D0)

inline static constexpr unsigned int CFBFPOLPBIE_TypeDefinitionIndex = 19903;

	class CFBFPOLPBIE : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 NNKMEMKEPPA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFBFPOLPBIE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CFBFPOLPBIE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CFBFPOLPBIE*))((::PBYTE)hIl2Cpp + CFBFPOLPBIE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CFBFPOLPBIE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CFBFPOLPBIE*))((::PBYTE)hIl2Cpp + CFBFPOLPBIE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::CFBFPOLPBIE* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::CFBFPOLPBIE*))((::PBYTE)hIl2Cpp + CFBFPOLPBIE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::CFBFPOLPBIE* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::CFBFPOLPBIE*))((::PBYTE)hIl2Cpp + CFBFPOLPBIE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

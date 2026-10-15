#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class OOOHHEMKMFJ;
namespace RPG::GameCore { class JsonEnum; }
namespace SimpleJSON { class JSONNode; }

#define OOOHHEMKMFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2BAEF0)
#define OOOHHEMKMFJ_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D2BB130)
#define OOOHHEMKMFJ_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D2BB0F0)
#define OOOHHEMKMFJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2BAF00)
#define OOOHHEMKMFJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2BAEB0)

inline static constexpr unsigned int OOOHHEMKMFJ_TypeDefinitionIndex = 24149;

	class OOOHHEMKMFJ : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::JsonEnum* DPICNGBHFAC; // 0x20
		::RPG::GameCore::CompareType EHCHAPPGJDJ; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOOHHEMKMFJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OOOHHEMKMFJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OOOHHEMKMFJ*))((::PBYTE)hIl2Cpp + OOOHHEMKMFJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OOOHHEMKMFJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OOOHHEMKMFJ*))((::PBYTE)hIl2Cpp + OOOHHEMKMFJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::OOOHHEMKMFJ* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::OOOHHEMKMFJ*))((::PBYTE)hIl2Cpp + OOOHHEMKMFJ_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::OOOHHEMKMFJ* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::OOOHHEMKMFJ*))((::PBYTE)hIl2Cpp + OOOHHEMKMFJ_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

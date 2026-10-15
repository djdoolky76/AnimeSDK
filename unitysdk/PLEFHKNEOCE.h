#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class PLEFHKNEOCE;
namespace SimpleJSON { class JSONNode; }

#define PLEFHKNEOCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2FF070)
#define PLEFHKNEOCE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D2FF1F0)
#define PLEFHKNEOCE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D2FF1C0)
#define PLEFHKNEOCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2FF080)
#define PLEFHKNEOCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2FF040)

inline static constexpr unsigned int PLEFHKNEOCE_TypeDefinitionIndex = 22108;

	class PLEFHKNEOCE : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEFHKNEOCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PLEFHKNEOCE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PLEFHKNEOCE*))((::PBYTE)hIl2Cpp + PLEFHKNEOCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PLEFHKNEOCE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PLEFHKNEOCE*))((::PBYTE)hIl2Cpp + PLEFHKNEOCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::PLEFHKNEOCE* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::PLEFHKNEOCE*))((::PBYTE)hIl2Cpp + PLEFHKNEOCE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::PLEFHKNEOCE* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::PLEFHKNEOCE*))((::PBYTE)hIl2Cpp + PLEFHKNEOCE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class EMGMPMKEKOD;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define EMGMPMKEKOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED06C30)
#define EMGMPMKEKOD_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1ED06E10)
#define EMGMPMKEKOD_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1ED06DE0)
#define EMGMPMKEKOD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ED06C40)
#define EMGMPMKEKOD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ED06C00)

inline static constexpr unsigned int EMGMPMKEKOD_TypeDefinitionIndex = 23820;

	class EMGMPMKEKOD : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ACCJKGEKHKP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGMPMKEKOD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EMGMPMKEKOD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EMGMPMKEKOD*))((::PBYTE)hIl2Cpp + EMGMPMKEKOD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EMGMPMKEKOD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EMGMPMKEKOD*))((::PBYTE)hIl2Cpp + EMGMPMKEKOD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::EMGMPMKEKOD* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::EMGMPMKEKOD*))((::PBYTE)hIl2Cpp + EMGMPMKEKOD_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::EMGMPMKEKOD* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::EMGMPMKEKOD*))((::PBYTE)hIl2Cpp + EMGMPMKEKOD_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class DFFLGKHHLLH;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define DFFLGKHHLLH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEE1B40)
#define DFFLGKHHLLH_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DEE1DB0)
#define DFFLGKHHLLH_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DEE1D50)
#define DFFLGKHHLLH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DEE1B80)
#define DFFLGKHHLLH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DEE1AE0)

inline static constexpr unsigned int DFFLGKHHLLH_TypeDefinitionIndex = 24565;

	class DFFLGKHHLLH : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::Il2CppArray<::RPG::GameCore::ILBattleCharacterLocation>* LDAOPBMBACB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFLGKHHLLH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DFFLGKHHLLH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DFFLGKHHLLH*))((::PBYTE)hIl2Cpp + DFFLGKHHLLH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DFFLGKHHLLH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DFFLGKHHLLH*))((::PBYTE)hIl2Cpp + DFFLGKHHLLH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::DFFLGKHHLLH* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::DFFLGKHHLLH*))((::PBYTE)hIl2Cpp + DFFLGKHHLLH_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::DFFLGKHHLLH* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::DFFLGKHHLLH*))((::PBYTE)hIl2Cpp + DFFLGKHHLLH_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

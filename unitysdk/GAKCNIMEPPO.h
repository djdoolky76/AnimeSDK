#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class GAKCNIMEPPO;
namespace SimpleJSON { class JSONNode; }

#define GAKCNIMEPPO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDF2590)
#define GAKCNIMEPPO_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CDF28C0)
#define GAKCNIMEPPO_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CDF2890)
#define GAKCNIMEPPO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDF25A0)
#define GAKCNIMEPPO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDF2560)

inline static constexpr unsigned int GAKCNIMEPPO_TypeDefinitionIndex = 24309;

	class GAKCNIMEPPO : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Int32 AGFMMBCEPAO; // 0x20
		::System::UInt32 OGAAHLLDJHC; // 0x24
		::System::Int32 EBJKJAGJGPK; // 0x28
		::System::Int32 HBLOBGINFBM; // 0x2C
		::System::Int32 GAOAMKBNDPN; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKCNIMEPPO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GAKCNIMEPPO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GAKCNIMEPPO*))((::PBYTE)hIl2Cpp + GAKCNIMEPPO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GAKCNIMEPPO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GAKCNIMEPPO*))((::PBYTE)hIl2Cpp + GAKCNIMEPPO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::GAKCNIMEPPO* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::GAKCNIMEPPO*))((::PBYTE)hIl2Cpp + GAKCNIMEPPO_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::GAKCNIMEPPO* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::GAKCNIMEPPO*))((::PBYTE)hIl2Cpp + GAKCNIMEPPO_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

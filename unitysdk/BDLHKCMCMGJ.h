#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DesignerUserPrefsDomain.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class BDLHKCMCMGJ;
class FCOEMCEDLNL;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define BDLHKCMCMGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCFD560)
#define BDLHKCMCMGJ_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CCFD830)
#define BDLHKCMCMGJ_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CCFD800)
#define BDLHKCMCMGJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCFD570)
#define BDLHKCMCMGJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCFD530)

inline static constexpr unsigned int BDLHKCMCMGJ_TypeDefinitionIndex = 21299;

	class BDLHKCMCMGJ : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* BFLIFKBEOPJ; // 0x20
		::RPG::GameCore::DesignerUserPrefsDomain POIELLDDNFM; // 0x28
		::System::Boolean JJODEAGKDOH; // 0x2C
		::System::Byte _padding0[0x3];
		::System::UInt32 DPICNGBHFAC; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLHKCMCMGJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BDLHKCMCMGJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BDLHKCMCMGJ*))((::PBYTE)hIl2Cpp + BDLHKCMCMGJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BDLHKCMCMGJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BDLHKCMCMGJ*))((::PBYTE)hIl2Cpp + BDLHKCMCMGJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::BDLHKCMCMGJ* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::BDLHKCMCMGJ*))((::PBYTE)hIl2Cpp + BDLHKCMCMGJ_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::BDLHKCMCMGJ* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::BDLHKCMCMGJ*))((::PBYTE)hIl2Cpp + BDLHKCMCMGJ_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

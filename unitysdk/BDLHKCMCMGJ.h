#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DesignerUserPrefsDomain.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class BDLHKCMCMGJ;
class FCOEMCEDLNL;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define BDLHKCMCMGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCCF3E0)
#define BDLHKCMCMGJ_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CCCF6B0)
#define BDLHKCMCMGJ_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CCCF680)
#define BDLHKCMCMGJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCCF3F0)
#define BDLHKCMCMGJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCCF3B0)

inline static constexpr unsigned int BDLHKCMCMGJ_TypeDefinitionIndex = 21299;

	class BDLHKCMCMGJ : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* BFLIFKBEOPJ; // 0x20
		::System::Boolean JJODEAGKDOH; // 0x28
		::System::Byte _padding0[0x3];
		::RPG::GameCore::DesignerUserPrefsDomain POIELLDDNFM; // 0x2C
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

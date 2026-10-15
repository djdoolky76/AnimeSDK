#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class IMNNDJAAKBC;
namespace SimpleJSON { class JSONNode; }

#define IMNNDJAAKBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF24020)
#define IMNNDJAAKBC_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CF241A0)
#define IMNNDJAAKBC_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CF24170)
#define IMNNDJAAKBC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CF24030)
#define IMNNDJAAKBC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CF23FF0)

inline static constexpr unsigned int IMNNDJAAKBC_TypeDefinitionIndex = 22566;

	class IMNNDJAAKBC : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMNNDJAAKBC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IMNNDJAAKBC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IMNNDJAAKBC*))((::PBYTE)hIl2Cpp + IMNNDJAAKBC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IMNNDJAAKBC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IMNNDJAAKBC*))((::PBYTE)hIl2Cpp + IMNNDJAAKBC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::IMNNDJAAKBC* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::IMNNDJAAKBC*))((::PBYTE)hIl2Cpp + IMNNDJAAKBC_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::IMNNDJAAKBC* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::IMNNDJAAKBC*))((::PBYTE)hIl2Cpp + IMNNDJAAKBC_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

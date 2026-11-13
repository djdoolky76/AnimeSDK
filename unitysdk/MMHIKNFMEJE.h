#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class MMHIKNFMEJE;
namespace RPG::GameCore { class JsonEnum; }
namespace SimpleJSON { class JSONNode; }

#define MMHIKNFMEJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8760E0)
#define MMHIKNFMEJE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E8762E0)
#define MMHIKNFMEJE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E876290)
#define MMHIKNFMEJE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E8760F0)
#define MMHIKNFMEJE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E876090)

inline static constexpr unsigned int MMHIKNFMEJE_TypeDefinitionIndex = 22209;

	class MMHIKNFMEJE : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::JsonEnum* LAOACNPDOLD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHIKNFMEJE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MMHIKNFMEJE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MMHIKNFMEJE*))((::PBYTE)hIl2Cpp + MMHIKNFMEJE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MMHIKNFMEJE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MMHIKNFMEJE*))((::PBYTE)hIl2Cpp + MMHIKNFMEJE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::MMHIKNFMEJE* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::MMHIKNFMEJE*))((::PBYTE)hIl2Cpp + MMHIKNFMEJE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::MMHIKNFMEJE* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::MMHIKNFMEJE*))((::PBYTE)hIl2Cpp + MMHIKNFMEJE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class MJCOCAMJABP;
namespace SimpleJSON { class JSONNode; }

#define MJCOCAMJABP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3B5820)
#define MJCOCAMJABP_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E3B59E0)
#define MJCOCAMJABP_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E3B59B0)
#define MJCOCAMJABP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E3B5830)
#define MJCOCAMJABP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E3B57F0)

inline static constexpr unsigned int MJCOCAMJABP_TypeDefinitionIndex = 24666;

	class MJCOCAMJABP : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::EnumStatusType KNMODJGALNN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCOCAMJABP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MJCOCAMJABP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MJCOCAMJABP*))((::PBYTE)hIl2Cpp + MJCOCAMJABP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MJCOCAMJABP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MJCOCAMJABP*))((::PBYTE)hIl2Cpp + MJCOCAMJABP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::MJCOCAMJABP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::MJCOCAMJABP*))((::PBYTE)hIl2Cpp + MJCOCAMJABP_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::MJCOCAMJABP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::MJCOCAMJABP*))((::PBYTE)hIl2Cpp + MJCOCAMJABP_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class DLDHCDCAEPM;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define DLDHCDCAEPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD0F270)
#define DLDHCDCAEPM_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CD0F410)
#define DLDHCDCAEPM_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CD0F3E0)
#define DLDHCDCAEPM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD0F280)
#define DLDHCDCAEPM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD0F240)

inline static constexpr unsigned int DLDHCDCAEPM_TypeDefinitionIndex = 24168;

	class DLDHCDCAEPM : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicString* GEIGNKLEOBD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLDHCDCAEPM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DLDHCDCAEPM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DLDHCDCAEPM*))((::PBYTE)hIl2Cpp + DLDHCDCAEPM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DLDHCDCAEPM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DLDHCDCAEPM*))((::PBYTE)hIl2Cpp + DLDHCDCAEPM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::DLDHCDCAEPM* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::DLDHCDCAEPM*))((::PBYTE)hIl2Cpp + DLDHCDCAEPM_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::DLDHCDCAEPM* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::DLDHCDCAEPM*))((::PBYTE)hIl2Cpp + DLDHCDCAEPM_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

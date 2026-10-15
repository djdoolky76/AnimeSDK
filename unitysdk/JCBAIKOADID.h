#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class JCBAIKOADID;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define JCBAIKOADID_CTOR_OFFSET UNITYSDK_OFFSET(0x1CFE7560)
#define JCBAIKOADID_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CFE7790)
#define JCBAIKOADID_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CFE7760)
#define JCBAIKOADID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CFE7570)
#define JCBAIKOADID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CFE7530)

inline static constexpr unsigned int JCBAIKOADID_TypeDefinitionIndex = 23372;

	class JCBAIKOADID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* DPICNGBHFAC; // 0x20
		::RPG::GameCore::CompareType EHCHAPPGJDJ; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCBAIKOADID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JCBAIKOADID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JCBAIKOADID*))((::PBYTE)hIl2Cpp + JCBAIKOADID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JCBAIKOADID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JCBAIKOADID*))((::PBYTE)hIl2Cpp + JCBAIKOADID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::JCBAIKOADID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::JCBAIKOADID*))((::PBYTE)hIl2Cpp + JCBAIKOADID_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::JCBAIKOADID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::JCBAIKOADID*))((::PBYTE)hIl2Cpp + JCBAIKOADID_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

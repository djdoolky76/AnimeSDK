#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class HPCOJDJAHOG;
namespace SimpleJSON { class JSONNode; }

#define HPCOJDJAHOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E69C450)
#define HPCOJDJAHOG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E69C5D0)
#define HPCOJDJAHOG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E69C5A0)
#define HPCOJDJAHOG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E69C460)
#define HPCOJDJAHOG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E69C420)

inline static constexpr unsigned int HPCOJDJAHOG_TypeDefinitionIndex = 24662;

	class HPCOJDJAHOG : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCOJDJAHOG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HPCOJDJAHOG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HPCOJDJAHOG*))((::PBYTE)hIl2Cpp + HPCOJDJAHOG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HPCOJDJAHOG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HPCOJDJAHOG*))((::PBYTE)hIl2Cpp + HPCOJDJAHOG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::HPCOJDJAHOG* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::HPCOJDJAHOG*))((::PBYTE)hIl2Cpp + HPCOJDJAHOG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::HPCOJDJAHOG* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::HPCOJDJAHOG*))((::PBYTE)hIl2Cpp + HPCOJDJAHOG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

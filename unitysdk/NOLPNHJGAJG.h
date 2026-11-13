#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class NOLPNHJGAJG;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define NOLPNHJGAJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5ECD50)
#define NOLPNHJGAJG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E5ECF10)
#define NOLPNHJGAJG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E5ECEE0)
#define NOLPNHJGAJG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E5ECD60)
#define NOLPNHJGAJG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E5ECD20)

inline static constexpr unsigned int NOLPNHJGAJG_TypeDefinitionIndex = 21859;

	class NOLPNHJGAJG : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* MINCCILIJNN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLPNHJGAJG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NOLPNHJGAJG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NOLPNHJGAJG*))((::PBYTE)hIl2Cpp + NOLPNHJGAJG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NOLPNHJGAJG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NOLPNHJGAJG*))((::PBYTE)hIl2Cpp + NOLPNHJGAJG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::NOLPNHJGAJG* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::NOLPNHJGAJG*))((::PBYTE)hIl2Cpp + NOLPNHJGAJG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::NOLPNHJGAJG* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::NOLPNHJGAJG*))((::PBYTE)hIl2Cpp + NOLPNHJGAJG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

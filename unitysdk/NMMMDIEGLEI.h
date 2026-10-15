#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class NMMMDIEGLEI;
namespace SimpleJSON { class JSONNode; }

#define NMMMDIEGLEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D20B6B0)
#define NMMMDIEGLEI_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D20B880)
#define NMMMDIEGLEI_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D20B850)
#define NMMMDIEGLEI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D20B6C0)
#define NMMMDIEGLEI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D20B680)

inline static constexpr unsigned int NMMMDIEGLEI_TypeDefinitionIndex = 21567;

	class NMMMDIEGLEI : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* NKNOJMBDFGD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMMDIEGLEI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NMMMDIEGLEI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NMMMDIEGLEI*))((::PBYTE)hIl2Cpp + NMMMDIEGLEI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NMMMDIEGLEI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NMMMDIEGLEI*))((::PBYTE)hIl2Cpp + NMMMDIEGLEI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::NMMMDIEGLEI* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::NMMMDIEGLEI*))((::PBYTE)hIl2Cpp + NMMMDIEGLEI_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::NMMMDIEGLEI* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::NMMMDIEGLEI*))((::PBYTE)hIl2Cpp + NMMMDIEGLEI_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

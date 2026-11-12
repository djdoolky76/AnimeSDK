#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class NMMMDIEGLEI;
namespace SimpleJSON { class JSONNode; }

#define NMMMDIEGLEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E43E380)
#define NMMMDIEGLEI_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E43E550)
#define NMMMDIEGLEI_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E43E520)
#define NMMMDIEGLEI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E43E390)
#define NMMMDIEGLEI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E43E350)

inline static constexpr unsigned int NMMMDIEGLEI_TypeDefinitionIndex = 21955;

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

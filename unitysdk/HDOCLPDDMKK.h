#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class HDOCLPDDMKK;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define HDOCLPDDMKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE68D40)
#define HDOCLPDDMKK_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CE68F00)
#define HDOCLPDDMKK_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CE68ED0)
#define HDOCLPDDMKK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE68D50)
#define HDOCLPDDMKK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE68D10)

inline static constexpr unsigned int HDOCLPDDMKK_TypeDefinitionIndex = 24073;

	class HDOCLPDDMKK : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOCLPDDMKK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HDOCLPDDMKK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HDOCLPDDMKK*))((::PBYTE)hIl2Cpp + HDOCLPDDMKK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HDOCLPDDMKK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HDOCLPDDMKK*))((::PBYTE)hIl2Cpp + HDOCLPDDMKK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::HDOCLPDDMKK* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::HDOCLPDDMKK*))((::PBYTE)hIl2Cpp + HDOCLPDDMKK_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::HDOCLPDDMKK* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::HDOCLPDDMKK*))((::PBYTE)hIl2Cpp + HDOCLPDDMKK_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

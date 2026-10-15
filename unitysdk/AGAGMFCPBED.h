#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class AGAGMFCPBED;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define AGAGMFCPBED_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB82A0)
#define AGAGMFCPBED_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CCB84E0)
#define AGAGMFCPBED_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CCB84B0)
#define AGAGMFCPBED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCB82B0)
#define AGAGMFCPBED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCB8270)

	class AGAGMFCPBED : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::FormatString FHLJGDGMMHK; // 0x20
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAGMFCPBED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AGAGMFCPBED* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AGAGMFCPBED*))((::PBYTE)hIl2Cpp + AGAGMFCPBED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::AGAGMFCPBED* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AGAGMFCPBED*))((::PBYTE)hIl2Cpp + AGAGMFCPBED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::AGAGMFCPBED* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::AGAGMFCPBED*))((::PBYTE)hIl2Cpp + AGAGMFCPBED_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::AGAGMFCPBED* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::AGAGMFCPBED*))((::PBYTE)hIl2Cpp + AGAGMFCPBED_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

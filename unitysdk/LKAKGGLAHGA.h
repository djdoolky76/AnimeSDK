#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class LKAKGGLAHGA;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define LKAKGGLAHGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0D99B0)
#define LKAKGGLAHGA_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D0D9BD0)
#define LKAKGGLAHGA_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D0D9B70)
#define LKAKGGLAHGA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0D99F0)
#define LKAKGGLAHGA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0D9950)

inline static constexpr unsigned int LKAKGGLAHGA_TypeDefinitionIndex = 23018;

	class LKAKGGLAHGA : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKAKGGLAHGA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LKAKGGLAHGA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LKAKGGLAHGA*))((::PBYTE)hIl2Cpp + LKAKGGLAHGA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LKAKGGLAHGA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LKAKGGLAHGA*))((::PBYTE)hIl2Cpp + LKAKGGLAHGA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::LKAKGGLAHGA* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::LKAKGGLAHGA*))((::PBYTE)hIl2Cpp + LKAKGGLAHGA_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::LKAKGGLAHGA* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::LKAKGGLAHGA*))((::PBYTE)hIl2Cpp + LKAKGGLAHGA_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};

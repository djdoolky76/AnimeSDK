#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GBCBJOBGHNO;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define GBCBJOBGHNO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA45E20)
#define GBCBJOBGHNO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EA45E30)
#define GBCBJOBGHNO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA45DF0)

inline static constexpr unsigned int GBCBJOBGHNO_TypeDefinitionIndex = 23041;

	class GBCBJOBGHNO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* AFDNFCBCFBF; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCBJOBGHNO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GBCBJOBGHNO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GBCBJOBGHNO*))((::PBYTE)hIl2Cpp + GBCBJOBGHNO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GBCBJOBGHNO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GBCBJOBGHNO*))((::PBYTE)hIl2Cpp + GBCBJOBGHNO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

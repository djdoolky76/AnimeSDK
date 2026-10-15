#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GDBOEBBNHLP;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define GDBOEBBNHLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE2BF20)
#define GDBOEBBNHLP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE2BF30)
#define GDBOEBBNHLP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE2BEE0)

inline static constexpr unsigned int GDBOEBBNHLP_TypeDefinitionIndex = 22786;

	class GDBOEBBNHLP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::RPG::GameCore::DynamicFloat* AHCBJENOJHJ; // 0x20
		::System::Boolean NLIAEJNBEKP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBOEBBNHLP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GDBOEBBNHLP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GDBOEBBNHLP*))((::PBYTE)hIl2Cpp + GDBOEBBNHLP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GDBOEBBNHLP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GDBOEBBNHLP*))((::PBYTE)hIl2Cpp + GDBOEBBNHLP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

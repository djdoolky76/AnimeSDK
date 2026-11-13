#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EFLHKPDPJNF;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define EFLHKPDPJNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F103A70)
#define EFLHKPDPJNF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F103A80)
#define EFLHKPDPJNF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F103A40)

inline static constexpr unsigned int EFLHKPDPJNF_TypeDefinitionIndex = 24206;

	class EFLHKPDPJNF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GJEAIKIINML; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::RPG::GameCore::FormatString ECNKCCNJNPJ; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLHKPDPJNF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EFLHKPDPJNF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EFLHKPDPJNF*))((::PBYTE)hIl2Cpp + EFLHKPDPJNF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EFLHKPDPJNF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EFLHKPDPJNF*))((::PBYTE)hIl2Cpp + EFLHKPDPJNF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

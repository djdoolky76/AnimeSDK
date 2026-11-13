#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KEIMDKKCGNK;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define KEIMDKKCGNK_CTOR_OFFSET UNITYSDK_OFFSET(0x1F414A00)
#define KEIMDKKCGNK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F414A10)
#define KEIMDKKCGNK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F4149C0)

inline static constexpr unsigned int KEIMDKKCGNK_TypeDefinitionIndex = 24650;

	class KEIMDKKCGNK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* KJDKAOPEMFF; // 0x20
		::RPG::GameCore::DynamicFloat* DIFDKADNNDK; // 0x28
		::RPG::GameCore::EnumStatusType LMIODAHFGOA; // 0x30
		::System::Boolean EOAFKHDEJCO; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEIMDKKCGNK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KEIMDKKCGNK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KEIMDKKCGNK*))((::PBYTE)hIl2Cpp + KEIMDKKCGNK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KEIMDKKCGNK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KEIMDKKCGNK*))((::PBYTE)hIl2Cpp + KEIMDKKCGNK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

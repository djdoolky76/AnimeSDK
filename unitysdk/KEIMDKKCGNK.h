#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KEIMDKKCGNK;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define KEIMDKKCGNK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D05C460)
#define KEIMDKKCGNK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D05C470)
#define KEIMDKKCGNK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D05C420)

inline static constexpr unsigned int KEIMDKKCGNK_TypeDefinitionIndex = 24191;

	class KEIMDKKCGNK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* KJDKAOPEMFF; // 0x18
		::RPG::GameCore::DynamicFloat* DIFDKADNNDK; // 0x20
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
		::System::Boolean EOAFKHDEJCO; // 0x30
		::System::Byte _padding0[0x3];
		::RPG::GameCore::EnumStatusType LMIODAHFGOA; // 0x34
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

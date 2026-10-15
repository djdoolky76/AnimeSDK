#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DispelOrder.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class FFEICAJPLFC;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define FFEICAJPLFC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB7570)
#define FFEICAJPLFC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDB7590)
#define FFEICAJPLFC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDB7530)

inline static constexpr unsigned int FFEICAJPLFC_TypeDefinitionIndex = 24192;

	class FFEICAJPLFC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* KJDKAOPEMFF; // 0x20
		::RPG::GameCore::DynamicFloat* DIFDKADNNDK; // 0x28
		::System::String* GCINJNJBNLJ; // 0x30
		::RPG::GameCore::DispelOrder FLBGELFEBCK; // 0x38
		::RPG::GameCore::EnumStatusType LMIODAHFGOA; // 0x3C
		::System::Boolean HDCDMFMCGMJ; // 0x40
		::System::Boolean KJIFOFPNLNN; // 0x41
		::System::Boolean EOAFKHDEJCO; // 0x42
		::System::Boolean AGCFPAIEKPL; // 0x43
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEICAJPLFC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FFEICAJPLFC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FFEICAJPLFC*))((::PBYTE)hIl2Cpp + FFEICAJPLFC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FFEICAJPLFC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FFEICAJPLFC*))((::PBYTE)hIl2Cpp + FFEICAJPLFC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

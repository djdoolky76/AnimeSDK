#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MOAKENFIBPE;
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class RtAttackData; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define MOAKENFIBPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1DBE60)
#define MOAKENFIBPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1DBED0)
#define MOAKENFIBPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1DBDD0)

inline static constexpr unsigned int MOAKENFIBPE_TypeDefinitionIndex = 24163;

	class MOAKENFIBPE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CCOLBNIOBLG; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* KBCHNLAAKLL; // 0x20
		::RPG::GameCore::DamageDisplayData* AIMHHKODFJN; // 0x28
		::RPG::GameCore::DynamicFloat* FCNMJPINEOB; // 0x30
		::RPG::GameCore::TargetEvaluator* DNOMOIIFDIN; // 0x38
		::RPG::GameCore::TargetEvaluator* JGAFNEFOLLO; // 0x40
		::RPG::GameCore::RtAttackData* GADPAGHLPLC; // 0x48
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x50
		::System::String* AKFCLJOMGHO; // 0x58
		::System::Boolean JFPGICNIGCJ; // 0x60
		::System::Boolean ABCHCGCMIFL; // 0x61
		::System::Boolean HBIJNLPFNKL; // 0x62
		::System::Boolean BONOECIJPJM; // 0x63
		::RPG::GameCore::AttackType HIFKEKCELFB; // 0x64
		::System::Boolean BLHGAFKJDCD; // 0x68
		::System::Boolean DMMAOLBOHDI; // 0x69
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOAKENFIBPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MOAKENFIBPE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MOAKENFIBPE*))((::PBYTE)hIl2Cpp + MOAKENFIBPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MOAKENFIBPE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MOAKENFIBPE*))((::PBYTE)hIl2Cpp + MOAKENFIBPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

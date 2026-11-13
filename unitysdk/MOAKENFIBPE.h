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

#define MOAKENFIBPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E880A50)
#define MOAKENFIBPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E880AC0)
#define MOAKENFIBPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8809C0)

inline static constexpr unsigned int MOAKENFIBPE_TypeDefinitionIndex = 24622;

	class MOAKENFIBPE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AKFCLJOMGHO; // 0x18
		::RPG::GameCore::DynamicFloat* FCNMJPINEOB; // 0x20
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
		::RPG::GameCore::TargetEvaluator* DNOMOIIFDIN; // 0x30
		::RPG::GameCore::RtAttackData* GADPAGHLPLC; // 0x38
		::RPG::GameCore::TargetEvaluator* JGAFNEFOLLO; // 0x40
		::RPG::GameCore::DamageDisplayData* AIMHHKODFJN; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* KBCHNLAAKLL; // 0x50
		::System::String* CCOLBNIOBLG; // 0x58
		::RPG::GameCore::AttackType HIFKEKCELFB; // 0x60
		::System::Boolean BONOECIJPJM; // 0x64
		::System::Boolean DMMAOLBOHDI; // 0x65
		::System::Boolean HBIJNLPFNKL; // 0x66
		::System::Boolean JFPGICNIGCJ; // 0x67
		::System::Boolean BLHGAFKJDCD; // 0x68
		::System::Boolean ABCHCGCMIFL; // 0x69
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/RPG/GameCore/RtCharacterState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class ACGNFELKLLJ;
class FCOEMCEDLNL;
class FPOFOJLALIE;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define ACGNFELKLLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC77C20)
#define ACGNFELKLLJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CC77D90)
#define ACGNFELKLLJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CC77BE0)

inline static constexpr unsigned int ACGNFELKLLJ_TypeDefinitionIndex = 24086;

	class ACGNFELKLLJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* CCAOGMEFNLB; // 0x18
		::RPG::GameCore::DynamicFloat* GCJMFBKLGHI; // 0x20
		::RPG::GameCore::DynamicFloat* NNNAGHMNFKB; // 0x28
		::RPG::GameCore::DynamicFloat* FMHMAHCNDGB; // 0x30
		::System::String* PODFJDMHFMK; // 0x38
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x40
		::System::String* ONOAKCNFMBC; // 0x48
		::Il2CppArray<::FPOFOJLALIE*>* FBGMBABKNNN; // 0x50
		::RPG::GameCore::FixVec3 DCJFFIAPJME; // 0x58
		::RPG::GameCore::RtCharacterState OKKKNMDDMMP; // 0x70
		::System::Boolean JJOMBGLMEBL; // 0x74
		::System::Boolean PPFBBBJIODA; // 0x75
		::System::Boolean NKNCKHBHOHC; // 0x76
		::System::Boolean CHHHLILDOBP; // 0x77
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGNFELKLLJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ACGNFELKLLJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ACGNFELKLLJ*))((::PBYTE)hIl2Cpp + ACGNFELKLLJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ACGNFELKLLJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ACGNFELKLLJ*))((::PBYTE)hIl2Cpp + ACGNFELKLLJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

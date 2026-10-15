#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtCharacterState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MLNJPPDKHHK;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define MLNJPPDKHHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D19F340)
#define MLNJPPDKHHK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D19F4A0)
#define MLNJPPDKHHK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D19F300)

inline static constexpr unsigned int MLNJPPDKHHK_TypeDefinitionIndex = 24083;

	class MLNJPPDKHHK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GCJMFBKLGHI; // 0x18
		::RPG::GameCore::DynamicFloat* CCAOGMEFNLB; // 0x20
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
		::RPG::GameCore::DynamicFloat* NNNAGHMNFKB; // 0x30
		::RPG::GameCore::DynamicFloat* FMHMAHCNDGB; // 0x38
		::System::String* PODFJDMHFMK; // 0x40
		::System::Boolean NKNCKHBHOHC; // 0x48
		::System::Boolean BNIMJJNOLAI; // 0x49
		::System::Boolean CHHHLILDOBP; // 0x4A
		::System::Byte _padding0[0x1];
		::RPG::GameCore::RtCharacterState OKKKNMDDMMP; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNJPPDKHHK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MLNJPPDKHHK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MLNJPPDKHHK*))((::PBYTE)hIl2Cpp + MLNJPPDKHHK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MLNJPPDKHHK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MLNJPPDKHHK*))((::PBYTE)hIl2Cpp + MLNJPPDKHHK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

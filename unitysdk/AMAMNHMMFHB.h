#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class HOIGPAEEAHD;
namespace RPG::GameCore { class SetBattleRougeGoalProgress; }
namespace RPG::GameCore { class TaskContext; }

#define AMAMNHMMFHB_CTOR_OFFSET UNITYSDK_OFFSET(0x155742E0)
#define AMAMNHMMFHB_DCIPIIAJJMM_OFFSET UNITYSDK_OFFSET(0x155744D0)
#define AMAMNHMMFHB_KMEIBFJEMPO_OFFSET UNITYSDK_OFFSET(0x15574580)
#define AMAMNHMMFHB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15574310)

inline static constexpr unsigned int AMAMNHMMFHB_TypeDefinitionIndex = 58522;

	class AMAMNHMMFHB
	{
	public:
		::HOIGPAEEAHD* CHLKHPLPGLJ; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleRougeGoalProgress* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleRougeGoalProgress*))((::PBYTE)hIl2Cpp + AMAMNHMMFHB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMAMNHMMFHB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean DCIPIIAJJMM(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMAMNHMMFHB_DCIPIIAJJMM_OFFSET))(this, a1);
		}

		::System::Void KMEIBFJEMPO(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + AMAMNHMMFHB_KMEIBFJEMPO_OFFSET))(this, a1, a2);
		}

	};

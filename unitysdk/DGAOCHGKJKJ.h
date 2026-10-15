#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillLayoutKey.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DGAOCHGKJKJ;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DGAOCHGKJKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD1B6A0)
#define DGAOCHGKJKJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD1B6B0)
#define DGAOCHGKJKJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD1B670)

	class DGAOCHGKJKJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SkillLayoutKey, ::RPG::GameCore::ControlSkillType>* GHOBEHHNMEC; // 0x20
		::System::Boolean JHLNDMMBMJP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGAOCHGKJKJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DGAOCHGKJKJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DGAOCHGKJKJ*))((::PBYTE)hIl2Cpp + DGAOCHGKJKJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DGAOCHGKJKJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DGAOCHGKJKJ*))((::PBYTE)hIl2Cpp + DGAOCHGKJKJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

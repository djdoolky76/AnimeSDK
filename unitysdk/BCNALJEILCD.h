#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BCNALJEILCD;
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateRinCaseBoardEffectInfo; }
namespace RPG::GameCore { class FateRinCaseBoardTeamRelationInfo; }

#define BCNALJEILCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCCC5D0)
#define BCNALJEILCD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCCC5F0)
#define BCNALJEILCD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCCC580)

inline static constexpr unsigned int BCNALJEILCD_TypeDefinitionIndex = 19929;

	class BCNALJEILCD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FateRinCaseBoardEffectInfo*>* LDCJONHGDAN; // 0x18
		::RPG::GameCore::FateRinCaseBoardTeamRelationInfo* NLKANDACMLF; // 0x20
		::System::Single NCMIKMNHBHC; // 0x28
		::System::Single KJGIGGFHKEA; // 0x2C
		::System::Boolean GNDCCBNILML; // 0x30
		::System::Boolean EMFAOBHNLBF; // 0x31
		::System::Byte _padding0[0x2];
		::System::Single IEHPFADHJFD; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCNALJEILCD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BCNALJEILCD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BCNALJEILCD*))((::PBYTE)hIl2Cpp + BCNALJEILCD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BCNALJEILCD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BCNALJEILCD*))((::PBYTE)hIl2Cpp + BCNALJEILCD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HFFMLLBLAMH;
namespace RPG::GameCore { class FateRinCaseBoardBaseTeamInfo; }
namespace RPG::GameCore { class FateRinCaseBoardEffectInfo; }

#define HFFMLLBLAMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E07D5D0)
#define HFFMLLBLAMH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E07D5E0)
#define HFFMLLBLAMH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E07D5A0)

inline static constexpr unsigned int HFFMLLBLAMH_TypeDefinitionIndex = 20257;

	class HFFMLLBLAMH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FateRinCaseBoardEffectInfo*>* LDCJONHGDAN; // 0x18
		::RPG::GameCore::FateRinCaseBoardBaseTeamInfo* BJODJNFGMCB; // 0x20
		::System::Boolean GNDCCBNILML; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFMLLBLAMH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HFFMLLBLAMH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HFFMLLBLAMH*))((::PBYTE)hIl2Cpp + HFFMLLBLAMH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HFFMLLBLAMH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HFFMLLBLAMH*))((::PBYTE)hIl2Cpp + HFFMLLBLAMH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

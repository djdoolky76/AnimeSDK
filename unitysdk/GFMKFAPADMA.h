#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GFMKFAPADMA;
namespace RPG::Client { class LimaoNewsDutyCheckGreetingBranch; }

#define GFMKFAPADMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E631670)
#define GFMKFAPADMA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E631680)
#define GFMKFAPADMA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E631640)

inline static constexpr unsigned int GFMKFAPADMA_TypeDefinitionIndex = 10255;

	class GFMKFAPADMA : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::Client::LimaoNewsDutyCheckGreetingBranch*>* LNABHDFODJD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMKFAPADMA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GFMKFAPADMA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GFMKFAPADMA*))((::PBYTE)hIl2Cpp + GFMKFAPADMA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GFMKFAPADMA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GFMKFAPADMA*))((::PBYTE)hIl2Cpp + GFMKFAPADMA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

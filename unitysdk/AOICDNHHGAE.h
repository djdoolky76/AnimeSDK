#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class AOICDNHHGAE;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define AOICDNHHGAE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCEA3B0)
#define AOICDNHHGAE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCEA3C0)
#define AOICDNHHGAE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCEA380)

	class AOICDNHHGAE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* IFBAFKFODAA; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OJJADIPMAGO; // 0x20
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOICDNHHGAE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AOICDNHHGAE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AOICDNHHGAE*))((::PBYTE)hIl2Cpp + AOICDNHHGAE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::AOICDNHHGAE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AOICDNHHGAE*))((::PBYTE)hIl2Cpp + AOICDNHHGAE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

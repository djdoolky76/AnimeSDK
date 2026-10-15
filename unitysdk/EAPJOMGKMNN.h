#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EAPJOMGKMNN;
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesTargetConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define EAPJOMGKMNN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD5E280)
#define EAPJOMGKMNN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD5E290)
#define EAPJOMGKMNN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD5E250)

	class EAPJOMGKMNN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ChenLingFesTargetConfig* PNMNKFNNKEI; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* KAKEMNLIPIH; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* MAONBNHOPBJ; // 0x28
		::System::Boolean ALJKBHGDOEK; // 0x30
		::System::Boolean IMMHPCNFCCG; // 0x31
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAPJOMGKMNN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EAPJOMGKMNN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EAPJOMGKMNN*))((::PBYTE)hIl2Cpp + EAPJOMGKMNN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EAPJOMGKMNN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EAPJOMGKMNN*))((::PBYTE)hIl2Cpp + EAPJOMGKMNN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

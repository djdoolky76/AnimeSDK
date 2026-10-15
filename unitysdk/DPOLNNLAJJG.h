#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DPOLNNLAJJG;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }

#define DPOLNNLAJJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD5B080)
#define DPOLNNLAJJG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD5B090)
#define DPOLNNLAJJG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD5B050)

	class DPOLNNLAJJG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* PAHHNMLMNLN; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* JPEEKAAOCHI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOLNNLAJJG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DPOLNNLAJJG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DPOLNNLAJJG*))((::PBYTE)hIl2Cpp + DPOLNNLAJJG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DPOLNNLAJJG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DPOLNNLAJJG*))((::PBYTE)hIl2Cpp + DPOLNNLAJJG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

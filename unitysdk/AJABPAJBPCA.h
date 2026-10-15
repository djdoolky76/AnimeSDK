#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ShowBattleVersusBarCountDownEffect; }
namespace RPG::GameCore { class TaskContext; }

#define AJABPAJBPCA_CTOR_OFFSET UNITYSDK_OFFSET(0x12CAF2B0)
#define AJABPAJBPCA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CAF2E0)
#define AJABPAJBPCA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CAF320)

	class AJABPAJBPCA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleVersusBarCountDownEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleVersusBarCountDownEffect*))((::PBYTE)hIl2Cpp + AJABPAJBPCA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJABPAJBPCA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJABPAJBPCA_ONTASKBEGIN_OFFSET))(this);
		}

	};

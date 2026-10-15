#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FGAOFFOELCH.h"
namespace RPG::GameCore { class RtBattleVCameraConfigChange; }
namespace RPG::GameCore { class TaskContext; }

#define ECKNFOACLIB_CTOR_OFFSET UNITYSDK_OFFSET(0x12D12760)
#define ECKNFOACLIB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12D12780)

	class ECKNFOACLIB : public ::FGAOFFOELCH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtBattleVCameraConfigChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtBattleVCameraConfigChange*))((::PBYTE)hIl2Cpp + ECKNFOACLIB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECKNFOACLIB_ONTASKBEGIN_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
class JPIOEBIPJPC;
namespace RPG::GameCore { class AdventureCameraLookAtTemplate; }
namespace RPG::GameCore { class TaskContext; }

#define LLLBBADOGLK_CTOR_OFFSET UNITYSDK_OFFSET(0xB774270)
#define LLLBBADOGLK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7747A0)
#define LLLBBADOGLK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB774670)
#define LLLBBADOGLK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB774710)

	class LLLBBADOGLK
	{
	public:
		::JPIOEBIPJPC* GJBPIKOJDLM; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureCameraLookAtTemplate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureCameraLookAtTemplate*))((::PBYTE)hIl2Cpp + LLLBBADOGLK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLBBADOGLK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLBBADOGLK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLBBADOGLK_DISPOSE_OFFSET))(this);
		}

	};

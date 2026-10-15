#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PlayPenaconyEndmostMove; }
namespace RPG::GameCore { class TaskContext; }

#define OIBLEFABPEG_CTOR_OFFSET UNITYSDK_OFFSET(0xBE75EF0)
#define OIBLEFABPEG_JDPGFIBLFOP_OFFSET UNITYSDK_OFFSET(0xBE76060)
#define OIBLEFABPEG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE75F20)

	class OIBLEFABPEG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayPenaconyEndmostMove* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayPenaconyEndmostMove*))((::PBYTE)hIl2Cpp + OIBLEFABPEG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBLEFABPEG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void JDPGFIBLFOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBLEFABPEG_JDPGFIBLFOP_OFFSET))(this);
		}

	};

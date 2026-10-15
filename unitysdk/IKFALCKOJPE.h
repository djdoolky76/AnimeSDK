#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RefreshMazeBuffTime; }
namespace RPG::GameCore { class TaskContext; }

#define IKFALCKOJPE_CTOR_OFFSET UNITYSDK_OFFSET(0x16487710)
#define IKFALCKOJPE_KAMHHLHACNC_OFFSET UNITYSDK_OFFSET(0x16487790)
#define IKFALCKOJPE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16487740)

	class IKFALCKOJPE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RefreshMazeBuffTime* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RefreshMazeBuffTime*))((::PBYTE)hIl2Cpp + IKFALCKOJPE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFALCKOJPE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void KAMHHLHACNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFALCKOJPE_KAMHHLHACNC_OFFSET))(this);
		}

	};

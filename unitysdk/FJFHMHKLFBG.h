#pragma once
#include "unitysdk/unitysdk.h"
class INBHPLNBIOC;
namespace RPG::GameCore { class TaskContext; }

#define FJFHMHKLFBG_CTOR_OFFSET UNITYSDK_OFFSET(0x157C3630)
#define FJFHMHKLFBG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157C3660)

	class FJFHMHKLFBG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::INBHPLNBIOC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::INBHPLNBIOC*))((::PBYTE)hIl2Cpp + FJFHMHKLFBG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFHMHKLFBG_ONTASKBEGIN_OFFSET))(this);
		}

	};

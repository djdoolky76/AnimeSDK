#pragma once
#include "unitysdk/unitysdk.h"
class FGFNHNOJHBM;
class NGFHCJIAOLH;
namespace RPG::GameCore { class TaskContext; }

#define ABJEPCMIJOK_CTOR_OFFSET UNITYSDK_OFFSET(0xB0FBCC0)
#define ABJEPCMIJOK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB0FBCF0)
#define ABJEPCMIJOK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB0FBD90)
#define ABJEPCMIJOK_TICK_OFFSET UNITYSDK_OFFSET(0xB0FBDE0)

	class ABJEPCMIJOK
	{
	public:
		::NGFHCJIAOLH* DPOJGPNDPMD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FGFNHNOJHBM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FGFNHNOJHBM*))((::PBYTE)hIl2Cpp + ABJEPCMIJOK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJEPCMIJOK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJEPCMIJOK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABJEPCMIJOK_TICK_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class ShowAlleyMainEntrancePage; }
namespace RPG::GameCore { class TaskContext; }

#define DHKLEPPAPBJ_CTOR_OFFSET UNITYSDK_OFFSET(0xEBE6F30)
#define DHKLEPPAPBJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEBE71E0)
#define DHKLEPPAPBJ_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xEBE73C0)
#define DHKLEPPAPBJ_ONSKIP_OFFSET UNITYSDK_OFFSET(0xEBE72E0)
#define DHKLEPPAPBJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEBE7050)
#define DHKLEPPAPBJ__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xEBE73D0)

	class DHKLEPPAPBJ
	{
	public:
		::KFELGAIGHAP* NABIDGFGJFJ; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowAlleyMainEntrancePage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowAlleyMainEntrancePage*))((::PBYTE)hIl2Cpp + DHKLEPPAPBJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKLEPPAPBJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKLEPPAPBJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKLEPPAPBJ_ONSKIP_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKLEPPAPBJ_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKLEPPAPBJ__ONTASKBEGIN_B__1_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropEventInBattle; }
namespace System { class Object; }

#define KMBICDNLECI_CTOR_OFFSET UNITYSDK_OFFSET(0xB53C130)
#define KMBICDNLECI_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0xB53C300)
#define KMBICDNLECI__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB53C400)
#define KMBICDNLECI__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB53C4C0)

	class KMBICDNLECI
	{
	public:
		::System::Int32 OGLJOKAJHNC; // 0x68
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPropEventInBattle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPropEventInBattle*))((::PBYTE)hIl2Cpp + KMBICDNLECI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void ILEMLGEGLCC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KMBICDNLECI_ILEMLGEGLCC_OFFSET))(this, a1);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMBICDNLECI__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMBICDNLECI__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

	};

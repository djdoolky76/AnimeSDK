#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCDPNEKPLDK;

#define HCDPNEKPLDK_PCAPNKFLDBG_CTOR_OFFSET UNITYSDK_OFFSET(0x15C17CC0)
#define HCDPNEKPLDK_PCAPNKFLDBG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C17EA0)

	class HCDPNEKPLDK_PCAPNKFLDBG : public ::System::Object
	{
	public:
		::HCDPNEKPLDK* HPHDJHNJIAG; // 0x10
		::System::Void _ctor(::HCDPNEKPLDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCDPNEKPLDK*))((::PBYTE)hIl2Cpp + HCDPNEKPLDK_PCAPNKFLDBG_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCDPNEKPLDK_PCAPNKFLDBG_DISPOSE_OFFSET))(this);
		}

	};

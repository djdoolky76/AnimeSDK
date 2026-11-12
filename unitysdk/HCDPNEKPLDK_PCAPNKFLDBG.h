#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCDPNEKPLDK;

#define HCDPNEKPLDK_PCAPNKFLDBG_CTOR_OFFSET UNITYSDK_OFFSET(0x16B5A230)
#define HCDPNEKPLDK_PCAPNKFLDBG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16B5A410)

inline static constexpr unsigned int HCDPNEKPLDK_PCAPNKFLDBG_TypeDefinitionIndex = 56145;

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

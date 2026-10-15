#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HFIKHAIPIAB_LCGCHAKEICF_CTOR_OFFSET UNITYSDK_OFFSET(0x15C7C9C0)
#define HFIKHAIPIAB_LCGCHAKEICF_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x15C7C9D0)

	class HFIKHAIPIAB_LCGCHAKEICF : public ::System::Object
	{
	public:
		::System::UInt32 PELEBCHEOFK; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HFIKHAIPIAB_LCGCHAKEICF_CTOR_OFFSET))(this, a1);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIKHAIPIAB_LCGCHAKEICF_HKKFFCBJOKM_OFFSET))(this);
		}

	};

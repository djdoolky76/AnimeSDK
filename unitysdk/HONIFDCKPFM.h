#pragma once
#include "unitysdk/unitysdk.h"

#define HONIFDCKPFM_CTOR_OFFSET UNITYSDK_OFFSET(0x15DBD640)
#define HONIFDCKPFM_INTERP_OFFSET UNITYSDK_OFFSET(0x15DBD6B0)

	class HONIFDCKPFM
	{
	public:
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HONIFDCKPFM_CTOR_OFFSET))(this, a1);
		}

		::System::Void Interp(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + HONIFDCKPFM_INTERP_OFFSET))(this, a1, a2, a3);
		}

	};

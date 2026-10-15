#pragma once
#include "unitysdk/unitysdk.h"

#define GEBGILEDPPC_CTOR_OFFSET UNITYSDK_OFFSET(0x159C6580)

	class GEBGILEDPPC
	{
	public:
		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEBGILEDPPC_CTOR_OFFSET))(this, a1);
		}

	};

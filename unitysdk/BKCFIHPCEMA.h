#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BKCFIHPCEMA_CTOR_OFFSET UNITYSDK_OFFSET(0xB7AD3B0)
#define BKCFIHPCEMA_GAOBNIHOCLL_OFFSET UNITYSDK_OFFSET(0xB7AD300)

	class BKCFIHPCEMA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCFIHPCEMA_CTOR_OFFSET))(this);
		}

		::System::Void GAOBNIHOCLL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BKCFIHPCEMA_GAOBNIHOCLL_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EKDHMALJKND_CTOR_OFFSET UNITYSDK_OFFSET(0x15501180)
#define EKDHMALJKND_HHNOCHCDKPP_OFFSET UNITYSDK_OFFSET(0x155010A0)

	class EKDHMALJKND : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKDHMALJKND_CTOR_OFFSET))(this);
		}

		::System::Void HHNOCHCDKPP(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EKDHMALJKND_HHNOCHCDKPP_OFFSET))(this, a1, a2);
		}

	};

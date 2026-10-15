#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCEFGDCEJMD;

#define PCEJNOLBNHI_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C9A4EE0)
#define PCEJNOLBNHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9A4F60)

	class PCEJNOLBNHI : public ::System::Object
	{
	public:
		::KCEFGDCEJMD* BPAPBAFOMCH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCEJNOLBNHI_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCEJNOLBNHI_CLEAR_OFFSET))(this);
		}

	};

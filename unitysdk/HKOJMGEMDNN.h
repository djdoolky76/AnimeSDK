#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HKOJMGEMDNN_CTOR_OFFSET UNITYSDK_OFFSET(0x15D50420)

	class HKOJMGEMDNN : public ::System::Object
	{
	public:
		::System::UInt32 FEHABNJEENK; // 0x10
		::System::UInt32 PPOPFNPICJA; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKOJMGEMDNN_CTOR_OFFSET))(this);
		}

	};

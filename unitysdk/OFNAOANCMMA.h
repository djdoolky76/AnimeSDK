#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OFNAOANCMMA_CTOR_OFFSET UNITYSDK_OFFSET(0xBE490D0)

	class OFNAOANCMMA : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* APINNAAKCOB; // 0x10
		::System::UInt32 CBAGLPOPOJE; // 0x18
		::System::Int32 OMEKJNADCKI; // 0x1C
		::System::Int32 GPGOJBOBLKG; // 0x20
		::System::UInt32 OLKDGBCPDEH; // 0x24
		::System::UInt32 JKOCMNCPNEA; // 0x28
		::System::UInt32 KLBIJIMBEBM; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNAOANCMMA_CTOR_OFFSET))(this);
		}

	};

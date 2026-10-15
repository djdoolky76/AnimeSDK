#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ADCHCEGJPFN_CTOR_OFFSET UNITYSDK_OFFSET(0xB135340)

	class ADCHCEGJPFN : public ::System::Object
	{
	public:
		::System::UInt32 JIDLKIHJLFL; // 0x10
		::System::UInt32 GBJLLAJJEOL; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADCHCEGJPFN_CTOR_OFFSET))(this);
		}

	};

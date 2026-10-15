#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKHKACBICMH.h"
#include "unitysdk/System/Object.h"

#define DMCEKKPFNPL_CTOR_OFFSET UNITYSDK_OFFSET(0xFEB8620)

	class DMCEKKPFNPL : public ::System::Object
	{
	public:
		::System::Single GPNNIAIBDPL; // 0x10
		::System::Boolean IOBJFEJFLJP; // 0x14
		::System::Byte _padding0[0x3];
		::KKHKACBICMH EJHODPJIFIN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMCEKKPFNPL_CTOR_OFFSET))(this);
		}

	};

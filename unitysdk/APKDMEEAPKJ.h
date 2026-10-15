#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define APKDMEEAPKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15BACD30)

	class APKDMEEAPKJ : public ::System::Object
	{
	public:
		::System::Int32 NDAIGIEMABD; // 0x10
		::System::Int32 HCDEOKNIGKG; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APKDMEEAPKJ_CTOR_OFFSET))(this);
		}

	};

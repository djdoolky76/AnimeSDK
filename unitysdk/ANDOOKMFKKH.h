#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBMMPJAJFBH;

#define ANDOOKMFKKH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C89E440)
#define ANDOOKMFKKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C89E4A0)

	class ANDOOKMFKKH : public ::System::Object
	{
	public:
		::LBMMPJAJFBH* CNLHCKELLBE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDOOKMFKKH_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDOOKMFKKH_CLEAR_OFFSET))(this);
		}

	};

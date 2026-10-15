#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFPAFGCOKHK.h"

#define HDFIBLLOKOP_CTOR_OFFSET UNITYSDK_OFFSET(0x15C32C60)
#define HDFIBLLOKOP_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x15C329D0)
#define HDFIBLLOKOP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15C32AA0)

	class HDFIBLLOKOP : public ::FFPAFGCOKHK
	{
	public:
		::System::Single IKGMMBFFDDE; // 0x40
		::System::Single EOJNNILHNNG; // 0x44
		::System::Single DINOMJBDEGE; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDFIBLLOKOP_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDFIBLLOKOP_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HDFIBLLOKOP_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};

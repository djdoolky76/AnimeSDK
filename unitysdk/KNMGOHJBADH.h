#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KNMGOHJBADH_CTOR_OFFSET UNITYSDK_OFFSET(0xB588DB0)

	class KNMGOHJBADH : public ::System::Object
	{
	public:
		::System::UInt32 EMDNAKNDANP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMGOHJBADH_CTOR_OFFSET))(this);
		}

	};

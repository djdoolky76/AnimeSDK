#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIDAHJNMBKE.h"
#include "unitysdk/MHCOBFJNNJB.h"
#include "unitysdk/System/Object.h"

#define PMBGIIOPHGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F6BA0)

inline static constexpr unsigned int PMBGIIOPHGE_TypeDefinitionIndex = 42254;

	class PMBGIIOPHGE : public ::System::Object
	{
	public:
		::GIDAHJNMBKE ODEPGMAFHKI; // 0x10
		::System::UInt32 BCAKPNCHIIJ; // 0x18
		::System::UInt32 OJNGBIBGHBL; // 0x1C
		::System::Boolean KEAAGAIAHLA; // 0x20
		::System::Byte _padding0[0x3];
		::MHCOBFJNNJB PMJIIAGNPND; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBGIIOPHGE_CTOR_OFFSET))(this);
		}

	};

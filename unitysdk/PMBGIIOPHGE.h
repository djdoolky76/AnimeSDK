#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIDAHJNMBKE.h"
#include "unitysdk/MHCOBFJNNJB.h"
#include "unitysdk/System/Object.h"

#define PMBGIIOPHGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9C8630)

inline static constexpr unsigned int PMBGIIOPHGE_TypeDefinitionIndex = 42254;

	class PMBGIIOPHGE : public ::System::Object
	{
	public:
		::GIDAHJNMBKE ODEPGMAFHKI; // 0x10
		::System::Boolean KEAAGAIAHLA; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 BCAKPNCHIIJ; // 0x1C
		::MHCOBFJNNJB PMJIIAGNPND; // 0x20
		::System::UInt32 OJNGBIBGHBL; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBGIIOPHGE_CTOR_OFFSET))(this);
		}

	};

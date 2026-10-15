#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JGDJDADAFEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB94710)

	class JGDJDADAFEB : public ::System::Object
	{
	public:
		::System::Int32 NJGKCPOOHDM; // 0x10
		::System::UInt32 DFEJABODPGM; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDJDADAFEB_CTOR_OFFSET))(this);
		}

	};

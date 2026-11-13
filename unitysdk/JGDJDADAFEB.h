#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JGDJDADAFEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE03AD0)

inline static constexpr unsigned int JGDJDADAFEB_TypeDefinitionIndex = 44257;

	class JGDJDADAFEB : public ::System::Object
	{
	public:
		::System::UInt32 DFEJABODPGM; // 0x10
		::System::Int32 NJGKCPOOHDM; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDJDADAFEB_CTOR_OFFSET))(this);
		}

	};

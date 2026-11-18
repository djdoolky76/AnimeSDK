#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LCEGCOJEFFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1683B060)

inline static constexpr unsigned int LCEGCOJEFFO_TypeDefinitionIndex = 90396;

class LCEGCOJEFFO : public ::System::Object
{
public:
	::System::Int32 NOOLOILNGPL; // 0x10
	::System::Int32 NLBPOACGCDA; // 0x14

	::System::Void _ctor(::System::Int32 OBNIAHNMHPF, ::System::Int32 CLHLJKKAAPO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LCEGCOJEFFO__CTOR_OFFSET))(this, OBNIAHNMHPF, CLHLJKKAAPO);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LCLDDKEIDNF__CTOR_OFFSET UNITYSDK_OFFSET(0xD41F3C0)

inline static constexpr unsigned int LCLDDKEIDNF_TypeDefinitionIndex = 78287;

class LCLDDKEIDNF : public ::System::Object
{
public:
	::System::Int32 DBJCGNJOPPJ; // 0x10
	::System::Int32 BKGNGPPMECH; // 0x14
	::System::Int32 JJFCOMNDHLM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCLDDKEIDNF__CTOR_OFFSET))(this);
	}
};

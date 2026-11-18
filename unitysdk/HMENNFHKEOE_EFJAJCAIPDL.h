#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBHPDPBIGPK;

#define HMENNFHKEOE_EFJAJCAIPDL_FBBPJPBINBH_OFFSET UNITYSDK_OFFSET(0x14709E60)
#define HMENNFHKEOE_EFJAJCAIPDL__CTOR_OFFSET UNITYSDK_OFFSET(0x14709E50)

inline static constexpr unsigned int HMENNFHKEOE_EFJAJCAIPDL_TypeDefinitionIndex = 53319;

class HMENNFHKEOE_EFJAJCAIPDL : public ::System::Object
{
public:
	::FBHPDPBIGPK* LNCJHJHAJAM; // 0x10
	::System::Boolean ENEILOANKLG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_EFJAJCAIPDL__CTOR_OFFSET))(this);
	}

	::System::Void FBBPJPBINBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_EFJAJCAIPDL_FBBPJPBINBH_OFFSET))(this);
	}
};

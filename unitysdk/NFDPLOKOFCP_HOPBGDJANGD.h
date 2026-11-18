#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NFDPLOKOFCP;

#define NFDPLOKOFCP_HOPBGDJANGD_GBIPAIEDPFK_OFFSET UNITYSDK_OFFSET(0xE577C80)
#define NFDPLOKOFCP_HOPBGDJANGD__CTOR_OFFSET UNITYSDK_OFFSET(0xE577C70)

inline static constexpr unsigned int NFDPLOKOFCP_HOPBGDJANGD_TypeDefinitionIndex = 87683;

class NFDPLOKOFCP_HOPBGDJANGD : public ::System::Object
{
public:
	::NFDPLOKOFCP* KLHPEBKNIFB; // 0x10
	::System::Int32 ABHBKFJKINO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDPLOKOFCP_HOPBGDJANGD__CTOR_OFFSET))(this);
	}

	::System::Int32 GBIPAIEDPFK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDPLOKOFCP_HOPBGDJANGD_GBIPAIEDPFK_OFFSET))(this);
	}
};

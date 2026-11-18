#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define HMENNFHKEOE_PPFFEDBCGGB_IHAHHBNCHLI_OFFSET UNITYSDK_OFFSET(0x15B6D240)
#define HMENNFHKEOE_PPFFEDBCGGB__CTOR_OFFSET UNITYSDK_OFFSET(0x15B6D230)

inline static constexpr unsigned int HMENNFHKEOE_PPFFEDBCGGB_TypeDefinitionIndex = 53334;

class HMENNFHKEOE_PPFFEDBCGGB : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* GOHDPILNKMO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_PPFFEDBCGGB__CTOR_OFFSET))(this);
	}

	::System::Void IHAHHBNCHLI(::System::Boolean GBJJLIEMKAP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HMENNFHKEOE_PPFFEDBCGGB_IHAHHBNCHLI_OFFSET))(this, GBJJLIEMKAP);
	}
};

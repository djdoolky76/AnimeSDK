#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

#define FD2DBF4F5748D290_FFE59D93BEA6E2CA_OFFSET UNITYSDK_OFFSET(0x2071E40)
#define FD2DBF4F5748D290__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int FD2DBF4F5748D290_TypeDefinitionIndex = 8463;

class FD2DBF4F5748D290 : public ::EFC4AEA2121EC272
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FD2DBF4F5748D290__CTOR_OFFSET))(this);
	}

	::System::Void FFE59D93BEA6E2CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FD2DBF4F5748D290_FFE59D93BEA6E2CA_OFFSET))(this);
	}
};

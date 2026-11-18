#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EOCMAKHEHMO_GDMNOOOGCBF_CGKGDNHLMPI_OFFSET UNITYSDK_OFFSET(0x1724F060)
#define EOCMAKHEHMO_GDMNOOOGCBF__CTOR_OFFSET UNITYSDK_OFFSET(0x1724F050)

inline static constexpr unsigned int EOCMAKHEHMO_GDMNOOOGCBF_TypeDefinitionIndex = 53273;

class EOCMAKHEHMO_GDMNOOOGCBF : public ::System::Object
{
public:
	::System::Int32 DONFNODEALN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOCMAKHEHMO_GDMNOOOGCBF__CTOR_OFFSET))(this);
	}

	::System::Void CGKGDNHLMPI(::System::Int32 BOBBHFPEPHC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EOCMAKHEHMO_GDMNOOOGCBF_CGKGDNHLMPI_OFFSET))(this, BOBBHFPEPHC);
	}
};

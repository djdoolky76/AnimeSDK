#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define POJCPPEHHFE_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1EBBE400)
#define POJCPPEHHFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBBE3F0)

inline static constexpr unsigned int POJCPPEHHFE_TypeDefinitionIndex = 70365;

class POJCPPEHHFE : public ::System::Object
{
public:
	::System::UInt32 ONHGIDCLIKC; // 0x10
	::System::Single MHNCLJLDBIG; // 0x14
	::System::Int32 HAFBMKDABDO; // 0x18
	::System::Int32 COMKLFHAEGO; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POJCPPEHHFE__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POJCPPEHHFE_NPOLNFDBOOD_OFFSET))(this);
	}
};

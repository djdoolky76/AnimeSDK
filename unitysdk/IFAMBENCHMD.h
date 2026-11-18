#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGABGEJCPGP;

#define IFAMBENCHMD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A967D0)
#define IFAMBENCHMD_FLPHGOKHMFI_OFFSET UNITYSDK_OFFSET(0x13A968E0)
#define IFAMBENCHMD_NMPGCMNMCOL_OFFSET UNITYSDK_OFFSET(0x13A96880)
#define IFAMBENCHMD_NPEOIOKCNGB_OFFSET UNITYSDK_OFFSET(0x13A96820)
#define IFAMBENCHMD__CTOR_OFFSET UNITYSDK_OFFSET(0x13A96780)

inline static constexpr unsigned int IFAMBENCHMD_TypeDefinitionIndex = 62360;

class IFAMBENCHMD : public ::System::Object
{
public:
	::DGABGEJCPGP* _DJLGBOBBPIO_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAMBENCHMD__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAMBENCHMD_DISPOSE_OFFSET))(this);
	}

	::System::Void NPEOIOKCNGB(::System::UInt32 IMGBAKKLEMJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFAMBENCHMD_NPEOIOKCNGB_OFFSET))(this, IMGBAKKLEMJ);
	}

	::System::Void NMPGCMNMCOL(::System::UInt32 IMGBAKKLEMJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFAMBENCHMD_NMPGCMNMCOL_OFFSET))(this, IMGBAKKLEMJ);
	}

	::DGABGEJCPGP* FLPHGOKHMFI()
	{
		return ((::DGABGEJCPGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAMBENCHMD_FLPHGOKHMFI_OFFSET))(this);
	}
};

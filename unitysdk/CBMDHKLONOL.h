#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBHBAGIPLGK.h"
#include "unitysdk/System/Object.h"

#define CBMDHKLONOL__CTOR_OFFSET UNITYSDK_OFFSET(0x14C76A80)

inline static constexpr unsigned int CBMDHKLONOL_TypeDefinitionIndex = 47959;

class CBMDHKLONOL : public ::System::Object
{
public:
	::System::Int32 FKOFGJJLOEC; // 0x10
	::System::Int32 BFMMEICFNCD; // 0x14
	::System::Int32 HAAEBCOBKFF; // 0x18
	::PBHBAGIPLGK OBNIAHNMHPF; // 0x1C
	::System::Int32 DCBODKALAOL; // 0x20
	::System::Int32 GEGOALONGBI; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBMDHKLONOL__CTOR_OFFSET))(this);
	}
};

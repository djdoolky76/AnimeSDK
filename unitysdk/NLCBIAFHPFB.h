#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDJDLIJPGDP.h"

#define NLCBIAFHPFB_CLDJOGKAALH_OFFSET UNITYSDK_OFFSET(0x105C9C60)
#define NLCBIAFHPFB__CTOR_OFFSET UNITYSDK_OFFSET(0x105C9C50)

inline static constexpr unsigned int NLCBIAFHPFB_TypeDefinitionIndex = 53396;

class NLCBIAFHPFB : public ::FDJDLIJPGDP
{
public:
	::System::Boolean FGGINHEALIG; // 0x18
	::System::Byte _padding0[0x3];
	::System::Int32 PFMMLLMJOEK; // 0x1C
	::System::Int32 ENODFDJLFLN; // 0x20
	::System::Int32 KGKOEPFPLPC; // 0x24
	::System::Int32 CBFCCLCEGOA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCBIAFHPFB__CTOR_OFFSET))(this);
	}

	::System::Boolean CLDJOGKAALH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCBIAFHPFB_CLDJOGKAALH_OFFSET))(this);
	}
};

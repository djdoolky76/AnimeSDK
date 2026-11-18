#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
template <typename T> class KCMIFNGABDC_1;

#define IEBBODNLBON_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x141BDB00)
#define IEBBODNLBON_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x141BD9B0)
#define IEBBODNLBON_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x141BDFB0)
#define IEBBODNLBON__CTOR_OFFSET UNITYSDK_OFFSET(0x141BDE20)

inline static constexpr unsigned int IEBBODNLBON_TypeDefinitionIndex = 55664;

class IEBBODNLBON : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* ACOODGMPEKH; // 0x28
	::CPABOPKIGAL* OJBMNLAJJLC; // 0x30
	::CPABOPKIGAL* BFCCCDEBOJB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBBODNLBON__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBBODNLBON_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IEBBODNLBON_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBBODNLBON_GDEOPIBNOIN_OFFSET))(this);
	}
};

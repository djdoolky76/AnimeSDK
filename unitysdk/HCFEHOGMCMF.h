#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FGICJINDMPD.h"

#define HCFEHOGMCMF_CMBEFOCNHBG_OFFSET UNITYSDK_OFFSET(0x14077630)
#define HCFEHOGMCMF_FCMIEMNNHCE_OFFSET UNITYSDK_OFFSET(0x14077480)
#define HCFEHOGMCMF_HGOFINENHAG_OFFSET UNITYSDK_OFFSET(0x140774E0)
#define HCFEHOGMCMF__CTOR_OFFSET UNITYSDK_OFFSET(0x14077620)

inline static constexpr unsigned int HCFEHOGMCMF_TypeDefinitionIndex = 52018;

class HCFEHOGMCMF : public ::FGICJINDMPD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFEHOGMCMF__CTOR_OFFSET))(this);
	}

	::System::Void FCMIEMNNHCE(::System::Boolean OBGBAOOJKAG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HCFEHOGMCMF_FCMIEMNNHCE_OFFSET))(this, OBGBAOOJKAG);
	}

	::System::Void CMBEFOCNHBG(::System::Boolean MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HCFEHOGMCMF_CMBEFOCNHBG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HGOFINENHAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFEHOGMCMF_HGOFINENHAG_OFFSET))(this);
	}
};

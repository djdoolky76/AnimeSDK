#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPDDEPLBABF;
class KKKMDGOJMAM_FJCCHLPKDBC;

#define KKKMDGOJMAM_HPBPNBMFMIF_DNKEADEHEDL_OFFSET UNITYSDK_OFFSET(0x15B978F0)
#define KKKMDGOJMAM_HPBPNBMFMIF__CTOR_OFFSET UNITYSDK_OFFSET(0x15B978E0)

inline static constexpr unsigned int KKKMDGOJMAM_HPBPNBMFMIF_TypeDefinitionIndex = 76014;

class KKKMDGOJMAM_HPBPNBMFMIF : public ::System::Object
{
public:
	::KKKMDGOJMAM_FJCCHLPKDBC* FGBNBFHOKAA; // 0x10
	::System::UInt32 BFDIDGJIJHA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKMDGOJMAM_HPBPNBMFMIF__CTOR_OFFSET))(this);
	}

	::System::Void DNKEADEHEDL(::BPDDEPLBABF* HDIJAHIHLLH)
	{
		return ((::System::Void(*)(::PVOID, ::BPDDEPLBABF*))((::PBYTE)hIl2Cpp + KKKMDGOJMAM_HPBPNBMFMIF_DNKEADEHEDL_OFFSET))(this, HDIJAHIHLLH);
	}
};

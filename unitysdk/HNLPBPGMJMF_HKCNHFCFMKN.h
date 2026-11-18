#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HNLPBPGMJMF;
class HNPJNICKLOJ;

#define HNLPBPGMJMF_HKCNHFCFMKN_MHLDFIOGGAE_OFFSET UNITYSDK_OFFSET(0x14D3A390)
#define HNLPBPGMJMF_HKCNHFCFMKN__CTOR_OFFSET UNITYSDK_OFFSET(0x14D3A380)

inline static constexpr unsigned int HNLPBPGMJMF_HKCNHFCFMKN_TypeDefinitionIndex = 86285;

class HNLPBPGMJMF_HKCNHFCFMKN : public ::System::Object
{
public:
	::HNLPBPGMJMF* KLHPEBKNIFB; // 0x10
	::HNPJNICKLOJ* IPMMCGDMODG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLPBPGMJMF_HKCNHFCFMKN__CTOR_OFFSET))(this);
	}

	::System::Void MHLDFIOGGAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLPBPGMJMF_HKCNHFCFMKN_MHLDFIOGGAE_OFFSET))(this);
	}
};

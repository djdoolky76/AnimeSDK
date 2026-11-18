#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HNLPBPGMJMF_DBAKOCOBJJN;
class HNPJNICKLOJ;

#define HNLPBPGMJMF_KIDFONEIJGJ_FMFKLGJIOIJ_OFFSET UNITYSDK_OFFSET(0x15DCE9C0)
#define HNLPBPGMJMF_KIDFONEIJGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15DCE9B0)

inline static constexpr unsigned int HNLPBPGMJMF_KIDFONEIJGJ_TypeDefinitionIndex = 86284;

class HNLPBPGMJMF_KIDFONEIJGJ : public ::System::Object
{
public:
	::HNLPBPGMJMF_DBAKOCOBJJN* FGBNBFHOKAA; // 0x10
	::HNPJNICKLOJ* IPMMCGDMODG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLPBPGMJMF_KIDFONEIJGJ__CTOR_OFFSET))(this);
	}

	::System::Void FMFKLGJIOIJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLPBPGMJMF_KIDFONEIJGJ_FMFKLGJIOIJ_OFFSET))(this);
	}
};

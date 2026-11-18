#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
class PBLHBGKKFCL;
namespace System { template <typename T> class Action_1; }

#define EDLDOFLKPHL_MBODNFMJPKE_GIAJHJLJKGJ_OFFSET UNITYSDK_OFFSET(0x10630800)
#define EDLDOFLKPHL_MBODNFMJPKE_LAPEDFBKEPH_OFFSET UNITYSDK_OFFSET(0x10630860)
#define EDLDOFLKPHL_MBODNFMJPKE__CTOR_OFFSET UNITYSDK_OFFSET(0x106307F0)

inline static constexpr unsigned int EDLDOFLKPHL_MBODNFMJPKE_TypeDefinitionIndex = 61485;

class EDLDOFLKPHL_MBODNFMJPKE : public ::System::Object
{
public:
	::System::Action_1<::PBLHBGKKFCL*>* EDNJGMKPFHG; // 0x10
	::System::Action_1<::OAEFGCLEHHO*>* LMGFIOAMHHB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDOFLKPHL_MBODNFMJPKE__CTOR_OFFSET))(this);
	}

	::System::Void GIAJHJLJKGJ(::OAEFGCLEHHO* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EDLDOFLKPHL_MBODNFMJPKE_GIAJHJLJKGJ_OFFSET))(this, BLLNHDIDKPA);
	}

	::System::Void LAPEDFBKEPH(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EDLDOFLKPHL_MBODNFMJPKE_LAPEDFBKEPH_OFFSET))(this, BHDNBGLCNOM);
	}
};

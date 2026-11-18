#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

class FNEKKILCHOJ_JHLMKAOFLFD;
namespace System { class Action; }

#define FNEKKILCHOJ_NLACHMAMJID_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x15E74E30)
#define FNEKKILCHOJ_NLACHMAMJID_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x15E74ED0)
#define FNEKKILCHOJ_NLACHMAMJID__CTOR_OFFSET UNITYSDK_OFFSET(0x15E74E20)

inline static constexpr unsigned int FNEKKILCHOJ_NLACHMAMJID_TypeDefinitionIndex = 93111;

class FNEKKILCHOJ_NLACHMAMJID : public ::System::Object
{
public:
	::HOCDHMEPPEG ELAJHLMBNGL; // 0x10
	::FNEKKILCHOJ_JHLMKAOFLFD* FGBNBFHOKAA; // 0x40
	::System::Action* DLMJCFBENGB; // 0x48
	::HOCDHMEPPEG OIKAMMPMLAE; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEKKILCHOJ_NLACHMAMJID__CTOR_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEKKILCHOJ_NLACHMAMJID_AAHMACBDCPN_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::System::UInt32 JCPNDFAEOLI)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNEKKILCHOJ_NLACHMAMJID_LIDNPLMPHAL_OFFSET))(this, JCPNDFAEOLI);
	}
};

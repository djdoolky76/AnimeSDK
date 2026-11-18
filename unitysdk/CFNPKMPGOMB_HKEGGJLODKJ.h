#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DOJFNBKAOMN;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
template <typename T> class DFDEIDBBGHG_1;

#define CFNPKMPGOMB_HKEGGJLODKJ_DBBPGEJPKBD_OFFSET UNITYSDK_OFFSET(0x139C4390)
#define CFNPKMPGOMB_HKEGGJLODKJ_HCOAGILCPPI_OFFSET UNITYSDK_OFFSET(0x139C42E0)
#define CFNPKMPGOMB_HKEGGJLODKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x139C42D0)

inline static constexpr unsigned int CFNPKMPGOMB_HKEGGJLODKJ_TypeDefinitionIndex = 44974;

class CFNPKMPGOMB_HKEGGJLODKJ : public ::System::Object
{
public:
	::System::Action_1<::DFDEIDBBGHG_1<::DOJFNBKAOMN*>*>* EDNJGMKPFHG; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18
	::System::UInt32 OLFPBLODJNB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNPKMPGOMB_HKEGGJLODKJ__CTOR_OFFSET))(this);
	}

	::System::Void HCOAGILCPPI(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFNPKMPGOMB_HKEGGJLODKJ_HCOAGILCPPI_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void DBBPGEJPKBD(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFNPKMPGOMB_HKEGGJLODKJ_DBBPGEJPKBD_OFFSET))(this, NAPFALLANDL);
	}
};

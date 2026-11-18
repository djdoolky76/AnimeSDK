#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ELNPPPDBHKC;
namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define ELNPPPDBHKC_KCDNGKOJJDF_CMPEKDHCCLJ_OFFSET UNITYSDK_OFFSET(0x14AA75A0)
#define ELNPPPDBHKC_KCDNGKOJJDF_EIKNMLHBCCF_OFFSET UNITYSDK_OFFSET(0x14AA7520)
#define ELNPPPDBHKC_KCDNGKOJJDF__CTOR_OFFSET UNITYSDK_OFFSET(0x14AA7510)

inline static constexpr unsigned int ELNPPPDBHKC_KCDNGKOJJDF_TypeDefinitionIndex = 48245;

class ELNPPPDBHKC_KCDNGKOJJDF : public ::System::Object
{
public:
	::System::Action_1<::System::Exception*>* COKHBPKODGI; // 0x10
	::ELNPPPDBHKC* AFKKKJKJEIC; // 0x18
	::System::Action* HKJODKBNEJE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_KCDNGKOJJDF__CTOR_OFFSET))(this);
	}

	::System::Void EIKNMLHBCCF(::System::Exception* KMDHKNFMCAE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_KCDNGKOJJDF_EIKNMLHBCCF_OFFSET))(this, KMDHKNFMCAE);
	}

	::System::Void CMPEKDHCCLJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_KCDNGKOJJDF_CMPEKDHCCLJ_OFFSET))(this);
	}
};

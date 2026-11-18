#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
class PLCNOAKLOIH;
namespace System { class Action; }
namespace System { class String; }

#define PLCNOAKLOIH_DCHDAJGNHHG_HEFKMBJCMAE_OFFSET UNITYSDK_OFFSET(0x11996EE0)
#define PLCNOAKLOIH_DCHDAJGNHHG_LCEEAIADCJJ_OFFSET UNITYSDK_OFFSET(0x11996E50)
#define PLCNOAKLOIH_DCHDAJGNHHG__CTOR_OFFSET UNITYSDK_OFFSET(0x11996730)

inline static constexpr unsigned int PLCNOAKLOIH_DCHDAJGNHHG_TypeDefinitionIndex = 89233;

class PLCNOAKLOIH_DCHDAJGNHHG : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18
	::PLCNOAKLOIH* KLHPEBKNIFB; // 0x20
	::System::String* HIAIKHDFCLN; // 0x28
	::System::UInt32 LBPBANPFBHE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_DCHDAJGNHHG__CTOR_OFFSET))(this);
	}

	::System::Void LCEEAIADCJJ(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_DCHDAJGNHHG_LCEEAIADCJJ_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void HEFKMBJCMAE(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_DCHDAJGNHHG_HEFKMBJCMAE_OFFSET))(this, BHDNBGLCNOM);
	}
};

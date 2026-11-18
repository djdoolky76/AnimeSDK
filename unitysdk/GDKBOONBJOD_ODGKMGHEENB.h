#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFALNBMNFCA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class DKJPGJACALC;
class GDKBOONBJOD;
class HCBFNKIPOPJ;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define GDKBOONBJOD_ODGKMGHEENB_BEADIJCPHHP_OFFSET UNITYSDK_OFFSET(0x10EE5870)
#define GDKBOONBJOD_ODGKMGHEENB_BGPDMICPMMK_OFFSET UNITYSDK_OFFSET(0x10EE5860)
#define GDKBOONBJOD_ODGKMGHEENB_BMFPNEPKHHI_OFFSET UNITYSDK_OFFSET(0x10EE5580)
#define GDKBOONBJOD_ODGKMGHEENB_EDNGEALGLBO_OFFSET UNITYSDK_OFFSET(0x10EE5730)
#define GDKBOONBJOD_ODGKMGHEENB_IIFOAMAKDNP_OFFSET UNITYSDK_OFFSET(0x10EE53A0)
#define GDKBOONBJOD_ODGKMGHEENB_OCINLPFKCGL_OFFSET UNITYSDK_OFFSET(0x10EE57F0)
#define GDKBOONBJOD_ODGKMGHEENB_OONBCCMFIKP_OFFSET UNITYSDK_OFFSET(0x10EE5880)
#define GDKBOONBJOD_ODGKMGHEENB__CTOR_OFFSET UNITYSDK_OFFSET(0x10EE5390)

inline static constexpr unsigned int GDKBOONBJOD_ODGKMGHEENB_TypeDefinitionIndex = 55383;

class GDKBOONBJOD_ODGKMGHEENB : public ::System::Object
{
public:
	::System::Action_1<::OAEFGCLEHHO*>* AEPKIFBFCOD; // 0x10
	::GDKBOONBJOD* KLHPEBKNIFB; // 0x18
	::DKJPGJACALC* HNOPAJLDCFB; // 0x20
	::System::Action* MNMDKBDFAFE; // 0x28
	::HFALNBMNFCA JFLNDPKKMEC; // 0x30
	::System::Func_1<::System::Boolean>* HOMJMCDKGON; // 0x48
	::OAEFGCLEHHO* AOMLJMBEBBE; // 0x50
	::System::Action* CAAFEGLOALC; // 0x58
	::HCBFNKIPOPJ* ALAOLDENBJC; // 0x60
	::System::String* IMILJHBDOGJ; // 0x68
	::System::Action_1<::HFALNBMNFCA>* HGBOMLCCBEE; // 0x70
	::System::Boolean DOFCLPCLHOJ; // 0x78
	::System::Boolean JFHBDLEMALB; // 0x79
	::System::Boolean BIPKEIPNECG; // 0x7A
	::System::Byte _padding0[0x1];
	::System::Int32 GOCLGFBDADB; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKBOONBJOD_ODGKMGHEENB__CTOR_OFFSET))(this);
	}

	::System::Void IIFOAMAKDNP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKBOONBJOD_ODGKMGHEENB_IIFOAMAKDNP_OFFSET))(this);
	}

	::System::Void BMFPNEPKHHI(::OAEFGCLEHHO* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GDKBOONBJOD_ODGKMGHEENB_BMFPNEPKHHI_OFFSET))(this, BLLNHDIDKPA);
	}

	::System::Void EDNGEALGLBO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKBOONBJOD_ODGKMGHEENB_EDNGEALGLBO_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask OCINLPFKCGL(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + GDKBOONBJOD_ODGKMGHEENB_OCINLPFKCGL_OFFSET))(this, OMMEALOOOOD);
	}

	::System::Boolean BGPDMICPMMK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKBOONBJOD_ODGKMGHEENB_BGPDMICPMMK_OFFSET))(this);
	}

	::System::Void BEADIJCPHHP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKBOONBJOD_ODGKMGHEENB_BEADIJCPHHP_OFFSET))(this);
	}

	::System::Void OONBCCMFIKP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKBOONBJOD_ODGKMGHEENB_OONBCCMFIKP_OFFSET))(this);
	}
};

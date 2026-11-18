#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KNAOBPFKOOC;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define KNAOBPFKOOC_FKENAGHELOH_AKLOPHMKJKF_OFFSET UNITYSDK_OFFSET(0x1EE97D50)
#define KNAOBPFKOOC_FKENAGHELOH_DJMICFNCDDC_OFFSET UNITYSDK_OFFSET(0x1EE97CB0)
#define KNAOBPFKOOC_FKENAGHELOH_LAGPJPOMJJH_OFFSET UNITYSDK_OFFSET(0x1EE97BC0)
#define KNAOBPFKOOC_FKENAGHELOH_LFOGEMPFCFB_OFFSET UNITYSDK_OFFSET(0x1EE97CF0)
#define KNAOBPFKOOC_FKENAGHELOH__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE97BB0)

inline static constexpr unsigned int KNAOBPFKOOC_FKENAGHELOH_TypeDefinitionIndex = 8380;

class KNAOBPFKOOC_FKENAGHELOH : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* BOEJHELOCKE; // 0x10
	::KNAOBPFKOOC* KLHPEBKNIFB; // 0x18
	::System::Action* NPBCNHMJKJP; // 0x20
	::System::Action_1<::System::Int32>* ABCDFINKGFN; // 0x28
	::System::Action* CCMLGOPLEDC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAOBPFKOOC_FKENAGHELOH__CTOR_OFFSET))(this);
	}

	::System::Void LAGPJPOMJJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAOBPFKOOC_FKENAGHELOH_LAGPJPOMJJH_OFFSET))(this);
	}

	::System::Void DJMICFNCDDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAOBPFKOOC_FKENAGHELOH_DJMICFNCDDC_OFFSET))(this);
	}

	::System::Void LFOGEMPFCFB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAOBPFKOOC_FKENAGHELOH_LFOGEMPFCFB_OFFSET))(this);
	}

	::System::Void AKLOPHMKJKF(::System::Int32 HLPPGDOIPDF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNAOBPFKOOC_FKENAGHELOH_AKLOPHMKJKF_OFFSET))(this, HLPPGDOIPDF);
	}
};

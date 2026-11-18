#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class COIKBJKDCBM;
namespace MoleMole { class UICinemaInvitePageController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KPMBBKJABGC_GAPEOKENFHF_OFFSET UNITYSDK_OFFSET(0x19973BF0)
#define KPMBBKJABGC_HHOKDEONION_OFFSET UNITYSDK_OFFSET(0x19973C80)
#define KPMBBKJABGC_JDGEGOEOCLN_OFFSET UNITYSDK_OFFSET(0x19973CD0)
#define KPMBBKJABGC_JLGLCMKCPHA_OFFSET UNITYSDK_OFFSET(0x19973C30)
#define KPMBBKJABGC__CTOR_OFFSET UNITYSDK_OFFSET(0x19973CC0)

inline static constexpr unsigned int KPMBBKJABGC_TypeDefinitionIndex = 85896;

class KPMBBKJABGC : public ::System::Object
{
public:
	::System::String* EKBHGENGCHE; // 0x10
	::MoleMole::UICinemaInvitePageController* GFFKKGLCHNG; // 0x18
	::System::Int32 IPKOJMJGMBJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMBBKJABGC__CTOR_OFFSET))(this);
	}

	::System::Void GAPEOKENFHF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMBBKJABGC_GAPEOKENFHF_OFFSET))(this);
	}

	::System::Void JLGLCMKCPHA(::System::Int32 LNANIDFAFHB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KPMBBKJABGC_JLGLCMKCPHA_OFFSET))(this, LNANIDFAFHB);
	}

	::System::Collections::Generic::List_1<::COIKBJKDCBM*>* HHOKDEONION()
	{
		return ((::System::Collections::Generic::List_1<::COIKBJKDCBM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMBBKJABGC_HHOKDEONION_OFFSET))(this);
	}

	::System::Void JDGEGOEOCLN(::MoleMole::UICinemaInvitePageController* GFFKKGLCHNG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICinemaInvitePageController*))((::PBYTE)hIl2Cpp + KPMBBKJABGC_JDGEGOEOCLN_OFFSET))(this, GFFKKGLCHNG);
	}
};

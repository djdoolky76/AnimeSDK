#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EIBLKIBKABF.h"
#include "unitysdk/Foundation/Tuple_2.h"
#include "unitysdk/GIFOBKBCCMA.h"
#include "unitysdk/System/Object.h"

class IHBHCFAMHPH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GNHPLJOAFDK_BBIFCOIDIOC_OFFSET UNITYSDK_OFFSET(0x18162890)
#define GNHPLJOAFDK_DHINJHGKNAO_OFFSET UNITYSDK_OFFSET(0x18162820)
#define GNHPLJOAFDK_EMJNHLBMIBI_OFFSET UNITYSDK_OFFSET(0x18162940)
#define GNHPLJOAFDK_GDFAOFMKADC_OFFSET UNITYSDK_OFFSET(0x181628F0)
#define GNHPLJOAFDK_GMKICCOMDLO_OFFSET UNITYSDK_OFFSET(0x18162880)
#define GNHPLJOAFDK_LMIBBKLNCBP_OFFSET UNITYSDK_OFFSET(0x18162900)
#define GNHPLJOAFDK__CTOR_OFFSET UNITYSDK_OFFSET(0x18161F30)

inline static constexpr unsigned int GNHPLJOAFDK_TypeDefinitionIndex = 70043;

class GNHPLJOAFDK : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* JLNIKIBMCEF; // 0x10
	::IHBHCFAMHPH* HOGCDJNHHPC; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* JJMJJHJIPCL; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::Tuple_2<::System::Int32, ::System::String*>>* JIOCNPHMHBL; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* NOHECJPNFHP; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::Tuple_2<::System::Int32, ::System::String*>>* AFEHMEPPDGG; // 0x38
	::System::Int32 PELNGLAEKEO; // 0x40
	::System::Int32 FABPBDJBHMP; // 0x44
	::System::Int32 FPNLNLBNACH; // 0x48
	::EIBLKIBKABF JGKMCMONDEN; // 0x4C
	::System::Int32 _LMBNKCFFPJO_k__BackingField; // 0x50

	::System::Void _ctor(::IHBHCFAMHPH* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::IHBHCFAMHPH*))((::PBYTE)hIl2Cpp + GNHPLJOAFDK__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void DHINJHGKNAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHPLJOAFDK_DHINJHGKNAO_OFFSET))(this);
	}

	::System::Void GMKICCOMDLO(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GNHPLJOAFDK_GMKICCOMDLO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BBIFCOIDIOC(::GIFOBKBCCMA KPDGMCDBJHC)
	{
		return ((::System::Void(*)(::PVOID, ::GIFOBKBCCMA))((::PBYTE)hIl2Cpp + GNHPLJOAFDK_BBIFCOIDIOC_OFFSET))(this, KPDGMCDBJHC);
	}

	::System::Int32 GDFAOFMKADC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHPLJOAFDK_GDFAOFMKADC_OFFSET))(this);
	}

	::System::Void LMIBBKLNCBP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHPLJOAFDK_LMIBBKLNCBP_OFFSET))(this);
	}

	::System::Boolean EMJNHLBMIBI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHPLJOAFDK_EMJNHLBMIBI_OFFSET))(this);
	}
};

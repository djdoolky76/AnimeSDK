#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOAHOOCNDHM.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KNLCHPLFDDC_IBBLCAOMCKF_OFFSET UNITYSDK_OFFSET(0x16331970)
#define KNLCHPLFDDC_MECIEJPPFIG_OFFSET UNITYSDK_OFFSET(0x1634CEE0)
#define KNLCHPLFDDC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1634CE40)
#define KNLCHPLFDDC__CTOR_OFFSET UNITYSDK_OFFSET(0x1634CD80)

inline static constexpr unsigned int KNLCHPLFDDC_TypeDefinitionIndex = 88521;

class KNLCHPLFDDC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::EOAHOOCNDHM>* KJECEADCOAM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLCHPLFDDC__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLCHPLFDDC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Boolean MECIEJPPFIG(::System::Int32 DABCKBIAKHA, ::EOAHOOCNDHM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EOAHOOCNDHM&))((::PBYTE)hIl2Cpp + KNLCHPLFDDC_MECIEJPPFIG_OFFSET))(this, DABCKBIAKHA, EGEGIMGMJHN);
	}

	::System::Void IBBLCAOMCKF(::System::Int32 DABCKBIAKHA, ::EOAHOOCNDHM& EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::EOAHOOCNDHM&))((::PBYTE)hIl2Cpp + KNLCHPLFDDC_IBBLCAOMCKF_OFFSET))(this, DABCKBIAKHA, EGEGIMGMJHN);
	}
};

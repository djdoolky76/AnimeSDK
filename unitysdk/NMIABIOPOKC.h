#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OICMIEDFBHK.h"
#include "unitysdk/System/Object.h"

class HGBFKACDPBM;
class JNAGFFCCOHI;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NMIABIOPOKC_ALGDLJGCEHD_OFFSET UNITYSDK_OFFSET(0x1729CCC0)
#define NMIABIOPOKC_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1729CB30)
#define NMIABIOPOKC_KFNJFFDMLGF_OFFSET UNITYSDK_OFFSET(0x1729CB10)
#define NMIABIOPOKC_NMCPMEDGELF_OFFSET UNITYSDK_OFFSET(0x1729CCB0)
#define NMIABIOPOKC_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1729CB00)
#define NMIABIOPOKC__CTOR_OFFSET UNITYSDK_OFFSET(0x1729CB20)

inline static constexpr unsigned int NMIABIOPOKC_TypeDefinitionIndex = 61523;

class NMIABIOPOKC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JNAGFFCCOHI*>* _ACALDJFFAHI_k__BackingField; // 0x10
	::OICMIEDFBHK _HHNNKGPFJNO_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMIABIOPOKC__CTOR_OFFSET))(this);
	}

	::OICMIEDFBHK PPIFNHNGCGO()
	{
		return ((::OICMIEDFBHK(*)(::PVOID))((::PBYTE)hIl2Cpp + NMIABIOPOKC_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JNAGFFCCOHI*>* KFNJFFDMLGF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JNAGFFCCOHI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMIABIOPOKC_KFNJFFDMLGF_OFFSET))(this);
	}

	::NMIABIOPOKC* BBOMJDBNHIC(::HGBFKACDPBM* BLHJHPFBDCH)
	{
		return ((::NMIABIOPOKC*(*)(::PVOID, ::HGBFKACDPBM*))((::PBYTE)hIl2Cpp + NMIABIOPOKC_BBOMJDBNHIC_OFFSET))(this, BLHJHPFBDCH);
	}

	::System::Void NMCPMEDGELF(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JNAGFFCCOHI*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JNAGFFCCOHI*>*))((::PBYTE)hIl2Cpp + NMIABIOPOKC_NMCPMEDGELF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ALGDLJGCEHD(::OICMIEDFBHK EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::OICMIEDFBHK))((::PBYTE)hIl2Cpp + NMIABIOPOKC_ALGDLJGCEHD_OFFSET))(this, EGEGIMGMJHN);
	}
};

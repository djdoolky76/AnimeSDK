#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGKOFMFKNNO.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IIEOINDPNGP_DKBFHOAPHCE_OFFSET UNITYSDK_OFFSET(0x15EBF7D0)
#define IIEOINDPNGP_IGLKAKNLADP_OFFSET UNITYSDK_OFFSET(0x15EBF7C0)
#define IIEOINDPNGP_JDMDJFPBKJG_OFFSET UNITYSDK_OFFSET(0x15EBF7A0)
#define IIEOINDPNGP_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x15EBF610)
#define IIEOINDPNGP_KBPAKPLCLOB_OFFSET UNITYSDK_OFFSET(0x15EBF7E0)
#define IIEOINDPNGP_LABONJJJDKN_OFFSET UNITYSDK_OFFSET(0x15EBF790)
#define IIEOINDPNGP_OJKLLNIOEIM_OFFSET UNITYSDK_OFFSET(0x15EBF7B0)
#define IIEOINDPNGP__CTOR_OFFSET UNITYSDK_OFFSET(0x15EBF510)

inline static constexpr unsigned int IIEOINDPNGP_TypeDefinitionIndex = 39968;

class IIEOINDPNGP : public ::IGKOFMFKNNO
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _KMFBHLFCHAL_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _AMDEFJIHBIF_k__BackingField; // 0x18
	::System::Boolean _EJCHHEGHBBJ_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEOINDPNGP__CTOR_OFFSET))(this);
	}

	static ::IIEOINDPNGP* JFDOOELFAOA()
	{
		return ((::IIEOINDPNGP*(*)())((::PBYTE)hIl2Cpp + IIEOINDPNGP_JFDOOELFAOA_OFFSET))();
	}

	::System::Void LABONJJJDKN(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + IIEOINDPNGP_LABONJJJDKN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JDMDJFPBKJG(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IIEOINDPNGP_JDMDJFPBKJG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean OJKLLNIOEIM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEOINDPNGP_OJKLLNIOEIM_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* IGLKAKNLADP()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEOINDPNGP_IGLKAKNLADP_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* DKBFHOAPHCE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEOINDPNGP_DKBFHOAPHCE_OFFSET))(this);
	}

	::System::Void KBPAKPLCLOB(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + IIEOINDPNGP_KBPAKPLCLOB_OFFSET))(this, EGEGIMGMJHN);
	}
};

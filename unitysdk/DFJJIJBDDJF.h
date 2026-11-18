#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGKOFMFKNNO.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define DFJJIJBDDJF_JBKHFOIKHIP_OFFSET UNITYSDK_OFFSET(0x19A3BE70)
#define DFJJIJBDDJF_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x19A3BE80)
#define DFJJIJBDDJF_NOLDFGCLADH_OFFSET UNITYSDK_OFFSET(0x19A3BE60)
#define DFJJIJBDDJF__CTOR_OFFSET UNITYSDK_OFFSET(0x19A3BE00)

inline static constexpr unsigned int DFJJIJBDDJF_TypeDefinitionIndex = 76651;

class DFJJIJBDDJF : public ::IGKOFMFKNNO
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _IGAMAOHABBK_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJJIJBDDJF__CTOR_OFFSET))(this);
	}

	::System::Void NOLDFGCLADH(::System::Collections::Generic::List_1<::System::UInt32>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DFJJIJBDDJF_NOLDFGCLADH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* JBKHFOIKHIP()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJJIJBDDJF_JBKHFOIKHIP_OFFSET))(this);
	}

	static ::DFJJIJBDDJF* JFDOOELFAOA()
	{
		return ((::DFJJIJBDDJF*(*)())((::PBYTE)hIl2Cpp + DFJJIJBDDJF_JFDOOELFAOA_OFFSET))();
	}
};

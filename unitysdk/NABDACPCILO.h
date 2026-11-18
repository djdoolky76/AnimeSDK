#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGKOFMFKNNO.h"

class GOELGCHNEGC;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NABDACPCILO_BIFGOLMPAJG_OFFSET UNITYSDK_OFFSET(0xE54DAD0)
#define NABDACPCILO_BILHGKCECMK_OFFSET UNITYSDK_OFFSET(0xE54D960)
#define NABDACPCILO_DHFIEJNOLGH_OFFSET UNITYSDK_OFFSET(0xE54D980)
#define NABDACPCILO_GJPOEHPCAHN_OFFSET UNITYSDK_OFFSET(0xE54D970)
#define NABDACPCILO_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0xE54D990)
#define NABDACPCILO__CTOR_OFFSET UNITYSDK_OFFSET(0xE54D8A0)

inline static constexpr unsigned int NABDACPCILO_TypeDefinitionIndex = 53921;

class NABDACPCILO : public ::IGKOFMFKNNO
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _IENDINCGPFD_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::GOELGCHNEGC*>* _DBIMKIOMIKO_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NABDACPCILO__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::GOELGCHNEGC*>* BILHGKCECMK()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::GOELGCHNEGC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NABDACPCILO_BILHGKCECMK_OFFSET))(this);
	}

	::System::Void GJPOEHPCAHN(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::GOELGCHNEGC*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::GOELGCHNEGC*>*))((::PBYTE)hIl2Cpp + NABDACPCILO_GJPOEHPCAHN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* DHFIEJNOLGH()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NABDACPCILO_DHFIEJNOLGH_OFFSET))(this);
	}

	static ::NABDACPCILO* JFDOOELFAOA()
	{
		return ((::NABDACPCILO*(*)())((::PBYTE)hIl2Cpp + NABDACPCILO_JFDOOELFAOA_OFFSET))();
	}

	::System::Void BIFGOLMPAJG(::System::Collections::Generic::List_1<::System::UInt32>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NABDACPCILO_BIFGOLMPAJG_OFFSET))(this, EGEGIMGMJHN);
	}
};

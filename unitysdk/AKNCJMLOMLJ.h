#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MKFIKMFNOAC.h"
#include "unitysdk/PJBGHMDHHBM.h"

class JPIKPCGNIBF;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKNCJMLOMLJ_AJMBGPGCJIE_OFFSET UNITYSDK_OFFSET(0x1E719B20)
#define AKNCJMLOMLJ_APMAAMEDGPD_OFFSET UNITYSDK_OFFSET(0x1E71ABF0)
#define AKNCJMLOMLJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E7198A0)
#define AKNCJMLOMLJ_JNMBAHGIBKH_OFFSET UNITYSDK_OFFSET(0x1E71A120)
#define AKNCJMLOMLJ_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E71B270)
#define AKNCJMLOMLJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E71AC80)
#define AKNCJMLOMLJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E719A10)
#define AKNCJMLOMLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7198E0)

inline static constexpr unsigned int AKNCJMLOMLJ_TypeDefinitionIndex = 93709;

class AKNCJMLOMLJ : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* FHBKHOEPNIH; // 0x18
	::MKFIKMFNOAC DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::JPIKPCGNIBF*>*>* IGAGPEKILLJ; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::JPIKPCGNIBF*>* JMINOGAOFIL; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKNCJMLOMLJ__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKNCJMLOMLJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKNCJMLOMLJ_PHOADBJGFBE_OFFSET))(this);
	}

	::JPIKPCGNIBF* AJMBGPGCJIE(::System::Collections::Generic::List_1<::System::Int32>* LEBPIIFGBCJ)
	{
		return ((::JPIKPCGNIBF*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + AKNCJMLOMLJ_AJMBGPGCJIE_OFFSET))(this, LEBPIIFGBCJ);
	}

	::System::Collections::Generic::List_1<::System::Int32>* JNMBAHGIBKH(::System::Collections::Generic::List_1<::System::Int32>* LEBPIIFGBCJ)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + AKNCJMLOMLJ_JNMBAHGIBKH_OFFSET))(this, LEBPIIFGBCJ);
	}

	::System::Collections::Generic::List_1<::JPIKPCGNIBF*>* APMAAMEDGPD()
	{
		return ((::System::Collections::Generic::List_1<::JPIKPCGNIBF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKNCJMLOMLJ_APMAAMEDGPD_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKNCJMLOMLJ_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::JPIKPCGNIBF* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::JPIKPCGNIBF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKNCJMLOMLJ_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}
};

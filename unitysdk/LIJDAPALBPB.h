#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FDDPPOELLBE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LIJDAPALBPB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LIJDAPALBPB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E54B0)
#define LIJDAPALBPB_DLDGHEKCFFP_1_OFFSET UNITYSDK_OFFSET(0x19569920)
#define LIJDAPALBPB_DLDGHEKCFFP_OFFSET UNITYSDK_OFFSET(0x195698B0)
#define LIJDAPALBPB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LIJDAPALBPB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LIJDAPALBPB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E5490)
#define LIJDAPALBPB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E54A0)
#define LIJDAPALBPB___INIT_OFFSET UNITYSDK_OFFSET(0x7E5470)

inline static constexpr unsigned int LIJDAPALBPB_TypeDefinitionIndex = 9385;

struct alignas(8) LIJDAPALBPB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJDAPALBPB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LIJDAPALBPB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FDDPPOELLBE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FDDPPOELLBE&, ::System::Int32&))((::PBYTE)hIl2Cpp + LIJDAPALBPB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJDAPALBPB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::LIJDAPALBPB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LIJDAPALBPB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LIJDAPALBPB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LIJDAPALBPB DLDGHEKCFFP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LIJDAPALBPB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LIJDAPALBPB_DLDGHEKCFFP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FDDPPOELLBE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FDDPPOELLBE&))((::PBYTE)hIl2Cpp + LIJDAPALBPB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::LIJDAPALBPB DLDGHEKCFFP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LIJDAPALBPB EIFONLCJOPG)
	{
		return ((::LIJDAPALBPB(*)(::FlatBuffers::ByteBuffer*, ::LIJDAPALBPB))((::PBYTE)hIl2Cpp + LIJDAPALBPB_DLDGHEKCFFP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJDAPALBPB_GHKKNCCLPAN_OFFSET))(this);
	}
};

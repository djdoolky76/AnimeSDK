#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CHCKLDCGJAE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HGDMEGJKFHF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HGDMEGJKFHF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B55A0)
#define HGDMEGJKFHF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HGDMEGJKFHF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HGDMEGJKFHF_LBGLDOCENPM_1_OFFSET UNITYSDK_OFFSET(0x17BFE910)
#define HGDMEGJKFHF_LBGLDOCENPM_OFFSET UNITYSDK_OFFSET(0x17BFE8A0)
#define HGDMEGJKFHF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B55F0)
#define HGDMEGJKFHF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B55E0)
#define HGDMEGJKFHF___INIT_OFFSET UNITYSDK_OFFSET(0x7B5580)

inline static constexpr unsigned int HGDMEGJKFHF_TypeDefinitionIndex = 15530;

struct alignas(8) HGDMEGJKFHF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDMEGJKFHF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HGDMEGJKFHF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HGDMEGJKFHF LBGLDOCENPM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HGDMEGJKFHF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HGDMEGJKFHF_LBGLDOCENPM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::HGDMEGJKFHF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HGDMEGJKFHF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HGDMEGJKFHF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HGDMEGJKFHF LBGLDOCENPM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HGDMEGJKFHF EIFONLCJOPG)
	{
		return ((::HGDMEGJKFHF(*)(::FlatBuffers::ByteBuffer*, ::HGDMEGJKFHF))((::PBYTE)hIl2Cpp + HGDMEGJKFHF_LBGLDOCENPM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CHCKLDCGJAE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CHCKLDCGJAE&))((::PBYTE)hIl2Cpp + HGDMEGJKFHF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDMEGJKFHF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDMEGJKFHF_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CHCKLDCGJAE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CHCKLDCGJAE&, ::System::Int32&))((::PBYTE)hIl2Cpp + HGDMEGJKFHF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IPAAAGBJIEC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KIFJGJMFEJL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KIFJGJMFEJL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E5C00)
#define KIFJGJMFEJL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KIFJGJMFEJL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KIFJGJMFEJL_LAGGDFBOGCK_1_OFFSET UNITYSDK_OFFSET(0x1957DBF0)
#define KIFJGJMFEJL_LAGGDFBOGCK_OFFSET UNITYSDK_OFFSET(0x1957DB80)
#define KIFJGJMFEJL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E5BF0)
#define KIFJGJMFEJL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E5BE0)
#define KIFJGJMFEJL___INIT_OFFSET UNITYSDK_OFFSET(0x7E5BC0)

inline static constexpr unsigned int KIFJGJMFEJL_TypeDefinitionIndex = 14260;

struct alignas(8) KIFJGJMFEJL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFJGJMFEJL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KIFJGJMFEJL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFJGJMFEJL_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IPAAAGBJIEC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IPAAAGBJIEC&, ::System::Int32&))((::PBYTE)hIl2Cpp + KIFJGJMFEJL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::KIFJGJMFEJL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KIFJGJMFEJL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KIFJGJMFEJL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KIFJGJMFEJL LAGGDFBOGCK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KIFJGJMFEJL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KIFJGJMFEJL_LAGGDFBOGCK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFJGJMFEJL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::KIFJGJMFEJL LAGGDFBOGCK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KIFJGJMFEJL EIFONLCJOPG)
	{
		return ((::KIFJGJMFEJL(*)(::FlatBuffers::ByteBuffer*, ::KIFJGJMFEJL))((::PBYTE)hIl2Cpp + KIFJGJMFEJL_LAGGDFBOGCK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IPAAAGBJIEC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IPAAAGBJIEC&))((::PBYTE)hIl2Cpp + KIFJGJMFEJL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MHALLKLJKHN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LACADPFMONL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LACADPFMONL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E5EB0)
#define LACADPFMONL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LACADPFMONL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LACADPFMONL_HABBHEJFINH_1_OFFSET UNITYSDK_OFFSET(0x19588D00)
#define LACADPFMONL_HABBHEJFINH_OFFSET UNITYSDK_OFFSET(0x19588C60)
#define LACADPFMONL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E5EF0)
#define LACADPFMONL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E5EA0)
#define LACADPFMONL___INIT_OFFSET UNITYSDK_OFFSET(0x7E5E80)

inline static constexpr unsigned int LACADPFMONL_TypeDefinitionIndex = 16769;

struct alignas(8) LACADPFMONL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LACADPFMONL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LACADPFMONL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LACADPFMONL_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LACADPFMONL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LACADPFMONL HABBHEJFINH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LACADPFMONL EIFONLCJOPG)
	{
		return ((::LACADPFMONL(*)(::FlatBuffers::ByteBuffer*, ::LACADPFMONL))((::PBYTE)hIl2Cpp + LACADPFMONL_HABBHEJFINH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::LACADPFMONL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LACADPFMONL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LACADPFMONL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LACADPFMONL HABBHEJFINH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LACADPFMONL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LACADPFMONL_HABBHEJFINH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MHALLKLJKHN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MHALLKLJKHN&))((::PBYTE)hIl2Cpp + LACADPFMONL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MHALLKLJKHN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MHALLKLJKHN&, ::System::Int32&))((::PBYTE)hIl2Cpp + LACADPFMONL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};

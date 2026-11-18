#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DHKOFJCPANO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FABCCBNAOOO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FABCCBNAOOO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x766930)
#define FABCCBNAOOO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FABCCBNAOOO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FABCCBNAOOO_INAMIGDKJOA_1_OFFSET UNITYSDK_OFFSET(0x157B6090)
#define FABCCBNAOOO_INAMIGDKJOA_OFFSET UNITYSDK_OFFSET(0x157B6030)
#define FABCCBNAOOO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x766920)
#define FABCCBNAOOO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x766970)
#define FABCCBNAOOO___INIT_OFFSET UNITYSDK_OFFSET(0x766900)

inline static constexpr unsigned int FABCCBNAOOO_TypeDefinitionIndex = 11052;

struct alignas(8) FABCCBNAOOO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FABCCBNAOOO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FABCCBNAOOO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DHKOFJCPANO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DHKOFJCPANO&, ::System::Int32&))((::PBYTE)hIl2Cpp + FABCCBNAOOO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::FABCCBNAOOO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FABCCBNAOOO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FABCCBNAOOO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FABCCBNAOOO INAMIGDKJOA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FABCCBNAOOO EIFONLCJOPG)
	{
		return ((::FABCCBNAOOO(*)(::FlatBuffers::ByteBuffer*, ::FABCCBNAOOO))((::PBYTE)hIl2Cpp + FABCCBNAOOO_INAMIGDKJOA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::FABCCBNAOOO INAMIGDKJOA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FABCCBNAOOO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FABCCBNAOOO_INAMIGDKJOA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DHKOFJCPANO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DHKOFJCPANO&))((::PBYTE)hIl2Cpp + FABCCBNAOOO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FABCCBNAOOO_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FABCCBNAOOO_PPOMNIFACOL_OFFSET))(this);
	}
};

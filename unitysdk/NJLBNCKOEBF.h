#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JPJABODOAOF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NJLBNCKOEBF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NJLBNCKOEBF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x820680)
#define NJLBNCKOEBF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NJLBNCKOEBF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NJLBNCKOEBF_IBDKODOLOMA_1_OFFSET UNITYSDK_OFFSET(0x1C18F0E0)
#define NJLBNCKOEBF_IBDKODOLOMA_OFFSET UNITYSDK_OFFSET(0x1C18F080)
#define NJLBNCKOEBF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x820670)
#define NJLBNCKOEBF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x820660)
#define NJLBNCKOEBF___INIT_OFFSET UNITYSDK_OFFSET(0x820640)

inline static constexpr unsigned int NJLBNCKOEBF_TypeDefinitionIndex = 10907;

struct alignas(8) NJLBNCKOEBF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJLBNCKOEBF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NJLBNCKOEBF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJLBNCKOEBF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JPJABODOAOF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JPJABODOAOF&, ::System::Int32&))((::PBYTE)hIl2Cpp + NJLBNCKOEBF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JPJABODOAOF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JPJABODOAOF&))((::PBYTE)hIl2Cpp + NJLBNCKOEBF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::NJLBNCKOEBF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NJLBNCKOEBF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NJLBNCKOEBF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NJLBNCKOEBF IBDKODOLOMA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NJLBNCKOEBF EIFONLCJOPG)
	{
		return ((::NJLBNCKOEBF(*)(::FlatBuffers::ByteBuffer*, ::NJLBNCKOEBF))((::PBYTE)hIl2Cpp + NJLBNCKOEBF_IBDKODOLOMA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::NJLBNCKOEBF IBDKODOLOMA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NJLBNCKOEBF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NJLBNCKOEBF_IBDKODOLOMA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJLBNCKOEBF_GHKKNCCLPAN_OFFSET))(this);
	}
};

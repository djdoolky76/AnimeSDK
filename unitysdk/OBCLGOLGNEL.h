#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DNCFIOGMIFL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OBCLGOLGNEL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OBCLGOLGNEL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C4950)
#define OBCLGOLGNEL_FGGIJNCCBNA_1_OFFSET UNITYSDK_OFFSET(0x17FDAED0)
#define OBCLGOLGNEL_FGGIJNCCBNA_OFFSET UNITYSDK_OFFSET(0x17FDABD0)
#define OBCLGOLGNEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OBCLGOLGNEL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OBCLGOLGNEL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C4940)
#define OBCLGOLGNEL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C4990)
#define OBCLGOLGNEL___INIT_OFFSET UNITYSDK_OFFSET(0x7C4920)

inline static constexpr unsigned int OBCLGOLGNEL_TypeDefinitionIndex = 9480;

struct alignas(8) OBCLGOLGNEL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBCLGOLGNEL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBCLGOLGNEL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OBCLGOLGNEL FGGIJNCCBNA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OBCLGOLGNEL EIFONLCJOPG)
	{
		return ((::OBCLGOLGNEL(*)(::FlatBuffers::ByteBuffer*, ::OBCLGOLGNEL))((::PBYTE)hIl2Cpp + OBCLGOLGNEL_FGGIJNCCBNA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DNCFIOGMIFL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DNCFIOGMIFL&))((::PBYTE)hIl2Cpp + OBCLGOLGNEL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DNCFIOGMIFL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DNCFIOGMIFL&, ::System::Int32&))((::PBYTE)hIl2Cpp + OBCLGOLGNEL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBCLGOLGNEL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::OBCLGOLGNEL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OBCLGOLGNEL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBCLGOLGNEL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBCLGOLGNEL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::OBCLGOLGNEL FGGIJNCCBNA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OBCLGOLGNEL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBCLGOLGNEL_FGGIJNCCBNA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};

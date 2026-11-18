#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LLHAIFDBHCH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JAKDMKBEHHC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JAKDMKBEHHC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FD590)
#define JAKDMKBEHHC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JAKDMKBEHHC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JAKDMKBEHHC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FD5D0)
#define JAKDMKBEHHC_ONDCDPPCLGC_1_OFFSET UNITYSDK_OFFSET(0x1A5E7C90)
#define JAKDMKBEHHC_ONDCDPPCLGC_OFFSET UNITYSDK_OFFSET(0x1A5E7C20)
#define JAKDMKBEHHC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FD5E0)
#define JAKDMKBEHHC___INIT_OFFSET UNITYSDK_OFFSET(0x7FD570)

inline static constexpr unsigned int JAKDMKBEHHC_TypeDefinitionIndex = 15360;

struct alignas(8) JAKDMKBEHHC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAKDMKBEHHC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JAKDMKBEHHC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::JAKDMKBEHHC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JAKDMKBEHHC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JAKDMKBEHHC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JAKDMKBEHHC ONDCDPPCLGC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JAKDMKBEHHC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JAKDMKBEHHC_ONDCDPPCLGC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LLHAIFDBHCH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LLHAIFDBHCH&, ::System::Int32&))((::PBYTE)hIl2Cpp + JAKDMKBEHHC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAKDMKBEHHC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LLHAIFDBHCH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LLHAIFDBHCH&))((::PBYTE)hIl2Cpp + JAKDMKBEHHC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAKDMKBEHHC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::JAKDMKBEHHC ONDCDPPCLGC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JAKDMKBEHHC EIFONLCJOPG)
	{
		return ((::JAKDMKBEHHC(*)(::FlatBuffers::ByteBuffer*, ::JAKDMKBEHHC))((::PBYTE)hIl2Cpp + JAKDMKBEHHC_ONDCDPPCLGC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};

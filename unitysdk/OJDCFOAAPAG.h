#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NCKLAEDPBKE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OJDCFOAAPAG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OJDCFOAAPAG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x936E80)
#define OJDCFOAAPAG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OJDCFOAAPAG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OJDCFOAAPAG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x936E70)
#define OJDCFOAAPAG_ODEKBCOFBIM_1_OFFSET UNITYSDK_OFFSET(0x1EDB4730)
#define OJDCFOAAPAG_ODEKBCOFBIM_OFFSET UNITYSDK_OFFSET(0x1EDB4430)
#define OJDCFOAAPAG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x936E60)
#define OJDCFOAAPAG___INIT_OFFSET UNITYSDK_OFFSET(0x936E40)

inline static constexpr unsigned int OJDCFOAAPAG_TypeDefinitionIndex = 12276;

struct alignas(8) OJDCFOAAPAG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJDCFOAAPAG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OJDCFOAAPAG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OJDCFOAAPAG ODEKBCOFBIM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OJDCFOAAPAG EIFONLCJOPG)
	{
		return ((::OJDCFOAAPAG(*)(::FlatBuffers::ByteBuffer*, ::OJDCFOAAPAG))((::PBYTE)hIl2Cpp + OJDCFOAAPAG_ODEKBCOFBIM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NCKLAEDPBKE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NCKLAEDPBKE&))((::PBYTE)hIl2Cpp + OJDCFOAAPAG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJDCFOAAPAG_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NCKLAEDPBKE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NCKLAEDPBKE&, ::System::Int32&))((::PBYTE)hIl2Cpp + OJDCFOAAPAG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::OJDCFOAAPAG ODEKBCOFBIM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OJDCFOAAPAG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OJDCFOAAPAG_ODEKBCOFBIM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::OJDCFOAAPAG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OJDCFOAAPAG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OJDCFOAAPAG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJDCFOAAPAG_GHKKNCCLPAN_OFFSET))(this);
	}
};

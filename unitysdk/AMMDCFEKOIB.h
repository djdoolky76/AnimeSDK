#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MLLHACPEIFP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AMMDCFEKOIB_BEHALCKBKAG_1_OFFSET UNITYSDK_OFFSET(0x1ADAB730)
#define AMMDCFEKOIB_BEHALCKBKAG_OFFSET UNITYSDK_OFFSET(0x1ADAB6C0)
#define AMMDCFEKOIB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AMMDCFEKOIB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x806C70)
#define AMMDCFEKOIB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AMMDCFEKOIB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AMMDCFEKOIB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x806CB0)
#define AMMDCFEKOIB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x806C60)
#define AMMDCFEKOIB___INIT_OFFSET UNITYSDK_OFFSET(0x806C40)

inline static constexpr unsigned int AMMDCFEKOIB_TypeDefinitionIndex = 15114;

struct alignas(8) AMMDCFEKOIB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMMDCFEKOIB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMMDCFEKOIB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMMDCFEKOIB_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MLLHACPEIFP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MLLHACPEIFP&))((::PBYTE)hIl2Cpp + AMMDCFEKOIB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::AMMDCFEKOIB BEHALCKBKAG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AMMDCFEKOIB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMMDCFEKOIB_BEHALCKBKAG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::AMMDCFEKOIB BEHALCKBKAG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AMMDCFEKOIB EIFONLCJOPG)
	{
		return ((::AMMDCFEKOIB(*)(::FlatBuffers::ByteBuffer*, ::AMMDCFEKOIB))((::PBYTE)hIl2Cpp + AMMDCFEKOIB_BEHALCKBKAG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMMDCFEKOIB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::AMMDCFEKOIB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AMMDCFEKOIB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMMDCFEKOIB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MLLHACPEIFP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MLLHACPEIFP&, ::System::Int32&))((::PBYTE)hIl2Cpp + AMMDCFEKOIB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};

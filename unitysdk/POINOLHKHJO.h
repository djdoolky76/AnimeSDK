#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NOEODPCIHNP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define POINOLHKHJO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define POINOLHKHJO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C50A0)
#define POINOLHKHJO_GCCHBAPIBMI_1_OFFSET UNITYSDK_OFFSET(0x17FF4E60)
#define POINOLHKHJO_GCCHBAPIBMI_OFFSET UNITYSDK_OFFSET(0x17FF4DF0)
#define POINOLHKHJO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define POINOLHKHJO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define POINOLHKHJO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C5090)
#define POINOLHKHJO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C5080)
#define POINOLHKHJO___INIT_OFFSET UNITYSDK_OFFSET(0x7C5060)

inline static constexpr unsigned int POINOLHKHJO_TypeDefinitionIndex = 11250;

struct alignas(8) POINOLHKHJO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + POINOLHKHJO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POINOLHKHJO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POINOLHKHJO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::POINOLHKHJO GCCHBAPIBMI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::POINOLHKHJO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POINOLHKHJO_GCCHBAPIBMI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NOEODPCIHNP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NOEODPCIHNP&, ::System::Int32&))((::PBYTE)hIl2Cpp + POINOLHKHJO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NOEODPCIHNP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NOEODPCIHNP&))((::PBYTE)hIl2Cpp + POINOLHKHJO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::POINOLHKHJO GCCHBAPIBMI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::POINOLHKHJO EIFONLCJOPG)
	{
		return ((::POINOLHKHJO(*)(::FlatBuffers::ByteBuffer*, ::POINOLHKHJO))((::PBYTE)hIl2Cpp + POINOLHKHJO_GCCHBAPIBMI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POINOLHKHJO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::POINOLHKHJO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::POINOLHKHJO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POINOLHKHJO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FMBBCHCAPBP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KPPOMFGHENC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KPPOMFGHENC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EEFD0)
#define KPPOMFGHENC_CPBAEGOONLE_1_OFFSET UNITYSDK_OFFSET(0x19D9F780)
#define KPPOMFGHENC_CPBAEGOONLE_OFFSET UNITYSDK_OFFSET(0x19D9F710)
#define KPPOMFGHENC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KPPOMFGHENC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KPPOMFGHENC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EF010)
#define KPPOMFGHENC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EEFC0)
#define KPPOMFGHENC___INIT_OFFSET UNITYSDK_OFFSET(0x7EEFA0)

inline static constexpr unsigned int KPPOMFGHENC_TypeDefinitionIndex = 15177;

struct alignas(8) KPPOMFGHENC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPOMFGHENC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KPPOMFGHENC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPOMFGHENC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::KPPOMFGHENC CPBAEGOONLE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KPPOMFGHENC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KPPOMFGHENC_CPBAEGOONLE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::KPPOMFGHENC CPBAEGOONLE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KPPOMFGHENC EIFONLCJOPG)
	{
		return ((::KPPOMFGHENC(*)(::FlatBuffers::ByteBuffer*, ::KPPOMFGHENC))((::PBYTE)hIl2Cpp + KPPOMFGHENC_CPBAEGOONLE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FMBBCHCAPBP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FMBBCHCAPBP&))((::PBYTE)hIl2Cpp + KPPOMFGHENC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::KPPOMFGHENC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KPPOMFGHENC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KPPOMFGHENC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FMBBCHCAPBP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FMBBCHCAPBP&, ::System::Int32&))((::PBYTE)hIl2Cpp + KPPOMFGHENC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPOMFGHENC_GHKKNCCLPAN_OFFSET))(this);
	}
};

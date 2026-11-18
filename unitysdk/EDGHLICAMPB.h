#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BMLFKAKNAEK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EDGHLICAMPB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EDGHLICAMPB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E3130)
#define EDGHLICAMPB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EDGHLICAMPB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EDGHLICAMPB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E3120)
#define EDGHLICAMPB_PJLDANHEFPD_1_OFFSET UNITYSDK_OFFSET(0x1951AC40)
#define EDGHLICAMPB_PJLDANHEFPD_OFFSET UNITYSDK_OFFSET(0x1951ABD0)
#define EDGHLICAMPB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E3110)
#define EDGHLICAMPB___INIT_OFFSET UNITYSDK_OFFSET(0x7E30F0)

inline static constexpr unsigned int EDGHLICAMPB_TypeDefinitionIndex = 11482;

struct alignas(8) EDGHLICAMPB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGHLICAMPB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EDGHLICAMPB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGHLICAMPB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::EDGHLICAMPB PJLDANHEFPD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EDGHLICAMPB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EDGHLICAMPB_PJLDANHEFPD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGHLICAMPB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BMLFKAKNAEK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BMLFKAKNAEK&))((::PBYTE)hIl2Cpp + EDGHLICAMPB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::EDGHLICAMPB PJLDANHEFPD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EDGHLICAMPB EIFONLCJOPG)
	{
		return ((::EDGHLICAMPB(*)(::FlatBuffers::ByteBuffer*, ::EDGHLICAMPB))((::PBYTE)hIl2Cpp + EDGHLICAMPB_PJLDANHEFPD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BMLFKAKNAEK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BMLFKAKNAEK&, ::System::Int32&))((::PBYTE)hIl2Cpp + EDGHLICAMPB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::EDGHLICAMPB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EDGHLICAMPB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EDGHLICAMPB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KCBMKCADNNL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ABPGPOOEPNO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ABPGPOOEPNO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x815DE0)
#define ABPGPOOEPNO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ABPGPOOEPNO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ABPGPOOEPNO_IGDIFELKALF_1_OFFSET UNITYSDK_OFFSET(0x1B980EA0)
#define ABPGPOOEPNO_IGDIFELKALF_OFFSET UNITYSDK_OFFSET(0x1B980E30)
#define ABPGPOOEPNO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x815DC0)
#define ABPGPOOEPNO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x815DD0)
#define ABPGPOOEPNO___INIT_OFFSET UNITYSDK_OFFSET(0x815DA0)

inline static constexpr unsigned int ABPGPOOEPNO_TypeDefinitionIndex = 17401;

struct alignas(8) ABPGPOOEPNO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPGPOOEPNO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ABPGPOOEPNO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KCBMKCADNNL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KCBMKCADNNL&))((::PBYTE)hIl2Cpp + ABPGPOOEPNO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPGPOOEPNO_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KCBMKCADNNL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KCBMKCADNNL&, ::System::Int32&))((::PBYTE)hIl2Cpp + ABPGPOOEPNO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPGPOOEPNO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::ABPGPOOEPNO IGDIFELKALF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ABPGPOOEPNO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ABPGPOOEPNO_IGDIFELKALF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::ABPGPOOEPNO IGDIFELKALF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ABPGPOOEPNO EIFONLCJOPG)
	{
		return ((::ABPGPOOEPNO(*)(::FlatBuffers::ByteBuffer*, ::ABPGPOOEPNO))((::PBYTE)hIl2Cpp + ABPGPOOEPNO_IGDIFELKALF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::ABPGPOOEPNO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ABPGPOOEPNO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ABPGPOOEPNO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};

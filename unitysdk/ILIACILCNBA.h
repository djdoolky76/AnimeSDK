#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LPJIKIMGBCK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ILIACILCNBA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ILIACILCNBA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80A850)
#define ILIACILCNBA_EBIJICACGBO_1_OFFSET UNITYSDK_OFFSET(0x1B1313F0)
#define ILIACILCNBA_EBIJICACGBO_OFFSET UNITYSDK_OFFSET(0x1B131350)
#define ILIACILCNBA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ILIACILCNBA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ILIACILCNBA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80A830)
#define ILIACILCNBA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80A840)
#define ILIACILCNBA___INIT_OFFSET UNITYSDK_OFFSET(0x80A810)

inline static constexpr unsigned int ILIACILCNBA_TypeDefinitionIndex = 12195;

struct alignas(8) ILIACILCNBA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILIACILCNBA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ILIACILCNBA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::ILIACILCNBA EBIJICACGBO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ILIACILCNBA EIFONLCJOPG)
	{
		return ((::ILIACILCNBA(*)(::FlatBuffers::ByteBuffer*, ::ILIACILCNBA))((::PBYTE)hIl2Cpp + ILIACILCNBA_EBIJICACGBO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::ILIACILCNBA EBIJICACGBO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ILIACILCNBA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ILIACILCNBA_EBIJICACGBO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILIACILCNBA_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LPJIKIMGBCK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LPJIKIMGBCK&, ::System::Int32&))((::PBYTE)hIl2Cpp + ILIACILCNBA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LPJIKIMGBCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LPJIKIMGBCK&))((::PBYTE)hIl2Cpp + ILIACILCNBA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILIACILCNBA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::ILIACILCNBA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ILIACILCNBA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ILIACILCNBA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};

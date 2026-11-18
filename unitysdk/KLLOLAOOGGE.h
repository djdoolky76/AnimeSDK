#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NOKMNBMHACB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KLLOLAOOGGE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KLLOLAOOGGE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80EFC0)
#define KLLOLAOOGGE_FAKLNONGCCC_1_OFFSET UNITYSDK_OFFSET(0x1B509ED0)
#define KLLOLAOOGGE_FAKLNONGCCC_OFFSET UNITYSDK_OFFSET(0x1B509E60)
#define KLLOLAOOGGE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KLLOLAOOGGE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KLLOLAOOGGE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80EFB0)
#define KLLOLAOOGGE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80F000)
#define KLLOLAOOGGE___INIT_OFFSET UNITYSDK_OFFSET(0x80EF90)

inline static constexpr unsigned int KLLOLAOOGGE_TypeDefinitionIndex = 17532;

struct alignas(8) KLLOLAOOGGE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLOLAOOGGE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLLOLAOOGGE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NOKMNBMHACB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NOKMNBMHACB&))((::PBYTE)hIl2Cpp + KLLOLAOOGGE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::KLLOLAOOGGE FAKLNONGCCC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KLLOLAOOGGE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLLOLAOOGGE_FAKLNONGCCC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NOKMNBMHACB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NOKMNBMHACB&, ::System::Int32&))((::PBYTE)hIl2Cpp + KLLOLAOOGGE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLOLAOOGGE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::KLLOLAOOGGE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KLLOLAOOGGE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLLOLAOOGGE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLOLAOOGGE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::KLLOLAOOGGE FAKLNONGCCC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KLLOLAOOGGE EIFONLCJOPG)
	{
		return ((::KLLOLAOOGGE(*)(::FlatBuffers::ByteBuffer*, ::KLLOLAOOGGE))((::PBYTE)hIl2Cpp + KLLOLAOOGGE_FAKLNONGCCC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NFANIHNKFDM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LOGNNALMNMN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LOGNNALMNMN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C3CE0)
#define LOGNNALMNMN_EPDJJLKOEMB_1_OFFSET UNITYSDK_OFFSET(0x17FBDF80)
#define LOGNNALMNMN_EPDJJLKOEMB_OFFSET UNITYSDK_OFFSET(0x17FBDF10)
#define LOGNNALMNMN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LOGNNALMNMN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LOGNNALMNMN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C3CD0)
#define LOGNNALMNMN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C3D20)
#define LOGNNALMNMN___INIT_OFFSET UNITYSDK_OFFSET(0x7C3CB0)

inline static constexpr unsigned int LOGNNALMNMN_TypeDefinitionIndex = 15343;

struct alignas(8) LOGNNALMNMN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGNNALMNMN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LOGNNALMNMN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NFANIHNKFDM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NFANIHNKFDM&, ::System::Int32&))((::PBYTE)hIl2Cpp + LOGNNALMNMN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::LOGNNALMNMN EPDJJLKOEMB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LOGNNALMNMN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LOGNNALMNMN_EPDJJLKOEMB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGNNALMNMN_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NFANIHNKFDM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NFANIHNKFDM&))((::PBYTE)hIl2Cpp + LOGNNALMNMN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::LOGNNALMNMN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LOGNNALMNMN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LOGNNALMNMN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGNNALMNMN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LOGNNALMNMN EPDJJLKOEMB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LOGNNALMNMN EIFONLCJOPG)
	{
		return ((::LOGNNALMNMN(*)(::FlatBuffers::ByteBuffer*, ::LOGNNALMNMN))((::PBYTE)hIl2Cpp + LOGNNALMNMN_EPDJJLKOEMB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};

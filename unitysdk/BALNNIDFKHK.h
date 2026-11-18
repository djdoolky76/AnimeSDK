#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HLKFPNHEDJM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BALNNIDFKHK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BALNNIDFKHK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x825C40)
#define BALNNIDFKHK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BALNNIDFKHK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BALNNIDFKHK_KGNICMJCGFI_1_OFFSET UNITYSDK_OFFSET(0x1C5107D0)
#define BALNNIDFKHK_KGNICMJCGFI_OFFSET UNITYSDK_OFFSET(0x1C510760)
#define BALNNIDFKHK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x825C80)
#define BALNNIDFKHK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x825C90)
#define BALNNIDFKHK___INIT_OFFSET UNITYSDK_OFFSET(0x825C20)

inline static constexpr unsigned int BALNNIDFKHK_TypeDefinitionIndex = 14964;

struct alignas(8) BALNNIDFKHK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BALNNIDFKHK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BALNNIDFKHK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::BALNNIDFKHK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BALNNIDFKHK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BALNNIDFKHK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BALNNIDFKHK KGNICMJCGFI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BALNNIDFKHK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BALNNIDFKHK_KGNICMJCGFI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::BALNNIDFKHK KGNICMJCGFI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BALNNIDFKHK EIFONLCJOPG)
	{
		return ((::BALNNIDFKHK(*)(::FlatBuffers::ByteBuffer*, ::BALNNIDFKHK))((::PBYTE)hIl2Cpp + BALNNIDFKHK_KGNICMJCGFI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HLKFPNHEDJM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HLKFPNHEDJM&, ::System::Int32&))((::PBYTE)hIl2Cpp + BALNNIDFKHK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HLKFPNHEDJM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HLKFPNHEDJM&))((::PBYTE)hIl2Cpp + BALNNIDFKHK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BALNNIDFKHK_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BALNNIDFKHK_PPOMNIFACOL_OFFSET))(this);
	}
};

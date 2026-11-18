#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FOCBCEDNANG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ONDCCLBHADL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ONDCCLBHADL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DA9E0)
#define ONDCCLBHADL_EMJGOMLPPBD_1_OFFSET UNITYSDK_OFFSET(0x191387E0)
#define ONDCCLBHADL_EMJGOMLPPBD_OFFSET UNITYSDK_OFFSET(0x19138770)
#define ONDCCLBHADL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ONDCCLBHADL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ONDCCLBHADL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DAA20)
#define ONDCCLBHADL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DA9D0)
#define ONDCCLBHADL___INIT_OFFSET UNITYSDK_OFFSET(0x7DA9B0)

inline static constexpr unsigned int ONDCCLBHADL_TypeDefinitionIndex = 15719;

struct alignas(8) ONDCCLBHADL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDCCLBHADL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONDCCLBHADL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDCCLBHADL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::ONDCCLBHADL EMJGOMLPPBD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ONDCCLBHADL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONDCCLBHADL_EMJGOMLPPBD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::ONDCCLBHADL EMJGOMLPPBD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ONDCCLBHADL EIFONLCJOPG)
	{
		return ((::ONDCCLBHADL(*)(::FlatBuffers::ByteBuffer*, ::ONDCCLBHADL))((::PBYTE)hIl2Cpp + ONDCCLBHADL_EMJGOMLPPBD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDCCLBHADL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::ONDCCLBHADL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ONDCCLBHADL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONDCCLBHADL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FOCBCEDNANG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FOCBCEDNANG&, ::System::Int32&))((::PBYTE)hIl2Cpp + ONDCCLBHADL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FOCBCEDNANG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FOCBCEDNANG&))((::PBYTE)hIl2Cpp + ONDCCLBHADL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};

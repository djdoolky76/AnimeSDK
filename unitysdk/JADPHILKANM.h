#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LDOKGGJHEAH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JADPHILKANM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JADPHILKANM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80AB70)
#define JADPHILKANM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JADPHILKANM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JADPHILKANM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80AB60)
#define JADPHILKANM_NAAIPLAALCK_1_OFFSET UNITYSDK_OFFSET(0x1B1353F0)
#define JADPHILKANM_NAAIPLAALCK_OFFSET UNITYSDK_OFFSET(0x1B135350)
#define JADPHILKANM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80ABB0)
#define JADPHILKANM___INIT_OFFSET UNITYSDK_OFFSET(0x80AB40)

inline static constexpr unsigned int JADPHILKANM_TypeDefinitionIndex = 12266;

struct alignas(8) JADPHILKANM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JADPHILKANM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JADPHILKANM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JADPHILKANM_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LDOKGGJHEAH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LDOKGGJHEAH&, ::System::Int32&))((::PBYTE)hIl2Cpp + JADPHILKANM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::JADPHILKANM NAAIPLAALCK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JADPHILKANM EIFONLCJOPG)
	{
		return ((::JADPHILKANM(*)(::FlatBuffers::ByteBuffer*, ::JADPHILKANM))((::PBYTE)hIl2Cpp + JADPHILKANM_NAAIPLAALCK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::JADPHILKANM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JADPHILKANM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JADPHILKANM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JADPHILKANM NAAIPLAALCK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JADPHILKANM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JADPHILKANM_NAAIPLAALCK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JADPHILKANM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LDOKGGJHEAH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LDOKGGJHEAH&))((::PBYTE)hIl2Cpp + JADPHILKANM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};

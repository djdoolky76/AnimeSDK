#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NAOPCNDAPBL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KDLNGADCNNO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KDLNGADCNNO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D59C0)
#define KDLNGADCNNO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KDLNGADCNNO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KDLNGADCNNO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D59B0)
#define KDLNGADCNNO_OCANBNNDLGK_1_OFFSET UNITYSDK_OFFSET(0x18BD5860)
#define KDLNGADCNNO_OCANBNNDLGK_OFFSET UNITYSDK_OFFSET(0x18BD57C0)
#define KDLNGADCNNO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D59A0)
#define KDLNGADCNNO___INIT_OFFSET UNITYSDK_OFFSET(0x7D5980)

inline static constexpr unsigned int KDLNGADCNNO_TypeDefinitionIndex = 15216;

struct alignas(8) KDLNGADCNNO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLNGADCNNO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDLNGADCNNO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NAOPCNDAPBL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NAOPCNDAPBL&))((::PBYTE)hIl2Cpp + KDLNGADCNNO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLNGADCNNO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NAOPCNDAPBL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NAOPCNDAPBL&, ::System::Int32&))((::PBYTE)hIl2Cpp + KDLNGADCNNO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::KDLNGADCNNO OCANBNNDLGK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KDLNGADCNNO EIFONLCJOPG)
	{
		return ((::KDLNGADCNNO(*)(::FlatBuffers::ByteBuffer*, ::KDLNGADCNNO))((::PBYTE)hIl2Cpp + KDLNGADCNNO_OCANBNNDLGK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::KDLNGADCNNO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KDLNGADCNNO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDLNGADCNNO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KDLNGADCNNO OCANBNNDLGK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KDLNGADCNNO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDLNGADCNNO_OCANBNNDLGK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLNGADCNNO_GHKKNCCLPAN_OFFSET))(this);
	}
};

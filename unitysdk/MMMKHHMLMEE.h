#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IAHOAFJLJPL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MMMKHHMLMEE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MMMKHHMLMEE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C44E0)
#define MMMKHHMLMEE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MMMKHHMLMEE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MMMKHHMLMEE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C4520)
#define MMMKHHMLMEE_NHGPICIOMIB_1_OFFSET UNITYSDK_OFFSET(0x17FCBA20)
#define MMMKHHMLMEE_NHGPICIOMIB_OFFSET UNITYSDK_OFFSET(0x17FCB9C0)
#define MMMKHHMLMEE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C44D0)
#define MMMKHHMLMEE___INIT_OFFSET UNITYSDK_OFFSET(0x7C44B0)

inline static constexpr unsigned int MMMKHHMLMEE_TypeDefinitionIndex = 13453;

struct alignas(8) MMMKHHMLMEE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMMKHHMLMEE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMMKHHMLMEE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMMKHHMLMEE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::MMMKHHMLMEE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MMMKHHMLMEE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMMKHHMLMEE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IAHOAFJLJPL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IAHOAFJLJPL&, ::System::Int32&))((::PBYTE)hIl2Cpp + MMMKHHMLMEE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::MMMKHHMLMEE NHGPICIOMIB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MMMKHHMLMEE EIFONLCJOPG)
	{
		return ((::MMMKHHMLMEE(*)(::FlatBuffers::ByteBuffer*, ::MMMKHHMLMEE))((::PBYTE)hIl2Cpp + MMMKHHMLMEE_NHGPICIOMIB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::MMMKHHMLMEE NHGPICIOMIB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MMMKHHMLMEE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMMKHHMLMEE_NHGPICIOMIB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IAHOAFJLJPL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IAHOAFJLJPL&))((::PBYTE)hIl2Cpp + MMMKHHMLMEE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMMKHHMLMEE_GHKKNCCLPAN_OFFSET))(this);
	}
};

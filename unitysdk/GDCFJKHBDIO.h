#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MPNCKNMJGIF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GDCFJKHBDIO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GDCFJKHBDIO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D4730)
#define GDCFJKHBDIO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GDCFJKHBDIO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GDCFJKHBDIO_LBNDBCDMEFB_1_OFFSET UNITYSDK_OFFSET(0x18BA1EC0)
#define GDCFJKHBDIO_LBNDBCDMEFB_OFFSET UNITYSDK_OFFSET(0x18BA1E50)
#define GDCFJKHBDIO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D4770)
#define GDCFJKHBDIO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D4780)
#define GDCFJKHBDIO___INIT_OFFSET UNITYSDK_OFFSET(0x7D4710)

inline static constexpr unsigned int GDCFJKHBDIO_TypeDefinitionIndex = 15313;

struct alignas(8) GDCFJKHBDIO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDCFJKHBDIO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDCFJKHBDIO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::GDCFJKHBDIO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GDCFJKHBDIO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDCFJKHBDIO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MPNCKNMJGIF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MPNCKNMJGIF&))((::PBYTE)hIl2Cpp + GDCFJKHBDIO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GDCFJKHBDIO LBNDBCDMEFB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GDCFJKHBDIO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDCFJKHBDIO_LBNDBCDMEFB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::GDCFJKHBDIO LBNDBCDMEFB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GDCFJKHBDIO EIFONLCJOPG)
	{
		return ((::GDCFJKHBDIO(*)(::FlatBuffers::ByteBuffer*, ::GDCFJKHBDIO))((::PBYTE)hIl2Cpp + GDCFJKHBDIO_LBNDBCDMEFB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDCFJKHBDIO_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MPNCKNMJGIF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MPNCKNMJGIF&, ::System::Int32&))((::PBYTE)hIl2Cpp + GDCFJKHBDIO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDCFJKHBDIO_PPOMNIFACOL_OFFSET))(this);
	}
};

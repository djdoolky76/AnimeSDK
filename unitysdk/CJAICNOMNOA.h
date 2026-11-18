#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IAHNIHDOBLI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CJAICNOMNOA_AJLGFHPHEIO_1_OFFSET UNITYSDK_OFFSET(0x15790770)
#define CJAICNOMNOA_AJLGFHPHEIO_OFFSET UNITYSDK_OFFSET(0x15790710)
#define CJAICNOMNOA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CJAICNOMNOA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x765950)
#define CJAICNOMNOA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CJAICNOMNOA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CJAICNOMNOA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7659A0)
#define CJAICNOMNOA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x765990)
#define CJAICNOMNOA___INIT_OFFSET UNITYSDK_OFFSET(0x765930)

inline static constexpr unsigned int CJAICNOMNOA_TypeDefinitionIndex = 10383;

struct alignas(8) CJAICNOMNOA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAICNOMNOA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CJAICNOMNOA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::CJAICNOMNOA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CJAICNOMNOA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CJAICNOMNOA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CJAICNOMNOA AJLGFHPHEIO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CJAICNOMNOA EIFONLCJOPG)
	{
		return ((::CJAICNOMNOA(*)(::FlatBuffers::ByteBuffer*, ::CJAICNOMNOA))((::PBYTE)hIl2Cpp + CJAICNOMNOA_AJLGFHPHEIO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::CJAICNOMNOA AJLGFHPHEIO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CJAICNOMNOA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CJAICNOMNOA_AJLGFHPHEIO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAICNOMNOA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IAHNIHDOBLI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IAHNIHDOBLI&))((::PBYTE)hIl2Cpp + CJAICNOMNOA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IAHNIHDOBLI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IAHNIHDOBLI&, ::System::Int32&))((::PBYTE)hIl2Cpp + CJAICNOMNOA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAICNOMNOA_GHKKNCCLPAN_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BDHJIIJFNBB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MKKMINPKFBN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MKKMINPKFBN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A5D40)
#define MKKMINPKFBN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MKKMINPKFBN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MKKMINPKFBN_KKNCFEOECBA_1_OFFSET UNITYSDK_OFFSET(0x1734A5D0)
#define MKKMINPKFBN_KKNCFEOECBA_OFFSET UNITYSDK_OFFSET(0x1734A330)
#define MKKMINPKFBN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A5D30)
#define MKKMINPKFBN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A5D20)
#define MKKMINPKFBN___INIT_OFFSET UNITYSDK_OFFSET(0x7A5D00)

inline static constexpr unsigned int MKKMINPKFBN_TypeDefinitionIndex = 11465;

struct alignas(8) MKKMINPKFBN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKMINPKFBN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKKMINPKFBN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKMINPKFBN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MKKMINPKFBN KKNCFEOECBA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MKKMINPKFBN EIFONLCJOPG)
	{
		return ((::MKKMINPKFBN(*)(::FlatBuffers::ByteBuffer*, ::MKKMINPKFBN))((::PBYTE)hIl2Cpp + MKKMINPKFBN_KKNCFEOECBA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BDHJIIJFNBB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BDHJIIJFNBB&, ::System::Int32&))((::PBYTE)hIl2Cpp + MKKMINPKFBN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BDHJIIJFNBB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BDHJIIJFNBB&))((::PBYTE)hIl2Cpp + MKKMINPKFBN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKMINPKFBN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MKKMINPKFBN KKNCFEOECBA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MKKMINPKFBN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKKMINPKFBN_KKNCFEOECBA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::MKKMINPKFBN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MKKMINPKFBN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKKMINPKFBN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};

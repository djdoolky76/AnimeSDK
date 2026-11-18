#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HCPOOPKNLOC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HHCCKDBJIND_ALPNGCLOLNA_1_OFFSET UNITYSDK_OFFSET(0x1B87A7C0)
#define HHCCKDBJIND_ALPNGCLOLNA_OFFSET UNITYSDK_OFFSET(0x1B87A6C0)
#define HHCCKDBJIND_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HHCCKDBJIND_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x814530)
#define HHCCKDBJIND_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HHCCKDBJIND_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HHCCKDBJIND_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x814520)
#define HHCCKDBJIND_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x814570)
#define HHCCKDBJIND___INIT_OFFSET UNITYSDK_OFFSET(0x814500)

inline static constexpr unsigned int HHCCKDBJIND_TypeDefinitionIndex = 10705;

struct alignas(8) HHCCKDBJIND
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCCKDBJIND_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHCCKDBJIND___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HCPOOPKNLOC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HCPOOPKNLOC&, ::System::Int32&))((::PBYTE)hIl2Cpp + HHCCKDBJIND_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::HHCCKDBJIND ALPNGCLOLNA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HHCCKDBJIND EIFONLCJOPG)
	{
		return ((::HHCCKDBJIND(*)(::FlatBuffers::ByteBuffer*, ::HHCCKDBJIND))((::PBYTE)hIl2Cpp + HHCCKDBJIND_ALPNGCLOLNA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::HHCCKDBJIND BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HHCCKDBJIND(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHCCKDBJIND_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCCKDBJIND_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HCPOOPKNLOC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HCPOOPKNLOC&))((::PBYTE)hIl2Cpp + HHCCKDBJIND_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::HHCCKDBJIND ALPNGCLOLNA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HHCCKDBJIND(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHCCKDBJIND_ALPNGCLOLNA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCCKDBJIND_GHKKNCCLPAN_OFFSET))(this);
	}
};

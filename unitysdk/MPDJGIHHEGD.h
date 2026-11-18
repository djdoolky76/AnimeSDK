#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JAKBAFMPLCL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MPDJGIHHEGD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MPDJGIHHEGD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A5E80)
#define MPDJGIHHEGD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MPDJGIHHEGD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MPDJGIHHEGD_HPEBBCOLPLN_1_OFFSET UNITYSDK_OFFSET(0x1734D1F0)
#define MPDJGIHHEGD_HPEBBCOLPLN_OFFSET UNITYSDK_OFFSET(0x1734D190)
#define MPDJGIHHEGD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A5ED0)
#define MPDJGIHHEGD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A5EC0)
#define MPDJGIHHEGD___INIT_OFFSET UNITYSDK_OFFSET(0x7A5E60)

inline static constexpr unsigned int MPDJGIHHEGD_TypeDefinitionIndex = 14844;

struct alignas(8) MPDJGIHHEGD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDJGIHHEGD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPDJGIHHEGD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::MPDJGIHHEGD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MPDJGIHHEGD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPDJGIHHEGD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDJGIHHEGD_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JAKBAFMPLCL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JAKBAFMPLCL&))((::PBYTE)hIl2Cpp + MPDJGIHHEGD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDJGIHHEGD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MPDJGIHHEGD HPEBBCOLPLN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MPDJGIHHEGD EIFONLCJOPG)
	{
		return ((::MPDJGIHHEGD(*)(::FlatBuffers::ByteBuffer*, ::MPDJGIHHEGD))((::PBYTE)hIl2Cpp + MPDJGIHHEGD_HPEBBCOLPLN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::MPDJGIHHEGD HPEBBCOLPLN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MPDJGIHHEGD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPDJGIHHEGD_HPEBBCOLPLN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JAKBAFMPLCL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JAKBAFMPLCL&, ::System::Int32&))((::PBYTE)hIl2Cpp + MPDJGIHHEGD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};

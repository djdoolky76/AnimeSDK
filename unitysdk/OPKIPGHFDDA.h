#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KNMGGIDJFGP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OPKIPGHFDDA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OPKIPGHFDDA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x805F00)
#define OPKIPGHFDDA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OPKIPGHFDDA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OPKIPGHFDDA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x805F40)
#define OPKIPGHFDDA_MHCFFBLMNIB_1_OFFSET UNITYSDK_OFFSET(0x1AD94AB0)
#define OPKIPGHFDDA_MHCFFBLMNIB_OFFSET UNITYSDK_OFFSET(0x1AD94A40)
#define OPKIPGHFDDA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x805F50)
#define OPKIPGHFDDA___INIT_OFFSET UNITYSDK_OFFSET(0x805EE0)

inline static constexpr unsigned int OPKIPGHFDDA_TypeDefinitionIndex = 16879;

struct alignas(8) OPKIPGHFDDA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPKIPGHFDDA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OPKIPGHFDDA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPKIPGHFDDA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::OPKIPGHFDDA MHCFFBLMNIB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OPKIPGHFDDA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OPKIPGHFDDA_MHCFFBLMNIB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::OPKIPGHFDDA MHCFFBLMNIB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OPKIPGHFDDA EIFONLCJOPG)
	{
		return ((::OPKIPGHFDDA(*)(::FlatBuffers::ByteBuffer*, ::OPKIPGHFDDA))((::PBYTE)hIl2Cpp + OPKIPGHFDDA_MHCFFBLMNIB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::OPKIPGHFDDA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OPKIPGHFDDA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OPKIPGHFDDA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KNMGGIDJFGP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KNMGGIDJFGP&, ::System::Int32&))((::PBYTE)hIl2Cpp + OPKIPGHFDDA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KNMGGIDJFGP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KNMGGIDJFGP&))((::PBYTE)hIl2Cpp + OPKIPGHFDDA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPKIPGHFDDA_PPOMNIFACOL_OFFSET))(this);
	}
};

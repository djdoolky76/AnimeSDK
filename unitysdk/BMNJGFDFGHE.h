#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LLAHAIKBKFJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BMNJGFDFGHE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BMNJGFDFGHE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7656C0)
#define BMNJGFDFGHE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BMNJGFDFGHE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BMNJGFDFGHE_IJAFJFBEJPH_1_OFFSET UNITYSDK_OFFSET(0x157850D0)
#define BMNJGFDFGHE_IJAFJFBEJPH_OFFSET UNITYSDK_OFFSET(0x15785060)
#define BMNJGFDFGHE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x765700)
#define BMNJGFDFGHE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x765710)
#define BMNJGFDFGHE___INIT_OFFSET UNITYSDK_OFFSET(0x7656A0)

inline static constexpr unsigned int BMNJGFDFGHE_TypeDefinitionIndex = 17668;

struct alignas(8) BMNJGFDFGHE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMNJGFDFGHE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BMNJGFDFGHE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::BMNJGFDFGHE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BMNJGFDFGHE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BMNJGFDFGHE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMNJGFDFGHE_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LLAHAIKBKFJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LLAHAIKBKFJ&))((::PBYTE)hIl2Cpp + BMNJGFDFGHE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::BMNJGFDFGHE IJAFJFBEJPH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BMNJGFDFGHE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BMNJGFDFGHE_IJAFJFBEJPH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LLAHAIKBKFJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LLAHAIKBKFJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + BMNJGFDFGHE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMNJGFDFGHE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::BMNJGFDFGHE IJAFJFBEJPH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BMNJGFDFGHE EIFONLCJOPG)
	{
		return ((::BMNJGFDFGHE(*)(::FlatBuffers::ByteBuffer*, ::BMNJGFDFGHE))((::PBYTE)hIl2Cpp + BMNJGFDFGHE_IJAFJFBEJPH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};

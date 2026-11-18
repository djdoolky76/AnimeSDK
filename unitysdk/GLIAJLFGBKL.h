#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HPPJMGNELEG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GLIAJLFGBKL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GLIAJLFGBKL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x811DA0)
#define GLIAJLFGBKL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GLIAJLFGBKL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GLIAJLFGBKL_LJILGPLGKAD_1_OFFSET UNITYSDK_OFFSET(0x1B7BCB60)
#define GLIAJLFGBKL_LJILGPLGKAD_OFFSET UNITYSDK_OFFSET(0x1B7BCAF0)
#define GLIAJLFGBKL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x811DE0)
#define GLIAJLFGBKL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x811DF0)
#define GLIAJLFGBKL___INIT_OFFSET UNITYSDK_OFFSET(0x811D80)

inline static constexpr unsigned int GLIAJLFGBKL_TypeDefinitionIndex = 13994;

struct alignas(8) GLIAJLFGBKL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIAJLFGBKL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLIAJLFGBKL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::GLIAJLFGBKL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GLIAJLFGBKL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLIAJLFGBKL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HPPJMGNELEG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HPPJMGNELEG&, ::System::Int32&))((::PBYTE)hIl2Cpp + GLIAJLFGBKL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::GLIAJLFGBKL LJILGPLGKAD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GLIAJLFGBKL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLIAJLFGBKL_LJILGPLGKAD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HPPJMGNELEG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HPPJMGNELEG&))((::PBYTE)hIl2Cpp + GLIAJLFGBKL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIAJLFGBKL_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIAJLFGBKL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GLIAJLFGBKL LJILGPLGKAD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GLIAJLFGBKL EIFONLCJOPG)
	{
		return ((::GLIAJLFGBKL(*)(::FlatBuffers::ByteBuffer*, ::GLIAJLFGBKL))((::PBYTE)hIl2Cpp + GLIAJLFGBKL_LJILGPLGKAD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};

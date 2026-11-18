#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JDNMDBKPDOE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LNOIFMDOGAB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LNOIFMDOGAB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x813560)
#define LNOIFMDOGAB_CILBGBHFFDG_1_OFFSET UNITYSDK_OFFSET(0x1B7F3840)
#define LNOIFMDOGAB_CILBGBHFFDG_OFFSET UNITYSDK_OFFSET(0x1B7F37D0)
#define LNOIFMDOGAB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LNOIFMDOGAB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LNOIFMDOGAB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x813550)
#define LNOIFMDOGAB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x813540)
#define LNOIFMDOGAB___INIT_OFFSET UNITYSDK_OFFSET(0x813520)

inline static constexpr unsigned int LNOIFMDOGAB_TypeDefinitionIndex = 10441;

struct alignas(8) LNOIFMDOGAB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOIFMDOGAB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LNOIFMDOGAB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOIFMDOGAB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JDNMDBKPDOE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JDNMDBKPDOE&, ::System::Int32&))((::PBYTE)hIl2Cpp + LNOIFMDOGAB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JDNMDBKPDOE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JDNMDBKPDOE&))((::PBYTE)hIl2Cpp + LNOIFMDOGAB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOIFMDOGAB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::LNOIFMDOGAB CILBGBHFFDG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LNOIFMDOGAB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LNOIFMDOGAB_CILBGBHFFDG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::LNOIFMDOGAB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LNOIFMDOGAB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LNOIFMDOGAB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LNOIFMDOGAB CILBGBHFFDG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LNOIFMDOGAB EIFONLCJOPG)
	{
		return ((::LNOIFMDOGAB(*)(::FlatBuffers::ByteBuffer*, ::LNOIFMDOGAB))((::PBYTE)hIl2Cpp + LNOIFMDOGAB_CILBGBHFFDG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};

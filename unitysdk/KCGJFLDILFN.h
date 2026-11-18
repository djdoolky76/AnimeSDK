#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/COLHDKKCIDK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KCGJFLDILFN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KCGJFLDILFN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x812E50)
#define KCGJFLDILFN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KCGJFLDILFN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KCGJFLDILFN_JNALBCLPFIJ_1_OFFSET UNITYSDK_OFFSET(0x1B7E03D0)
#define KCGJFLDILFN_JNALBCLPFIJ_OFFSET UNITYSDK_OFFSET(0x1B7E0360)
#define KCGJFLDILFN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x812E30)
#define KCGJFLDILFN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x812E40)
#define KCGJFLDILFN___INIT_OFFSET UNITYSDK_OFFSET(0x812E10)

inline static constexpr unsigned int KCGJFLDILFN_TypeDefinitionIndex = 13683;

struct alignas(8) KCGJFLDILFN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCGJFLDILFN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KCGJFLDILFN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KCGJFLDILFN JNALBCLPFIJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KCGJFLDILFN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KCGJFLDILFN_JNALBCLPFIJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::COLHDKKCIDK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::COLHDKKCIDK&, ::System::Int32&))((::PBYTE)hIl2Cpp + KCGJFLDILFN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCGJFLDILFN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::KCGJFLDILFN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KCGJFLDILFN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KCGJFLDILFN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::COLHDKKCIDK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::COLHDKKCIDK&))((::PBYTE)hIl2Cpp + KCGJFLDILFN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCGJFLDILFN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::KCGJFLDILFN JNALBCLPFIJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KCGJFLDILFN EIFONLCJOPG)
	{
		return ((::KCGJFLDILFN(*)(::FlatBuffers::ByteBuffer*, ::KCGJFLDILFN))((::PBYTE)hIl2Cpp + KCGJFLDILFN_JNALBCLPFIJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};

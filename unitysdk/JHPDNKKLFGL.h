#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GMPGMNHAHKH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JHPDNKKLFGL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JHPDNKKLFGL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FD840)
#define JHPDNKKLFGL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JHPDNKKLFGL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JHPDNKKLFGL_IJLEJIHLBOP_1_OFFSET UNITYSDK_OFFSET(0x1A5ED2C0)
#define JHPDNKKLFGL_IJLEJIHLBOP_OFFSET UNITYSDK_OFFSET(0x1A5ED1C0)
#define JHPDNKKLFGL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FD820)
#define JHPDNKKLFGL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FD830)
#define JHPDNKKLFGL___INIT_OFFSET UNITYSDK_OFFSET(0x7FD800)

inline static constexpr unsigned int JHPDNKKLFGL_TypeDefinitionIndex = 12480;

struct alignas(8) JHPDNKKLFGL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHPDNKKLFGL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHPDNKKLFGL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GMPGMNHAHKH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GMPGMNHAHKH&, ::System::Int32&))((::PBYTE)hIl2Cpp + JHPDNKKLFGL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::JHPDNKKLFGL IJLEJIHLBOP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JHPDNKKLFGL EIFONLCJOPG)
	{
		return ((::JHPDNKKLFGL(*)(::FlatBuffers::ByteBuffer*, ::JHPDNKKLFGL))((::PBYTE)hIl2Cpp + JHPDNKKLFGL_IJLEJIHLBOP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHPDNKKLFGL_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GMPGMNHAHKH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GMPGMNHAHKH&))((::PBYTE)hIl2Cpp + JHPDNKKLFGL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::JHPDNKKLFGL IJLEJIHLBOP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JHPDNKKLFGL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHPDNKKLFGL_IJLEJIHLBOP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::JHPDNKKLFGL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JHPDNKKLFGL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHPDNKKLFGL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHPDNKKLFGL_GHKKNCCLPAN_OFFSET))(this);
	}
};

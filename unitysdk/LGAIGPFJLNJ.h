#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EGLBLKHFBPC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LGAIGPFJLNJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LGAIGPFJLNJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81CA70)
#define LGAIGPFJLNJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LGAIGPFJLNJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LGAIGPFJLNJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81CAC0)
#define LGAIGPFJLNJ_NNJDGBCCCDE_1_OFFSET UNITYSDK_OFFSET(0x1BB0D620)
#define LGAIGPFJLNJ_NNJDGBCCCDE_OFFSET UNITYSDK_OFFSET(0x1BB0D5B0)
#define LGAIGPFJLNJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81CAB0)
#define LGAIGPFJLNJ___INIT_OFFSET UNITYSDK_OFFSET(0x81CA50)

inline static constexpr unsigned int LGAIGPFJLNJ_TypeDefinitionIndex = 15812;

struct alignas(8) LGAIGPFJLNJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAIGPFJLNJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGAIGPFJLNJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LGAIGPFJLNJ NNJDGBCCCDE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LGAIGPFJLNJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGAIGPFJLNJ_NNJDGBCCCDE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAIGPFJLNJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::LGAIGPFJLNJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LGAIGPFJLNJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGAIGPFJLNJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAIGPFJLNJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LGAIGPFJLNJ NNJDGBCCCDE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LGAIGPFJLNJ EIFONLCJOPG)
	{
		return ((::LGAIGPFJLNJ(*)(::FlatBuffers::ByteBuffer*, ::LGAIGPFJLNJ))((::PBYTE)hIl2Cpp + LGAIGPFJLNJ_NNJDGBCCCDE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EGLBLKHFBPC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EGLBLKHFBPC&))((::PBYTE)hIl2Cpp + LGAIGPFJLNJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EGLBLKHFBPC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EGLBLKHFBPC&, ::System::Int32&))((::PBYTE)hIl2Cpp + LGAIGPFJLNJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};

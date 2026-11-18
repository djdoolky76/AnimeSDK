#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NDMJIOHPNEN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PFIKKGKPOAA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PFIKKGKPOAA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A6F30)
#define PFIKKGKPOAA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PFIKKGKPOAA_GGGJKHDJHNF_1_OFFSET UNITYSDK_OFFSET(0x173798F0)
#define PFIKKGKPOAA_GGGJKHDJHNF_OFFSET UNITYSDK_OFFSET(0x17379880)
#define PFIKKGKPOAA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PFIKKGKPOAA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A6F10)
#define PFIKKGKPOAA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A6F20)
#define PFIKKGKPOAA___INIT_OFFSET UNITYSDK_OFFSET(0x7A6EF0)

inline static constexpr unsigned int PFIKKGKPOAA_TypeDefinitionIndex = 15140;

struct alignas(8) PFIKKGKPOAA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFIKKGKPOAA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFIKKGKPOAA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PFIKKGKPOAA GGGJKHDJHNF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PFIKKGKPOAA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFIKKGKPOAA_GGGJKHDJHNF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NDMJIOHPNEN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NDMJIOHPNEN&, ::System::Int32&))((::PBYTE)hIl2Cpp + PFIKKGKPOAA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFIKKGKPOAA_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NDMJIOHPNEN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NDMJIOHPNEN&))((::PBYTE)hIl2Cpp + PFIKKGKPOAA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFIKKGKPOAA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::PFIKKGKPOAA GGGJKHDJHNF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PFIKKGKPOAA EIFONLCJOPG)
	{
		return ((::PFIKKGKPOAA(*)(::FlatBuffers::ByteBuffer*, ::PFIKKGKPOAA))((::PBYTE)hIl2Cpp + PFIKKGKPOAA_GGGJKHDJHNF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::PFIKKGKPOAA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PFIKKGKPOAA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFIKKGKPOAA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};

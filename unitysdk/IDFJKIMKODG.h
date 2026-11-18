#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JHFNHLBHNIF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IDFJKIMKODG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IDFJKIMKODG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x757FD0)
#define IDFJKIMKODG_DLCHHMENEKO_1_OFFSET UNITYSDK_OFFSET(0x152E19C0)
#define IDFJKIMKODG_DLCHHMENEKO_OFFSET UNITYSDK_OFFSET(0x152E17C0)
#define IDFJKIMKODG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IDFJKIMKODG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IDFJKIMKODG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x757FC0)
#define IDFJKIMKODG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x757FB0)
#define IDFJKIMKODG___INIT_OFFSET UNITYSDK_OFFSET(0x757F90)

inline static constexpr unsigned int IDFJKIMKODG_TypeDefinitionIndex = 14817;

struct alignas(8) IDFJKIMKODG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFJKIMKODG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IDFJKIMKODG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JHFNHLBHNIF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JHFNHLBHNIF&))((::PBYTE)hIl2Cpp + IDFJKIMKODG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFJKIMKODG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::IDFJKIMKODG DLCHHMENEKO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IDFJKIMKODG EIFONLCJOPG)
	{
		return ((::IDFJKIMKODG(*)(::FlatBuffers::ByteBuffer*, ::IDFJKIMKODG))((::PBYTE)hIl2Cpp + IDFJKIMKODG_DLCHHMENEKO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFJKIMKODG_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JHFNHLBHNIF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JHFNHLBHNIF&, ::System::Int32&))((::PBYTE)hIl2Cpp + IDFJKIMKODG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::IDFJKIMKODG DLCHHMENEKO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IDFJKIMKODG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IDFJKIMKODG_DLCHHMENEKO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::IDFJKIMKODG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IDFJKIMKODG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IDFJKIMKODG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FNDHDPIGMEN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MFABLJFANDG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MFABLJFANDG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EF6F0)
#define MFABLJFANDG_EFBIKLHPMJK_1_OFFSET UNITYSDK_OFFSET(0x19DB1E30)
#define MFABLJFANDG_EFBIKLHPMJK_OFFSET UNITYSDK_OFFSET(0x19DB1D90)
#define MFABLJFANDG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MFABLJFANDG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MFABLJFANDG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EF6D0)
#define MFABLJFANDG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EF6E0)
#define MFABLJFANDG___INIT_OFFSET UNITYSDK_OFFSET(0x7EF6B0)

inline static constexpr unsigned int MFABLJFANDG_TypeDefinitionIndex = 16197;

struct alignas(8) MFABLJFANDG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFABLJFANDG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MFABLJFANDG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFABLJFANDG_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FNDHDPIGMEN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FNDHDPIGMEN&))((::PBYTE)hIl2Cpp + MFABLJFANDG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FNDHDPIGMEN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FNDHDPIGMEN&, ::System::Int32&))((::PBYTE)hIl2Cpp + MFABLJFANDG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::MFABLJFANDG EFBIKLHPMJK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MFABLJFANDG EIFONLCJOPG)
	{
		return ((::MFABLJFANDG(*)(::FlatBuffers::ByteBuffer*, ::MFABLJFANDG))((::PBYTE)hIl2Cpp + MFABLJFANDG_EFBIKLHPMJK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFABLJFANDG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::MFABLJFANDG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MFABLJFANDG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MFABLJFANDG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MFABLJFANDG EFBIKLHPMJK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MFABLJFANDG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MFABLJFANDG_EFBIKLHPMJK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DMBDIGEHJMN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DPPPKMKDNFO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DPPPKMKDNFO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x817320)
#define DPPPKMKDNFO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DPPPKMKDNFO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DPPPKMKDNFO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x817310)
#define DPPPKMKDNFO_MEPPIMEPMAN_1_OFFSET UNITYSDK_OFFSET(0x1B9AFDD0)
#define DPPPKMKDNFO_MEPPIMEPMAN_OFFSET UNITYSDK_OFFSET(0x1B9AFD60)
#define DPPPKMKDNFO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x817300)
#define DPPPKMKDNFO___INIT_OFFSET UNITYSDK_OFFSET(0x8172E0)

inline static constexpr unsigned int DPPPKMKDNFO_TypeDefinitionIndex = 13763;

struct alignas(8) DPPPKMKDNFO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPPKMKDNFO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPPPKMKDNFO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPPKMKDNFO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DPPPKMKDNFO MEPPIMEPMAN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DPPPKMKDNFO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPPPKMKDNFO_MEPPIMEPMAN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::DPPPKMKDNFO MEPPIMEPMAN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DPPPKMKDNFO EIFONLCJOPG)
	{
		return ((::DPPPKMKDNFO(*)(::FlatBuffers::ByteBuffer*, ::DPPPKMKDNFO))((::PBYTE)hIl2Cpp + DPPPKMKDNFO_MEPPIMEPMAN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPPKMKDNFO_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DMBDIGEHJMN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DMBDIGEHJMN&, ::System::Int32&))((::PBYTE)hIl2Cpp + DPPPKMKDNFO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::DPPPKMKDNFO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DPPPKMKDNFO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPPPKMKDNFO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DMBDIGEHJMN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DMBDIGEHJMN&))((::PBYTE)hIl2Cpp + DPPPKMKDNFO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};

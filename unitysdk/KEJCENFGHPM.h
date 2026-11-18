#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NFKELEEPJNF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KEJCENFGHPM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KEJCENFGHPM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F8E20)
#define KEJCENFGHPM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KEJCENFGHPM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KEJCENFGHPM_IGENPMJANIL_1_OFFSET UNITYSDK_OFFSET(0x1A50A5B0)
#define KEJCENFGHPM_IGENPMJANIL_OFFSET UNITYSDK_OFFSET(0x1A50A540)
#define KEJCENFGHPM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F8E10)
#define KEJCENFGHPM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F8E60)
#define KEJCENFGHPM___INIT_OFFSET UNITYSDK_OFFSET(0x7F8DF0)

inline static constexpr unsigned int KEJCENFGHPM_TypeDefinitionIndex = 13544;

struct alignas(8) KEJCENFGHPM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJCENFGHPM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KEJCENFGHPM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NFKELEEPJNF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NFKELEEPJNF&, ::System::Int32&))((::PBYTE)hIl2Cpp + KEJCENFGHPM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::KEJCENFGHPM IGENPMJANIL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KEJCENFGHPM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KEJCENFGHPM_IGENPMJANIL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJCENFGHPM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::KEJCENFGHPM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KEJCENFGHPM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KEJCENFGHPM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NFKELEEPJNF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NFKELEEPJNF&))((::PBYTE)hIl2Cpp + KEJCENFGHPM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::KEJCENFGHPM IGENPMJANIL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KEJCENFGHPM EIFONLCJOPG)
	{
		return ((::KEJCENFGHPM(*)(::FlatBuffers::ByteBuffer*, ::KEJCENFGHPM))((::PBYTE)hIl2Cpp + KEJCENFGHPM_IGENPMJANIL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJCENFGHPM_PPOMNIFACOL_OFFSET))(this);
	}
};

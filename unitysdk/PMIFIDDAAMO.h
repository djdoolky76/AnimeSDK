#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HCGDMEADJCA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PMIFIDDAAMO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PMIFIDDAAMO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80CB10)
#define PMIFIDDAAMO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PMIFIDDAAMO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PMIFIDDAAMO_GMODEBMDKCA_1_OFFSET UNITYSDK_OFFSET(0x1B3496A0)
#define PMIFIDDAAMO_GMODEBMDKCA_OFFSET UNITYSDK_OFFSET(0x1B349630)
#define PMIFIDDAAMO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x9A34C0)
#define PMIFIDDAAMO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80CB50)
#define PMIFIDDAAMO___INIT_OFFSET UNITYSDK_OFFSET(0x80CAF0)

inline static constexpr unsigned int PMIFIDDAAMO_TypeDefinitionIndex = 16174;

struct alignas(8) PMIFIDDAAMO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIFIDDAAMO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMIFIDDAAMO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIFIDDAAMO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::PMIFIDDAAMO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PMIFIDDAAMO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMIFIDDAAMO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PMIFIDDAAMO GMODEBMDKCA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PMIFIDDAAMO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMIFIDDAAMO_GMODEBMDKCA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::PMIFIDDAAMO GMODEBMDKCA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PMIFIDDAAMO EIFONLCJOPG)
	{
		return ((::PMIFIDDAAMO(*)(::FlatBuffers::ByteBuffer*, ::PMIFIDDAAMO))((::PBYTE)hIl2Cpp + PMIFIDDAAMO_GMODEBMDKCA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIFIDDAAMO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HCGDMEADJCA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HCGDMEADJCA&))((::PBYTE)hIl2Cpp + PMIFIDDAAMO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HCGDMEADJCA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HCGDMEADJCA&, ::System::Int32&))((::PBYTE)hIl2Cpp + PMIFIDDAAMO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};

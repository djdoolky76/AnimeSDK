#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PAGEEAHOLBF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FNLHIBMGHII_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FNLHIBMGHII_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F7CE0)
#define FNLHIBMGHII_EBKJEHNLJHK_1_OFFSET UNITYSDK_OFFSET(0x1A4CBE60)
#define FNLHIBMGHII_EBKJEHNLJHK_OFFSET UNITYSDK_OFFSET(0x1A4CBDC0)
#define FNLHIBMGHII_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FNLHIBMGHII_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FNLHIBMGHII_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F7CD0)
#define FNLHIBMGHII_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F7CC0)
#define FNLHIBMGHII___INIT_OFFSET UNITYSDK_OFFSET(0x7F7CA0)

inline static constexpr unsigned int FNLHIBMGHII_TypeDefinitionIndex = 17011;

struct alignas(8) FNLHIBMGHII
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLHIBMGHII_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNLHIBMGHII___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLHIBMGHII_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PAGEEAHOLBF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PAGEEAHOLBF&, ::System::Int32&))((::PBYTE)hIl2Cpp + FNLHIBMGHII_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::FNLHIBMGHII EBKJEHNLJHK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FNLHIBMGHII EIFONLCJOPG)
	{
		return ((::FNLHIBMGHII(*)(::FlatBuffers::ByteBuffer*, ::FNLHIBMGHII))((::PBYTE)hIl2Cpp + FNLHIBMGHII_EBKJEHNLJHK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::FNLHIBMGHII BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FNLHIBMGHII(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNLHIBMGHII_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FNLHIBMGHII EBKJEHNLJHK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FNLHIBMGHII(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNLHIBMGHII_EBKJEHNLJHK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PAGEEAHOLBF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PAGEEAHOLBF&))((::PBYTE)hIl2Cpp + FNLHIBMGHII_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLHIBMGHII_GHKKNCCLPAN_OFFSET))(this);
	}
};

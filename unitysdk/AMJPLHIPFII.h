#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PGPJAKOFFOH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AMJPLHIPFII_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AMJPLHIPFII_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ECA00)
#define AMJPLHIPFII_FGJFOJIAIOI_1_OFFSET UNITYSDK_OFFSET(0x19BD9F80)
#define AMJPLHIPFII_FGJFOJIAIOI_OFFSET UNITYSDK_OFFSET(0x19BD9F10)
#define AMJPLHIPFII_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AMJPLHIPFII_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AMJPLHIPFII_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EC9E0)
#define AMJPLHIPFII_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EC9F0)
#define AMJPLHIPFII___INIT_OFFSET UNITYSDK_OFFSET(0x7EC9C0)

inline static constexpr unsigned int AMJPLHIPFII_TypeDefinitionIndex = 16513;

struct alignas(8) AMJPLHIPFII
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJPLHIPFII_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMJPLHIPFII___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PGPJAKOFFOH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PGPJAKOFFOH&, ::System::Int32&))((::PBYTE)hIl2Cpp + AMJPLHIPFII_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PGPJAKOFFOH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PGPJAKOFFOH&))((::PBYTE)hIl2Cpp + AMJPLHIPFII_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJPLHIPFII_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJPLHIPFII_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::AMJPLHIPFII BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AMJPLHIPFII(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMJPLHIPFII_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AMJPLHIPFII FGJFOJIAIOI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AMJPLHIPFII(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMJPLHIPFII_FGJFOJIAIOI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::AMJPLHIPFII FGJFOJIAIOI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AMJPLHIPFII EIFONLCJOPG)
	{
		return ((::AMJPLHIPFII(*)(::FlatBuffers::ByteBuffer*, ::AMJPLHIPFII))((::PBYTE)hIl2Cpp + AMJPLHIPFII_FGJFOJIAIOI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};

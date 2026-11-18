#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KMFMLIIKFKJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PMNJAODEMBI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PMNJAODEMBI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x992100)
#define PMNJAODEMBI_CJJHLBKIKDG_1_OFFSET UNITYSDK_OFFSET(0x1FA55440)
#define PMNJAODEMBI_CJJHLBKIKDG_OFFSET UNITYSDK_OFFSET(0x1FA553D0)
#define PMNJAODEMBI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PMNJAODEMBI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PMNJAODEMBI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x9920F0)
#define PMNJAODEMBI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x992140)
#define PMNJAODEMBI___INIT_OFFSET UNITYSDK_OFFSET(0x9920D0)

inline static constexpr unsigned int PMNJAODEMBI_TypeDefinitionIndex = 14383;

struct alignas(8) PMNJAODEMBI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMNJAODEMBI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMNJAODEMBI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KMFMLIIKFKJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KMFMLIIKFKJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + PMNJAODEMBI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::PMNJAODEMBI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PMNJAODEMBI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMNJAODEMBI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMNJAODEMBI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMNJAODEMBI_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KMFMLIIKFKJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KMFMLIIKFKJ&))((::PBYTE)hIl2Cpp + PMNJAODEMBI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PMNJAODEMBI CJJHLBKIKDG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PMNJAODEMBI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMNJAODEMBI_CJJHLBKIKDG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::PMNJAODEMBI CJJHLBKIKDG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PMNJAODEMBI EIFONLCJOPG)
	{
		return ((::PMNJAODEMBI(*)(::FlatBuffers::ByteBuffer*, ::PMNJAODEMBI))((::PBYTE)hIl2Cpp + PMNJAODEMBI_CJJHLBKIKDG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};

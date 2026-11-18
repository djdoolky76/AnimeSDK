#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FNACKANDHBK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GHKCCELFMGK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GHKCCELFMGK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A7E40)
#define GHKCCELFMGK_DLJMOGKBJPM_1_OFFSET UNITYSDK_OFFSET(0x17468CD0)
#define GHKCCELFMGK_DLJMOGKBJPM_OFFSET UNITYSDK_OFFSET(0x17468C60)
#define GHKCCELFMGK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GHKCCELFMGK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GHKCCELFMGK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A7E80)
#define GHKCCELFMGK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A7E90)
#define GHKCCELFMGK___INIT_OFFSET UNITYSDK_OFFSET(0x7A7E20)

inline static constexpr unsigned int GHKCCELFMGK_TypeDefinitionIndex = 10402;

struct alignas(8) GHKCCELFMGK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKCCELFMGK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHKCCELFMGK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FNACKANDHBK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FNACKANDHBK&))((::PBYTE)hIl2Cpp + GHKCCELFMGK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::GHKCCELFMGK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GHKCCELFMGK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHKCCELFMGK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKCCELFMGK_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FNACKANDHBK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FNACKANDHBK&, ::System::Int32&))((::PBYTE)hIl2Cpp + GHKCCELFMGK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::GHKCCELFMGK DLJMOGKBJPM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GHKCCELFMGK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHKCCELFMGK_DLJMOGKBJPM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::GHKCCELFMGK DLJMOGKBJPM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GHKCCELFMGK EIFONLCJOPG)
	{
		return ((::GHKCCELFMGK(*)(::FlatBuffers::ByteBuffer*, ::GHKCCELFMGK))((::PBYTE)hIl2Cpp + GHKCCELFMGK_DLJMOGKBJPM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKCCELFMGK_PPOMNIFACOL_OFFSET))(this);
	}
};

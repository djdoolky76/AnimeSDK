#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NHADAKMFPGL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MNMKBENMMDL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MNMKBENMMDL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81DFB0)
#define MNMKBENMMDL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MNMKBENMMDL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MNMKBENMMDL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81DFA0)
#define MNMKBENMMDL_NENGDGDKDLD_1_OFFSET UNITYSDK_OFFSET(0x1BF64470)
#define MNMKBENMMDL_NENGDGDKDLD_OFFSET UNITYSDK_OFFSET(0x1BF64370)
#define MNMKBENMMDL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81DFF0)
#define MNMKBENMMDL___INIT_OFFSET UNITYSDK_OFFSET(0x81DF80)

inline static constexpr unsigned int MNMKBENMMDL_TypeDefinitionIndex = 14178;

struct alignas(8) MNMKBENMMDL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNMKBENMMDL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNMKBENMMDL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NHADAKMFPGL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NHADAKMFPGL&))((::PBYTE)hIl2Cpp + MNMKBENMMDL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NHADAKMFPGL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NHADAKMFPGL&, ::System::Int32&))((::PBYTE)hIl2Cpp + MNMKBENMMDL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::MNMKBENMMDL NENGDGDKDLD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MNMKBENMMDL EIFONLCJOPG)
	{
		return ((::MNMKBENMMDL(*)(::FlatBuffers::ByteBuffer*, ::MNMKBENMMDL))((::PBYTE)hIl2Cpp + MNMKBENMMDL_NENGDGDKDLD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNMKBENMMDL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::MNMKBENMMDL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MNMKBENMMDL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNMKBENMMDL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MNMKBENMMDL NENGDGDKDLD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MNMKBENMMDL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNMKBENMMDL_NENGDGDKDLD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNMKBENMMDL_PPOMNIFACOL_OFFSET))(this);
	}
};

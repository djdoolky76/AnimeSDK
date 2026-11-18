#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ODEPPCKBBLO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GIBGINEHBPP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GIBGINEHBPP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B4D50)
#define GIBGINEHBPP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GIBGINEHBPP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GIBGINEHBPP_JIHDHKOJJPF_1_OFFSET UNITYSDK_OFFSET(0x17BED100)
#define GIBGINEHBPP_JIHDHKOJJPF_OFFSET UNITYSDK_OFFSET(0x17BED090)
#define GIBGINEHBPP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B4D90)
#define GIBGINEHBPP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B4DA0)
#define GIBGINEHBPP___INIT_OFFSET UNITYSDK_OFFSET(0x7B4D30)

inline static constexpr unsigned int GIBGINEHBPP_TypeDefinitionIndex = 16840;

struct alignas(8) GIBGINEHBPP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIBGINEHBPP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GIBGINEHBPP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ODEPPCKBBLO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ODEPPCKBBLO&))((::PBYTE)hIl2Cpp + GIBGINEHBPP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GIBGINEHBPP JIHDHKOJJPF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GIBGINEHBPP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GIBGINEHBPP_JIHDHKOJJPF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::GIBGINEHBPP JIHDHKOJJPF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GIBGINEHBPP EIFONLCJOPG)
	{
		return ((::GIBGINEHBPP(*)(::FlatBuffers::ByteBuffer*, ::GIBGINEHBPP))((::PBYTE)hIl2Cpp + GIBGINEHBPP_JIHDHKOJJPF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::GIBGINEHBPP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GIBGINEHBPP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GIBGINEHBPP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ODEPPCKBBLO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ODEPPCKBBLO&, ::System::Int32&))((::PBYTE)hIl2Cpp + GIBGINEHBPP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIBGINEHBPP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIBGINEHBPP_GHKKNCCLPAN_OFFSET))(this);
	}
};

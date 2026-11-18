#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EGEMGANJECG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GCHOGNDJOFH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GCHOGNDJOFH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F7E40)
#define GCHOGNDJOFH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GCHOGNDJOFH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GCHOGNDJOFH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F7E30)
#define GCHOGNDJOFH_ONOIMALLPFM_1_OFFSET UNITYSDK_OFFSET(0x1A4D4140)
#define GCHOGNDJOFH_ONOIMALLPFM_OFFSET UNITYSDK_OFFSET(0x1A4D40D0)
#define GCHOGNDJOFH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F7E20)
#define GCHOGNDJOFH___INIT_OFFSET UNITYSDK_OFFSET(0x7F7E00)

inline static constexpr unsigned int GCHOGNDJOFH_TypeDefinitionIndex = 13429;

struct alignas(8) GCHOGNDJOFH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHOGNDJOFH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GCHOGNDJOFH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EGEMGANJECG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EGEMGANJECG&))((::PBYTE)hIl2Cpp + GCHOGNDJOFH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GCHOGNDJOFH ONOIMALLPFM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GCHOGNDJOFH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GCHOGNDJOFH_ONOIMALLPFM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHOGNDJOFH_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHOGNDJOFH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::GCHOGNDJOFH ONOIMALLPFM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GCHOGNDJOFH EIFONLCJOPG)
	{
		return ((::GCHOGNDJOFH(*)(::FlatBuffers::ByteBuffer*, ::GCHOGNDJOFH))((::PBYTE)hIl2Cpp + GCHOGNDJOFH_ONOIMALLPFM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EGEMGANJECG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EGEMGANJECG&, ::System::Int32&))((::PBYTE)hIl2Cpp + GCHOGNDJOFH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::GCHOGNDJOFH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GCHOGNDJOFH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GCHOGNDJOFH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IPNDKHPHDOD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BDPGKIPIDIM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BDPGKIPIDIM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D03A0)
#define BDPGKIPIDIM_FJAKJKIPNBG_1_OFFSET UNITYSDK_OFFSET(0x187763A0)
#define BDPGKIPIDIM_FJAKJKIPNBG_OFFSET UNITYSDK_OFFSET(0x18776330)
#define BDPGKIPIDIM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BDPGKIPIDIM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BDPGKIPIDIM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D03E0)
#define BDPGKIPIDIM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D0390)
#define BDPGKIPIDIM___INIT_OFFSET UNITYSDK_OFFSET(0x7D0370)

inline static constexpr unsigned int BDPGKIPIDIM_TypeDefinitionIndex = 13077;

struct alignas(8) BDPGKIPIDIM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPGKIPIDIM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDPGKIPIDIM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPGKIPIDIM_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPGKIPIDIM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::BDPGKIPIDIM FJAKJKIPNBG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BDPGKIPIDIM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDPGKIPIDIM_FJAKJKIPNBG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::BDPGKIPIDIM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BDPGKIPIDIM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDPGKIPIDIM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 IJPOILCBKEL, ::System::Int32 KEMLJBIKNPF, ::IPNDKHPHDOD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::IPNDKHPHDOD&, ::System::Int32&))((::PBYTE)hIl2Cpp + BDPGKIPIDIM_LLGCOCLACNA_OFFSET))(this, IJPOILCBKEL, KEMLJBIKNPF, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::BDPGKIPIDIM FJAKJKIPNBG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BDPGKIPIDIM EIFONLCJOPG)
	{
		return ((::BDPGKIPIDIM(*)(::FlatBuffers::ByteBuffer*, ::BDPGKIPIDIM))((::PBYTE)hIl2Cpp + BDPGKIPIDIM_FJAKJKIPNBG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IPNDKHPHDOD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IPNDKHPHDOD&))((::PBYTE)hIl2Cpp + BDPGKIPIDIM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};

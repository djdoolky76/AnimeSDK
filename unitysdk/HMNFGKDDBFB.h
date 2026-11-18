#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NKDIAGHHIME.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HMNFGKDDBFB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HMNFGKDDBFB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D4DA0)
#define HMNFGKDDBFB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HMNFGKDDBFB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HMNFGKDDBFB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D4DE0)
#define HMNFGKDDBFB_PNNBGNGKCKC_1_OFFSET UNITYSDK_OFFSET(0x18BB2BB0)
#define HMNFGKDDBFB_PNNBGNGKCKC_OFFSET UNITYSDK_OFFSET(0x18BB2B10)
#define HMNFGKDDBFB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D4D90)
#define HMNFGKDDBFB___INIT_OFFSET UNITYSDK_OFFSET(0x7D4D70)

inline static constexpr unsigned int HMNFGKDDBFB_TypeDefinitionIndex = 17496;

struct alignas(8) HMNFGKDDBFB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMNFGKDDBFB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HMNFGKDDBFB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NKDIAGHHIME& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NKDIAGHHIME&))((::PBYTE)hIl2Cpp + HMNFGKDDBFB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::HMNFGKDDBFB PNNBGNGKCKC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HMNFGKDDBFB EIFONLCJOPG)
	{
		return ((::HMNFGKDDBFB(*)(::FlatBuffers::ByteBuffer*, ::HMNFGKDDBFB))((::PBYTE)hIl2Cpp + HMNFGKDDBFB_PNNBGNGKCKC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::HMNFGKDDBFB PNNBGNGKCKC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HMNFGKDDBFB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HMNFGKDDBFB_PNNBGNGKCKC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMNFGKDDBFB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::HMNFGKDDBFB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HMNFGKDDBFB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HMNFGKDDBFB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NKDIAGHHIME& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NKDIAGHHIME&, ::System::Int32&))((::PBYTE)hIl2Cpp + HMNFGKDDBFB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMNFGKDDBFB_GHKKNCCLPAN_OFFSET))(this);
	}
};

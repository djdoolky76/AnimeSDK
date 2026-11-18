#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JALCEGMFNHB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DPIKGDCNOCH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DPIKGDCNOCH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E2E80)
#define DPIKGDCNOCH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DPIKGDCNOCH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DPIKGDCNOCH_LHMLCBEDFON_1_OFFSET UNITYSDK_OFFSET(0x19514020)
#define DPIKGDCNOCH_LHMLCBEDFON_OFFSET UNITYSDK_OFFSET(0x19513DC0)
#define DPIKGDCNOCH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E2ED0)
#define DPIKGDCNOCH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E2EC0)
#define DPIKGDCNOCH___INIT_OFFSET UNITYSDK_OFFSET(0x7E2E60)

inline static constexpr unsigned int DPIKGDCNOCH_TypeDefinitionIndex = 16136;

struct alignas(8) DPIKGDCNOCH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIKGDCNOCH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPIKGDCNOCH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::DPIKGDCNOCH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DPIKGDCNOCH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPIKGDCNOCH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIKGDCNOCH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DPIKGDCNOCH LHMLCBEDFON(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DPIKGDCNOCH EIFONLCJOPG)
	{
		return ((::DPIKGDCNOCH(*)(::FlatBuffers::ByteBuffer*, ::DPIKGDCNOCH))((::PBYTE)hIl2Cpp + DPIKGDCNOCH_LHMLCBEDFON_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIKGDCNOCH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JALCEGMFNHB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JALCEGMFNHB&, ::System::Int32&))((::PBYTE)hIl2Cpp + DPIKGDCNOCH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::DPIKGDCNOCH LHMLCBEDFON_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DPIKGDCNOCH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPIKGDCNOCH_LHMLCBEDFON_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JALCEGMFNHB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JALCEGMFNHB&))((::PBYTE)hIl2Cpp + DPIKGDCNOCH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};

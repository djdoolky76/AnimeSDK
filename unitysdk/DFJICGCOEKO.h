#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CGJLNCAPNKN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DFJICGCOEKO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DFJICGCOEKO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FB890)
#define DFJICGCOEKO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DFJICGCOEKO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DFJICGCOEKO_HLMKILPIPAN_1_OFFSET UNITYSDK_OFFSET(0x1A5902D0)
#define DFJICGCOEKO_HLMKILPIPAN_OFFSET UNITYSDK_OFFSET(0x1A590260)
#define DFJICGCOEKO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FB8E0)
#define DFJICGCOEKO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FB8D0)
#define DFJICGCOEKO___INIT_OFFSET UNITYSDK_OFFSET(0x7FB870)

inline static constexpr unsigned int DFJICGCOEKO_TypeDefinitionIndex = 12635;

struct alignas(8) DFJICGCOEKO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJICGCOEKO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFJICGCOEKO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJICGCOEKO_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CGJLNCAPNKN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CGJLNCAPNKN&))((::PBYTE)hIl2Cpp + DFJICGCOEKO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::DFJICGCOEKO HLMKILPIPAN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DFJICGCOEKO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFJICGCOEKO_HLMKILPIPAN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::DFJICGCOEKO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DFJICGCOEKO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFJICGCOEKO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJICGCOEKO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DFJICGCOEKO HLMKILPIPAN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DFJICGCOEKO EIFONLCJOPG)
	{
		return ((::DFJICGCOEKO(*)(::FlatBuffers::ByteBuffer*, ::DFJICGCOEKO))((::PBYTE)hIl2Cpp + DFJICGCOEKO_HLMKILPIPAN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 BHGFGCAOHEC, ::System::Int32 ENEIPEBCLDH, ::CGJLNCAPNKN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::CGJLNCAPNKN&, ::System::Int32&))((::PBYTE)hIl2Cpp + DFJICGCOEKO_LLGCOCLACNA_OFFSET))(this, BHGFGCAOHEC, ENEIPEBCLDH, EGEGIMGMJHN, ABHBKFJKINO);
	}
};

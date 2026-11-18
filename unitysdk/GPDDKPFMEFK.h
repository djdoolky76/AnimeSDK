#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ALPAMOINNOJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GPDDKPFMEFK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GPDDKPFMEFK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DEB20)
#define GPDDKPFMEFK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GPDDKPFMEFK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GPDDKPFMEFK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DEB60)
#define GPDDKPFMEFK_MGPNEGEIIBE_1_OFFSET UNITYSDK_OFFSET(0x1933C450)
#define GPDDKPFMEFK_MGPNEGEIIBE_OFFSET UNITYSDK_OFFSET(0x1933C270)
#define GPDDKPFMEFK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DEB10)
#define GPDDKPFMEFK___INIT_OFFSET UNITYSDK_OFFSET(0x7DEAF0)

inline static constexpr unsigned int GPDDKPFMEFK_TypeDefinitionIndex = 17509;

struct alignas(8) GPDDKPFMEFK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDDKPFMEFK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GPDDKPFMEFK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDDKPFMEFK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ALPAMOINNOJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ALPAMOINNOJ&))((::PBYTE)hIl2Cpp + GPDDKPFMEFK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::GPDDKPFMEFK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GPDDKPFMEFK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GPDDKPFMEFK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GPDDKPFMEFK MGPNEGEIIBE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GPDDKPFMEFK EIFONLCJOPG)
	{
		return ((::GPDDKPFMEFK(*)(::FlatBuffers::ByteBuffer*, ::GPDDKPFMEFK))((::PBYTE)hIl2Cpp + GPDDKPFMEFK_MGPNEGEIIBE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 PBHJGJGHHLB, ::System::Int32 PJIPJAFFDAM, ::ALPAMOINNOJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::ALPAMOINNOJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + GPDDKPFMEFK_LLGCOCLACNA_OFFSET))(this, PBHJGJGHHLB, PJIPJAFFDAM, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDDKPFMEFK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GPDDKPFMEFK MGPNEGEIIBE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GPDDKPFMEFK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GPDDKPFMEFK_MGPNEGEIIBE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};

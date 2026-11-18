#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AJLBEMPAIJL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MMLJMPPLOII_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MMLJMPPLOII_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AEB50)
#define MMLJMPPLOII_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MMLJMPPLOII_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MMLJMPPLOII_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8AEB30)
#define MMLJMPPLOII_MBKCDALCLGF_1_OFFSET UNITYSDK_OFFSET(0x1D0B9C30)
#define MMLJMPPLOII_MBKCDALCLGF_OFFSET UNITYSDK_OFFSET(0x1D0B9B90)
#define MMLJMPPLOII_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AEB40)
#define MMLJMPPLOII___INIT_OFFSET UNITYSDK_OFFSET(0x8AEB10)

inline static constexpr unsigned int MMLJMPPLOII_TypeDefinitionIndex = 9278;

struct alignas(8) MMLJMPPLOII
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMLJMPPLOII_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMLJMPPLOII___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MMLJMPPLOII MBKCDALCLGF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MMLJMPPLOII EIFONLCJOPG)
	{
		return ((::MMLJMPPLOII(*)(::FlatBuffers::ByteBuffer*, ::MMLJMPPLOII))((::PBYTE)hIl2Cpp + MMLJMPPLOII_MBKCDALCLGF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::MMLJMPPLOII MBKCDALCLGF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MMLJMPPLOII(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMLJMPPLOII_MBKCDALCLGF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AJLBEMPAIJL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AJLBEMPAIJL&, ::System::Int32&))((::PBYTE)hIl2Cpp + MMLJMPPLOII_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMLJMPPLOII_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AJLBEMPAIJL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AJLBEMPAIJL&))((::PBYTE)hIl2Cpp + MMLJMPPLOII_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMLJMPPLOII_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::MMLJMPPLOII BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MMLJMPPLOII(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMLJMPPLOII_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};

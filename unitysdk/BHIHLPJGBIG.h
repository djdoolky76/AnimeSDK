#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PCNLEECCLAC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BHIHLPJGBIG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BHIHLPJGBIG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ACA10)
#define BHIHLPJGBIG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BHIHLPJGBIG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BHIHLPJGBIG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7ACA00)
#define BHIHLPJGBIG_OAMAAGBBPCH_1_OFFSET UNITYSDK_OFFSET(0x1775BC40)
#define BHIHLPJGBIG_OAMAAGBBPCH_OFFSET UNITYSDK_OFFSET(0x1775B9A0)
#define BHIHLPJGBIG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7AC9F0)
#define BHIHLPJGBIG___INIT_OFFSET UNITYSDK_OFFSET(0x7AC9D0)

inline static constexpr unsigned int BHIHLPJGBIG_TypeDefinitionIndex = 14822;

struct alignas(8) BHIHLPJGBIG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHIHLPJGBIG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BHIHLPJGBIG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHIHLPJGBIG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::BHIHLPJGBIG OAMAAGBBPCH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BHIHLPJGBIG EIFONLCJOPG)
	{
		return ((::BHIHLPJGBIG(*)(::FlatBuffers::ByteBuffer*, ::BHIHLPJGBIG))((::PBYTE)hIl2Cpp + BHIHLPJGBIG_OAMAAGBBPCH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHIHLPJGBIG_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PCNLEECCLAC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PCNLEECCLAC&, ::System::Int32&))((::PBYTE)hIl2Cpp + BHIHLPJGBIG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::BHIHLPJGBIG OAMAAGBBPCH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BHIHLPJGBIG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BHIHLPJGBIG_OAMAAGBBPCH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::BHIHLPJGBIG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BHIHLPJGBIG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BHIHLPJGBIG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PCNLEECCLAC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PCNLEECCLAC&))((::PBYTE)hIl2Cpp + BHIHLPJGBIG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};

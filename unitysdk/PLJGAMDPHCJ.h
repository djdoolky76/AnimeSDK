#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GNBFHOHIOHP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PLJGAMDPHCJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PLJGAMDPHCJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81EBA0)
#define PLJGAMDPHCJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PLJGAMDPHCJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PLJGAMDPHCJ_LHKIJGAAEKI_1_OFFSET UNITYSDK_OFFSET(0x1BF92610)
#define PLJGAMDPHCJ_LHKIJGAAEKI_OFFSET UNITYSDK_OFFSET(0x1BF925A0)
#define PLJGAMDPHCJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81EB80)
#define PLJGAMDPHCJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81EB90)
#define PLJGAMDPHCJ___INIT_OFFSET UNITYSDK_OFFSET(0x81EB60)

inline static constexpr unsigned int PLJGAMDPHCJ_TypeDefinitionIndex = 17198;

struct alignas(8) PLJGAMDPHCJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLJGAMDPHCJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLJGAMDPHCJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GNBFHOHIOHP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GNBFHOHIOHP&, ::System::Int32&))((::PBYTE)hIl2Cpp + PLJGAMDPHCJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLJGAMDPHCJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GNBFHOHIOHP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GNBFHOHIOHP&))((::PBYTE)hIl2Cpp + PLJGAMDPHCJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PLJGAMDPHCJ LHKIJGAAEKI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PLJGAMDPHCJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLJGAMDPHCJ_LHKIJGAAEKI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::PLJGAMDPHCJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PLJGAMDPHCJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLJGAMDPHCJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PLJGAMDPHCJ LHKIJGAAEKI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PLJGAMDPHCJ EIFONLCJOPG)
	{
		return ((::PLJGAMDPHCJ(*)(::FlatBuffers::ByteBuffer*, ::PLJGAMDPHCJ))((::PBYTE)hIl2Cpp + PLJGAMDPHCJ_LHKIJGAAEKI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLJGAMDPHCJ_GHKKNCCLPAN_OFFSET))(this);
	}
};

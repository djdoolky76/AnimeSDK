#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MDPGNMAGPDK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LAAFFGNKKBM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LAAFFGNKKBM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EF080)
#define LAAFFGNKKBM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LAAFFGNKKBM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LAAFFGNKKBM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EF070)
#define LAAFFGNKKBM_PGBICKMMHBO_1_OFFSET UNITYSDK_OFFSET(0x19D9FEB0)
#define LAAFFGNKKBM_PGBICKMMHBO_OFFSET UNITYSDK_OFFSET(0x19D9FE40)
#define LAAFFGNKKBM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EF060)
#define LAAFFGNKKBM___INIT_OFFSET UNITYSDK_OFFSET(0x7EF040)

inline static constexpr unsigned int LAAFFGNKKBM_TypeDefinitionIndex = 13767;

struct alignas(8) LAAFFGNKKBM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAAFFGNKKBM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LAAFFGNKKBM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LAAFFGNKKBM PGBICKMMHBO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LAAFFGNKKBM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LAAFFGNKKBM_PGBICKMMHBO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAAFFGNKKBM_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAAFFGNKKBM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LAAFFGNKKBM PGBICKMMHBO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LAAFFGNKKBM EIFONLCJOPG)
	{
		return ((::LAAFFGNKKBM(*)(::FlatBuffers::ByteBuffer*, ::LAAFFGNKKBM))((::PBYTE)hIl2Cpp + LAAFFGNKKBM_PGBICKMMHBO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MDPGNMAGPDK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MDPGNMAGPDK&, ::System::Int32&))((::PBYTE)hIl2Cpp + LAAFFGNKKBM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MDPGNMAGPDK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MDPGNMAGPDK&))((::PBYTE)hIl2Cpp + LAAFFGNKKBM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::LAAFFGNKKBM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LAAFFGNKKBM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LAAFFGNKKBM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};

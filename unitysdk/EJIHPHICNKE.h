#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DDLACPFFNBL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EJIHPHICNKE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EJIHPHICNKE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x809530)
#define EJIHPHICNKE_CCJHOBEAKIB_1_OFFSET UNITYSDK_OFFSET(0x1B0FC520)
#define EJIHPHICNKE_CCJHOBEAKIB_OFFSET UNITYSDK_OFFSET(0x1B0FC4C0)
#define EJIHPHICNKE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EJIHPHICNKE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EJIHPHICNKE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x809520)
#define EJIHPHICNKE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x809570)
#define EJIHPHICNKE___INIT_OFFSET UNITYSDK_OFFSET(0x809500)

inline static constexpr unsigned int EJIHPHICNKE_TypeDefinitionIndex = 13728;

struct alignas(8) EJIHPHICNKE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIHPHICNKE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EJIHPHICNKE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DDLACPFFNBL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DDLACPFFNBL&))((::PBYTE)hIl2Cpp + EJIHPHICNKE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 HGDPCOKCCFO, ::System::Int32 DOHBINBLJDJ, ::DDLACPFFNBL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::DDLACPFFNBL&, ::System::Int32&))((::PBYTE)hIl2Cpp + EJIHPHICNKE_LLGCOCLACNA_OFFSET))(this, HGDPCOKCCFO, DOHBINBLJDJ, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::EJIHPHICNKE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EJIHPHICNKE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EJIHPHICNKE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIHPHICNKE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::EJIHPHICNKE CCJHOBEAKIB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EJIHPHICNKE EIFONLCJOPG)
	{
		return ((::EJIHPHICNKE(*)(::FlatBuffers::ByteBuffer*, ::EJIHPHICNKE))((::PBYTE)hIl2Cpp + EJIHPHICNKE_CCJHOBEAKIB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIHPHICNKE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::EJIHPHICNKE CCJHOBEAKIB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EJIHPHICNKE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EJIHPHICNKE_CCJHOBEAKIB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};

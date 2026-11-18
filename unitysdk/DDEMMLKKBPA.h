#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FJGAAHNJJHA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DDEMMLKKBPA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DDEMMLKKBPA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x788AD0)
#define DDEMMLKKBPA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DDEMMLKKBPA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DDEMMLKKBPA_HFBLLKDLJOH_1_OFFSET UNITYSDK_OFFSET(0x16617170)
#define DDEMMLKKBPA_HFBLLKDLJOH_OFFSET UNITYSDK_OFFSET(0x16617100)
#define DDEMMLKKBPA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x788B10)
#define DDEMMLKKBPA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x788AC0)
#define DDEMMLKKBPA___INIT_OFFSET UNITYSDK_OFFSET(0x788AA0)

inline static constexpr unsigned int DDEMMLKKBPA_TypeDefinitionIndex = 13456;

struct alignas(8) DDEMMLKKBPA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDEMMLKKBPA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DDEMMLKKBPA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DDEMMLKKBPA HFBLLKDLJOH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DDEMMLKKBPA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DDEMMLKKBPA_HFBLLKDLJOH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::DDEMMLKKBPA HFBLLKDLJOH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DDEMMLKKBPA EIFONLCJOPG)
	{
		return ((::DDEMMLKKBPA(*)(::FlatBuffers::ByteBuffer*, ::DDEMMLKKBPA))((::PBYTE)hIl2Cpp + DDEMMLKKBPA_HFBLLKDLJOH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDEMMLKKBPA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDEMMLKKBPA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::DDEMMLKKBPA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DDEMMLKKBPA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DDEMMLKKBPA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FJGAAHNJJHA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FJGAAHNJJHA&, ::System::Int32&))((::PBYTE)hIl2Cpp + DDEMMLKKBPA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FJGAAHNJJHA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FJGAAHNJJHA&))((::PBYTE)hIl2Cpp + DDEMMLKKBPA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};

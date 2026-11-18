#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HNJABDNDBMI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MCMPENEGEOL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MCMPENEGEOL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C3F40)
#define MCMPENEGEOL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MCMPENEGEOL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MCMPENEGEOL_LEEMPOEHFJF_1_OFFSET UNITYSDK_OFFSET(0x17FC2420)
#define MCMPENEGEOL_LEEMPOEHFJF_OFFSET UNITYSDK_OFFSET(0x17FC2160)
#define MCMPENEGEOL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C3F90)
#define MCMPENEGEOL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C3F80)
#define MCMPENEGEOL___INIT_OFFSET UNITYSDK_OFFSET(0x7C3F20)

inline static constexpr unsigned int MCMPENEGEOL_TypeDefinitionIndex = 12723;

struct alignas(8) MCMPENEGEOL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMPENEGEOL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MCMPENEGEOL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::MCMPENEGEOL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MCMPENEGEOL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MCMPENEGEOL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MCMPENEGEOL LEEMPOEHFJF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MCMPENEGEOL EIFONLCJOPG)
	{
		return ((::MCMPENEGEOL(*)(::FlatBuffers::ByteBuffer*, ::MCMPENEGEOL))((::PBYTE)hIl2Cpp + MCMPENEGEOL_LEEMPOEHFJF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMPENEGEOL_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMPENEGEOL_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HNJABDNDBMI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNJABDNDBMI&))((::PBYTE)hIl2Cpp + MCMPENEGEOL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HNJABDNDBMI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNJABDNDBMI&, ::System::Int32&))((::PBYTE)hIl2Cpp + MCMPENEGEOL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::MCMPENEGEOL LEEMPOEHFJF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MCMPENEGEOL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MCMPENEGEOL_LEEMPOEHFJF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};

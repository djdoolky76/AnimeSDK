#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NKGENBAGBLJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CDKNMFHGHEK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CDKNMFHGHEK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F1D40)
#define CDKNMFHGHEK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CDKNMFHGHEK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CDKNMFHGHEK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F1D80)
#define CDKNMFHGHEK_OMILNOONFLM_1_OFFSET UNITYSDK_OFFSET(0x19F2A030)
#define CDKNMFHGHEK_OMILNOONFLM_OFFSET UNITYSDK_OFFSET(0x19F29EF0)
#define CDKNMFHGHEK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F1D30)
#define CDKNMFHGHEK___INIT_OFFSET UNITYSDK_OFFSET(0x7F1D10)

inline static constexpr unsigned int CDKNMFHGHEK_TypeDefinitionIndex = 15227;

struct alignas(8) CDKNMFHGHEK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKNMFHGHEK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDKNMFHGHEK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKNMFHGHEK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CDKNMFHGHEK OMILNOONFLM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CDKNMFHGHEK EIFONLCJOPG)
	{
		return ((::CDKNMFHGHEK(*)(::FlatBuffers::ByteBuffer*, ::CDKNMFHGHEK))((::PBYTE)hIl2Cpp + CDKNMFHGHEK_OMILNOONFLM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NKGENBAGBLJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NKGENBAGBLJ&))((::PBYTE)hIl2Cpp + CDKNMFHGHEK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::CDKNMFHGHEK OMILNOONFLM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CDKNMFHGHEK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDKNMFHGHEK_OMILNOONFLM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKNMFHGHEK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::CDKNMFHGHEK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CDKNMFHGHEK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDKNMFHGHEK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NKGENBAGBLJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NKGENBAGBLJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + CDKNMFHGHEK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};

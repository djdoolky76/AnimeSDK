#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KMLNLEBALLI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DNPGLOJLIBF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DNPGLOJLIBF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7662A0)
#define DNPGLOJLIBF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DNPGLOJLIBF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DNPGLOJLIBF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x766290)
#define DNPGLOJLIBF_LPBMNLDPHKB_1_OFFSET UNITYSDK_OFFSET(0x157A7700)
#define DNPGLOJLIBF_LPBMNLDPHKB_OFFSET UNITYSDK_OFFSET(0x157A7690)
#define DNPGLOJLIBF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7662E0)
#define DNPGLOJLIBF___INIT_OFFSET UNITYSDK_OFFSET(0x766270)

inline static constexpr unsigned int DNPGLOJLIBF_TypeDefinitionIndex = 15618;

struct alignas(8) DNPGLOJLIBF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNPGLOJLIBF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DNPGLOJLIBF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNPGLOJLIBF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DNPGLOJLIBF LPBMNLDPHKB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DNPGLOJLIBF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DNPGLOJLIBF_LPBMNLDPHKB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KMLNLEBALLI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KMLNLEBALLI&, ::System::Int32&))((::PBYTE)hIl2Cpp + DNPGLOJLIBF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KMLNLEBALLI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KMLNLEBALLI&))((::PBYTE)hIl2Cpp + DNPGLOJLIBF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::DNPGLOJLIBF LPBMNLDPHKB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DNPGLOJLIBF EIFONLCJOPG)
	{
		return ((::DNPGLOJLIBF(*)(::FlatBuffers::ByteBuffer*, ::DNPGLOJLIBF))((::PBYTE)hIl2Cpp + DNPGLOJLIBF_LPBMNLDPHKB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::DNPGLOJLIBF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DNPGLOJLIBF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DNPGLOJLIBF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNPGLOJLIBF_PPOMNIFACOL_OFFSET))(this);
	}
};

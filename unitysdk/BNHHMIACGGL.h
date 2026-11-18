#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CAFHLHBNLEF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BNHHMIACGGL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BNHHMIACGGL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x765770)
#define BNHHMIACGGL_FPIGCLHAFOI_1_OFFSET UNITYSDK_OFFSET(0x15785750)
#define BNHHMIACGGL_FPIGCLHAFOI_OFFSET UNITYSDK_OFFSET(0x157856B0)
#define BNHHMIACGGL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BNHHMIACGGL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BNHHMIACGGL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x765760)
#define BNHHMIACGGL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7657B0)
#define BNHHMIACGGL___INIT_OFFSET UNITYSDK_OFFSET(0x765740)

inline static constexpr unsigned int BNHHMIACGGL_TypeDefinitionIndex = 15949;

struct alignas(8) BNHHMIACGGL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHHMIACGGL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BNHHMIACGGL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BNHHMIACGGL FPIGCLHAFOI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BNHHMIACGGL EIFONLCJOPG)
	{
		return ((::BNHHMIACGGL(*)(::FlatBuffers::ByteBuffer*, ::BNHHMIACGGL))((::PBYTE)hIl2Cpp + BNHHMIACGGL_FPIGCLHAFOI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::BNHHMIACGGL FPIGCLHAFOI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BNHHMIACGGL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BNHHMIACGGL_FPIGCLHAFOI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CAFHLHBNLEF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CAFHLHBNLEF&, ::System::Int32&))((::PBYTE)hIl2Cpp + BNHHMIACGGL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::BNHHMIACGGL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BNHHMIACGGL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BNHHMIACGGL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHHMIACGGL_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHHMIACGGL_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CAFHLHBNLEF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CAFHLHBNLEF&))((::PBYTE)hIl2Cpp + BNHHMIACGGL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/COPBNLIEIMA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GOAKKKAAAKJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GOAKKKAAAKJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x814090)
#define GOAKKKAAAKJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GOAKKKAAAKJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GOAKKKAAAKJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x814070)
#define GOAKKKAAAKJ_MLNHBFEAFJP_1_OFFSET UNITYSDK_OFFSET(0x1B8723D0)
#define GOAKKKAAAKJ_MLNHBFEAFJP_OFFSET UNITYSDK_OFFSET(0x1B872360)
#define GOAKKKAAAKJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x814080)
#define GOAKKKAAAKJ___INIT_OFFSET UNITYSDK_OFFSET(0x814050)

inline static constexpr unsigned int GOAKKKAAAKJ_TypeDefinitionIndex = 14784;

struct alignas(8) GOAKKKAAAKJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOAKKKAAAKJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GOAKKKAAAKJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::COPBNLIEIMA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::COPBNLIEIMA&, ::System::Int32&))((::PBYTE)hIl2Cpp + GOAKKKAAAKJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOAKKKAAAKJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::GOAKKKAAAKJ MLNHBFEAFJP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GOAKKKAAAKJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GOAKKKAAAKJ_MLNHBFEAFJP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::COPBNLIEIMA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::COPBNLIEIMA&))((::PBYTE)hIl2Cpp + GOAKKKAAAKJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GOAKKKAAAKJ MLNHBFEAFJP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GOAKKKAAAKJ EIFONLCJOPG)
	{
		return ((::GOAKKKAAAKJ(*)(::FlatBuffers::ByteBuffer*, ::GOAKKKAAAKJ))((::PBYTE)hIl2Cpp + GOAKKKAAAKJ_MLNHBFEAFJP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::GOAKKKAAAKJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GOAKKKAAAKJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GOAKKKAAAKJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOAKKKAAAKJ_GHKKNCCLPAN_OFFSET))(this);
	}
};

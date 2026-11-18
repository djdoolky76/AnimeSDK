#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MBDILLPLKBB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OLLLBNEFIPC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OLLLBNEFIPC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80C810)
#define OLLLBNEFIPC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OLLLBNEFIPC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OLLLBNEFIPC_LFONIHACIAK_1_OFFSET UNITYSDK_OFFSET(0x1B340870)
#define OLLLBNEFIPC_LFONIHACIAK_OFFSET UNITYSDK_OFFSET(0x1B340800)
#define OLLLBNEFIPC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80C800)
#define OLLLBNEFIPC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80C850)
#define OLLLBNEFIPC___INIT_OFFSET UNITYSDK_OFFSET(0x80C7E0)

inline static constexpr unsigned int OLLLBNEFIPC_TypeDefinitionIndex = 10230;

struct alignas(8) OLLLBNEFIPC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLLBNEFIPC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OLLLBNEFIPC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OLLLBNEFIPC LFONIHACIAK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OLLLBNEFIPC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OLLLBNEFIPC_LFONIHACIAK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::OLLLBNEFIPC LFONIHACIAK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OLLLBNEFIPC EIFONLCJOPG)
	{
		return ((::OLLLBNEFIPC(*)(::FlatBuffers::ByteBuffer*, ::OLLLBNEFIPC))((::PBYTE)hIl2Cpp + OLLLBNEFIPC_LFONIHACIAK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLLBNEFIPC_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MBDILLPLKBB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MBDILLPLKBB&, ::System::Int32&))((::PBYTE)hIl2Cpp + OLLLBNEFIPC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::OLLLBNEFIPC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OLLLBNEFIPC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OLLLBNEFIPC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MBDILLPLKBB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MBDILLPLKBB&))((::PBYTE)hIl2Cpp + OLLLBNEFIPC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLLBNEFIPC_PPOMNIFACOL_OFFSET))(this);
	}
};

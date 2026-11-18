#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EKGOCKJCNNJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PGHBMNLLINE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PGHBMNLLINE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C4E80)
#define PGHBMNLLINE_EKBPOCFBCLJ_1_OFFSET UNITYSDK_OFFSET(0x17FE8B50)
#define PGHBMNLLINE_EKBPOCFBCLJ_OFFSET UNITYSDK_OFFSET(0x17FE8AE0)
#define PGHBMNLLINE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PGHBMNLLINE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PGHBMNLLINE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C4EC0)
#define PGHBMNLLINE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C4E70)
#define PGHBMNLLINE___INIT_OFFSET UNITYSDK_OFFSET(0x7C4E50)

inline static constexpr unsigned int PGHBMNLLINE_TypeDefinitionIndex = 11004;

struct alignas(8) PGHBMNLLINE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGHBMNLLINE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PGHBMNLLINE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGHBMNLLINE_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGHBMNLLINE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::PGHBMNLLINE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PGHBMNLLINE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PGHBMNLLINE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PGHBMNLLINE EKBPOCFBCLJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PGHBMNLLINE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PGHBMNLLINE_EKBPOCFBCLJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::PGHBMNLLINE EKBPOCFBCLJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PGHBMNLLINE EIFONLCJOPG)
	{
		return ((::PGHBMNLLINE(*)(::FlatBuffers::ByteBuffer*, ::PGHBMNLLINE))((::PBYTE)hIl2Cpp + PGHBMNLLINE_EKBPOCFBCLJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EKGOCKJCNNJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EKGOCKJCNNJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + PGHBMNLLINE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EKGOCKJCNNJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EKGOCKJCNNJ&))((::PBYTE)hIl2Cpp + PGHBMNLLINE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};

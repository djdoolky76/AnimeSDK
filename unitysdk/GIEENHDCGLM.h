#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HMDAMBMBHCC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GIEENHDCGLM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GIEENHDCGLM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x811C10)
#define GIEENHDCGLM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GIEENHDCGLM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GIEENHDCGLM_JLCFJMNINJB_1_OFFSET UNITYSDK_OFFSET(0x1B7B9200)
#define GIEENHDCGLM_JLCFJMNINJB_OFFSET UNITYSDK_OFFSET(0x1B7B9190)
#define GIEENHDCGLM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x811C50)
#define GIEENHDCGLM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x811C00)
#define GIEENHDCGLM___INIT_OFFSET UNITYSDK_OFFSET(0x811BE0)

inline static constexpr unsigned int GIEENHDCGLM_TypeDefinitionIndex = 12720;

struct alignas(8) GIEENHDCGLM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIEENHDCGLM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GIEENHDCGLM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GIEENHDCGLM JLCFJMNINJB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GIEENHDCGLM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GIEENHDCGLM_JLCFJMNINJB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HMDAMBMBHCC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HMDAMBMBHCC&))((::PBYTE)hIl2Cpp + GIEENHDCGLM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIEENHDCGLM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::GIEENHDCGLM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GIEENHDCGLM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GIEENHDCGLM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GIEENHDCGLM JLCFJMNINJB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GIEENHDCGLM EIFONLCJOPG)
	{
		return ((::GIEENHDCGLM(*)(::FlatBuffers::ByteBuffer*, ::GIEENHDCGLM))((::PBYTE)hIl2Cpp + GIEENHDCGLM_JLCFJMNINJB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIEENHDCGLM_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HMDAMBMBHCC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HMDAMBMBHCC&, ::System::Int32&))((::PBYTE)hIl2Cpp + GIEENHDCGLM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};

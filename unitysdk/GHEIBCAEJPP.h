#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FEAPCJOEPNC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GHEIBCAEJPP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GHEIBCAEJPP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B4CD0)
#define GHEIBCAEJPP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GHEIBCAEJPP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GHEIBCAEJPP_PGOLDAENFFG_1_OFFSET UNITYSDK_OFFSET(0x17BECA30)
#define GHEIBCAEJPP_PGOLDAENFFG_OFFSET UNITYSDK_OFFSET(0x17BEC9C0)
#define GHEIBCAEJPP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B4CC0)
#define GHEIBCAEJPP___INIT_OFFSET UNITYSDK_OFFSET(0x7B4CA0)

inline static constexpr unsigned int GHEIBCAEJPP_TypeDefinitionIndex = 13476;

struct alignas(8) GHEIBCAEJPP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEIBCAEJPP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHEIBCAEJPP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GHEIBCAEJPP PGOLDAENFFG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GHEIBCAEJPP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHEIBCAEJPP_PGOLDAENFFG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEIBCAEJPP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::GHEIBCAEJPP PGOLDAENFFG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GHEIBCAEJPP EIFONLCJOPG)
	{
		return ((::GHEIBCAEJPP(*)(::FlatBuffers::ByteBuffer*, ::GHEIBCAEJPP))((::PBYTE)hIl2Cpp + GHEIBCAEJPP_PGOLDAENFFG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FEAPCJOEPNC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FEAPCJOEPNC&))((::PBYTE)hIl2Cpp + GHEIBCAEJPP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEIBCAEJPP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::GHEIBCAEJPP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GHEIBCAEJPP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHEIBCAEJPP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};

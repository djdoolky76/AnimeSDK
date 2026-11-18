#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EJDAHGBHBOP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GLPILGBLOJH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GLPILGBLOJH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x78B0E0)
#define GLPILGBLOJH_DPEIPDCBIHB_1_OFFSET UNITYSDK_OFFSET(0x1664E950)
#define GLPILGBLOJH_DPEIPDCBIHB_OFFSET UNITYSDK_OFFSET(0x1664E7B0)
#define GLPILGBLOJH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GLPILGBLOJH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GLPILGBLOJH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x78B0D0)
#define GLPILGBLOJH___INIT_OFFSET UNITYSDK_OFFSET(0x78B0B0)

inline static constexpr unsigned int GLPILGBLOJH_TypeDefinitionIndex = 13717;

struct alignas(8) GLPILGBLOJH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPILGBLOJH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLPILGBLOJH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GLPILGBLOJH DPEIPDCBIHB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GLPILGBLOJH EIFONLCJOPG)
	{
		return ((::GLPILGBLOJH(*)(::FlatBuffers::ByteBuffer*, ::GLPILGBLOJH))((::PBYTE)hIl2Cpp + GLPILGBLOJH_DPEIPDCBIHB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPILGBLOJH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EJDAHGBHBOP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EJDAHGBHBOP&))((::PBYTE)hIl2Cpp + GLPILGBLOJH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::GLPILGBLOJH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GLPILGBLOJH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLPILGBLOJH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GLPILGBLOJH DPEIPDCBIHB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GLPILGBLOJH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLPILGBLOJH_DPEIPDCBIHB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPILGBLOJH_GHKKNCCLPAN_OFFSET))(this);
	}
};

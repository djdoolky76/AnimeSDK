#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FGPMDNJDHCF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BKPCPAAHJFE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BKPCPAAHJFE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ACD40)
#define BKPCPAAHJFE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BKPCPAAHJFE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BKPCPAAHJFE_OANBNOEAKBK_1_OFFSET UNITYSDK_OFFSET(0x17760430)
#define BKPCPAAHJFE_OANBNOEAKBK_OFFSET UNITYSDK_OFFSET(0x17760390)
#define BKPCPAAHJFE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7ACD30)
#define BKPCPAAHJFE___INIT_OFFSET UNITYSDK_OFFSET(0x7ACD10)

inline static constexpr unsigned int BKPCPAAHJFE_TypeDefinitionIndex = 12156;

struct alignas(8) BKPCPAAHJFE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPCPAAHJFE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BKPCPAAHJFE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPCPAAHJFE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::BKPCPAAHJFE OANBNOEAKBK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BKPCPAAHJFE EIFONLCJOPG)
	{
		return ((::BKPCPAAHJFE(*)(::FlatBuffers::ByteBuffer*, ::BKPCPAAHJFE))((::PBYTE)hIl2Cpp + BKPCPAAHJFE_OANBNOEAKBK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::BKPCPAAHJFE OANBNOEAKBK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BKPCPAAHJFE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BKPCPAAHJFE_OANBNOEAKBK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FGPMDNJDHCF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FGPMDNJDHCF&))((::PBYTE)hIl2Cpp + BKPCPAAHJFE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::BKPCPAAHJFE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BKPCPAAHJFE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BKPCPAAHJFE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPCPAAHJFE_GHKKNCCLPAN_OFFSET))(this);
	}
};

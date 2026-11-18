#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HIHBLFIJEGF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NLBGECNFNLP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NLBGECNFNLP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8057C0)
#define NLBGECNFNLP_CALLELKIEDG_1_OFFSET UNITYSDK_OFFSET(0x1AD81940)
#define NLBGECNFNLP_CALLELKIEDG_OFFSET UNITYSDK_OFFSET(0x1AD817A0)
#define NLBGECNFNLP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NLBGECNFNLP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NLBGECNFNLP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x805800)
#define NLBGECNFNLP___INIT_OFFSET UNITYSDK_OFFSET(0x8057A0)

inline static constexpr unsigned int NLBGECNFNLP_TypeDefinitionIndex = 10710;

struct alignas(8) NLBGECNFNLP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBGECNFNLP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLBGECNFNLP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NLBGECNFNLP CALLELKIEDG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NLBGECNFNLP EIFONLCJOPG)
	{
		return ((::NLBGECNFNLP(*)(::FlatBuffers::ByteBuffer*, ::NLBGECNFNLP))((::PBYTE)hIl2Cpp + NLBGECNFNLP_CALLELKIEDG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::NLBGECNFNLP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NLBGECNFNLP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLBGECNFNLP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBGECNFNLP_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HIHBLFIJEGF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HIHBLFIJEGF&))((::PBYTE)hIl2Cpp + NLBGECNFNLP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::NLBGECNFNLP CALLELKIEDG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NLBGECNFNLP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLBGECNFNLP_CALLELKIEDG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBGECNFNLP_PPOMNIFACOL_OFFSET))(this);
	}
};

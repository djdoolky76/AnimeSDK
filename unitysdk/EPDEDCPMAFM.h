#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AGBNEKFIBCB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EPDEDCPMAFM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EPDEDCPMAFM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EE430)
#define EPDEDCPMAFM_CKMJNBLMMHM_1_OFFSET UNITYSDK_OFFSET(0x19C13FC0)
#define EPDEDCPMAFM_CKMJNBLMMHM_OFFSET UNITYSDK_OFFSET(0x19C13F60)
#define EPDEDCPMAFM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EPDEDCPMAFM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EPDEDCPMAFM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EE470)
#define EPDEDCPMAFM___INIT_OFFSET UNITYSDK_OFFSET(0x7EE410)

inline static constexpr unsigned int EPDEDCPMAFM_TypeDefinitionIndex = 14935;

struct alignas(8) EPDEDCPMAFM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPDEDCPMAFM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EPDEDCPMAFM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AGBNEKFIBCB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AGBNEKFIBCB&))((::PBYTE)hIl2Cpp + EPDEDCPMAFM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::EPDEDCPMAFM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EPDEDCPMAFM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EPDEDCPMAFM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::EPDEDCPMAFM CKMJNBLMMHM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EPDEDCPMAFM EIFONLCJOPG)
	{
		return ((::EPDEDCPMAFM(*)(::FlatBuffers::ByteBuffer*, ::EPDEDCPMAFM))((::PBYTE)hIl2Cpp + EPDEDCPMAFM_CKMJNBLMMHM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::EPDEDCPMAFM CKMJNBLMMHM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EPDEDCPMAFM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EPDEDCPMAFM_CKMJNBLMMHM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPDEDCPMAFM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPDEDCPMAFM_GHKKNCCLPAN_OFFSET))(this);
	}
};

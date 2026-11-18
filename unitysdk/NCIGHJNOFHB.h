#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PLLOHEOGLLG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NCIGHJNOFHB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NCIGHJNOFHB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x805350)
#define NCIGHJNOFHB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NCIGHJNOFHB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NCIGHJNOFHB_MHEEPJPMJHO_1_OFFSET UNITYSDK_OFFSET(0x1AD7B7C0)
#define NCIGHJNOFHB_MHEEPJPMJHO_OFFSET UNITYSDK_OFFSET(0x1AD7B680)
#define NCIGHJNOFHB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x805390)
#define NCIGHJNOFHB___INIT_OFFSET UNITYSDK_OFFSET(0x805330)

inline static constexpr unsigned int NCIGHJNOFHB_TypeDefinitionIndex = 15186;

struct alignas(8) NCIGHJNOFHB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCIGHJNOFHB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NCIGHJNOFHB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NCIGHJNOFHB MHEEPJPMJHO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NCIGHJNOFHB EIFONLCJOPG)
	{
		return ((::NCIGHJNOFHB(*)(::FlatBuffers::ByteBuffer*, ::NCIGHJNOFHB))((::PBYTE)hIl2Cpp + NCIGHJNOFHB_MHEEPJPMJHO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PLLOHEOGLLG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PLLOHEOGLLG&))((::PBYTE)hIl2Cpp + NCIGHJNOFHB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::NCIGHJNOFHB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NCIGHJNOFHB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NCIGHJNOFHB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NCIGHJNOFHB MHEEPJPMJHO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NCIGHJNOFHB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NCIGHJNOFHB_MHEEPJPMJHO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCIGHJNOFHB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCIGHJNOFHB_GHKKNCCLPAN_OFFSET))(this);
	}
};

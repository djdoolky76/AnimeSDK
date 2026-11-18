#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GNGLJJCPPLD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ODDOBHCNAJO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ODDOBHCNAJO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81AB00)
#define ODDOBHCNAJO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ODDOBHCNAJO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ODDOBHCNAJO_MNNACKDOMED_1_OFFSET UNITYSDK_OFFSET(0x1BAB2380)
#define ODDOBHCNAJO_MNNACKDOMED_OFFSET UNITYSDK_OFFSET(0x1BAB2280)
#define ODDOBHCNAJO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81AAF0)
#define ODDOBHCNAJO___INIT_OFFSET UNITYSDK_OFFSET(0x81AAD0)

inline static constexpr unsigned int ODDOBHCNAJO_TypeDefinitionIndex = 16482;

struct alignas(8) ODDOBHCNAJO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODDOBHCNAJO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODDOBHCNAJO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODDOBHCNAJO_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODDOBHCNAJO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::ODDOBHCNAJO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ODDOBHCNAJO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODDOBHCNAJO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::ODDOBHCNAJO MNNACKDOMED(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ODDOBHCNAJO EIFONLCJOPG)
	{
		return ((::ODDOBHCNAJO(*)(::FlatBuffers::ByteBuffer*, ::ODDOBHCNAJO))((::PBYTE)hIl2Cpp + ODDOBHCNAJO_MNNACKDOMED_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GNGLJJCPPLD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GNGLJJCPPLD&))((::PBYTE)hIl2Cpp + ODDOBHCNAJO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::ODDOBHCNAJO MNNACKDOMED_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ODDOBHCNAJO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODDOBHCNAJO_MNNACKDOMED_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};

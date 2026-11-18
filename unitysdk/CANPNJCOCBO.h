#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OPIOIFPNFJJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CANPNJCOCBO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CANPNJCOCBO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C1820)
#define CANPNJCOCBO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CANPNJCOCBO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CANPNJCOCBO_KBNHFLKHDNH_1_OFFSET UNITYSDK_OFFSET(0x17F04280)
#define CANPNJCOCBO_KBNHFLKHDNH_OFFSET UNITYSDK_OFFSET(0x17F041E0)
#define CANPNJCOCBO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C1860)
#define CANPNJCOCBO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C1810)
#define CANPNJCOCBO___INIT_OFFSET UNITYSDK_OFFSET(0x7C17F0)

inline static constexpr unsigned int CANPNJCOCBO_TypeDefinitionIndex = 9995;

struct alignas(8) CANPNJCOCBO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CANPNJCOCBO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CANPNJCOCBO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CANPNJCOCBO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CANPNJCOCBO KBNHFLKHDNH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CANPNJCOCBO EIFONLCJOPG)
	{
		return ((::CANPNJCOCBO(*)(::FlatBuffers::ByteBuffer*, ::CANPNJCOCBO))((::PBYTE)hIl2Cpp + CANPNJCOCBO_KBNHFLKHDNH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::CANPNJCOCBO KBNHFLKHDNH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CANPNJCOCBO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CANPNJCOCBO_KBNHFLKHDNH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OPIOIFPNFJJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OPIOIFPNFJJ&))((::PBYTE)hIl2Cpp + CANPNJCOCBO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CANPNJCOCBO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::CANPNJCOCBO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CANPNJCOCBO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CANPNJCOCBO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OPIOIFPNFJJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OPIOIFPNFJJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + CANPNJCOCBO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};

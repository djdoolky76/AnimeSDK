#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KLPNFGJLLFH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define POGAAPNNIJN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define POGAAPNNIJN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x937630)
#define POGAAPNNIJN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define POGAAPNNIJN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define POGAAPNNIJN_HEGCEKKEKIE_1_OFFSET UNITYSDK_OFFSET(0x1EDC2AB0)
#define POGAAPNNIJN_HEGCEKKEKIE_OFFSET UNITYSDK_OFFSET(0x1EDC2A40)
#define POGAAPNNIJN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x937680)
#define POGAAPNNIJN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x937670)
#define POGAAPNNIJN___INIT_OFFSET UNITYSDK_OFFSET(0x937610)

inline static constexpr unsigned int POGAAPNNIJN_TypeDefinitionIndex = 10663;

struct alignas(8) POGAAPNNIJN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + POGAAPNNIJN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POGAAPNNIJN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::POGAAPNNIJN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::POGAAPNNIJN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POGAAPNNIJN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POGAAPNNIJN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::POGAAPNNIJN HEGCEKKEKIE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::POGAAPNNIJN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POGAAPNNIJN_HEGCEKKEKIE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::POGAAPNNIJN HEGCEKKEKIE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::POGAAPNNIJN EIFONLCJOPG)
	{
		return ((::POGAAPNNIJN(*)(::FlatBuffers::ByteBuffer*, ::POGAAPNNIJN))((::PBYTE)hIl2Cpp + POGAAPNNIJN_HEGCEKKEKIE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KLPNFGJLLFH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KLPNFGJLLFH&, ::System::Int32&))((::PBYTE)hIl2Cpp + POGAAPNNIJN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POGAAPNNIJN_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KLPNFGJLLFH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KLPNFGJLLFH&))((::PBYTE)hIl2Cpp + POGAAPNNIJN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};

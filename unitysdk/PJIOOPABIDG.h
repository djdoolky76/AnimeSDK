#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KIIGHGLCBDB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PJIOOPABIDG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PJIOOPABIDG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81EAE0)
#define PJIOOPABIDG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PJIOOPABIDG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PJIOOPABIDG_HDMCHLGAKFI_1_OFFSET UNITYSDK_OFFSET(0x1BF91D00)
#define PJIOOPABIDG_HDMCHLGAKFI_OFFSET UNITYSDK_OFFSET(0x1BF91C90)
#define PJIOOPABIDG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81EB30)
#define PJIOOPABIDG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81EB20)
#define PJIOOPABIDG___INIT_OFFSET UNITYSDK_OFFSET(0x81EAC0)

inline static constexpr unsigned int PJIOOPABIDG_TypeDefinitionIndex = 12193;

struct alignas(8) PJIOOPABIDG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJIOOPABIDG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PJIOOPABIDG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::PJIOOPABIDG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PJIOOPABIDG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PJIOOPABIDG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KIIGHGLCBDB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KIIGHGLCBDB&))((::PBYTE)hIl2Cpp + PJIOOPABIDG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PJIOOPABIDG HDMCHLGAKFI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PJIOOPABIDG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PJIOOPABIDG_HDMCHLGAKFI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJIOOPABIDG_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KIIGHGLCBDB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KIIGHGLCBDB&, ::System::Int32&))((::PBYTE)hIl2Cpp + PJIOOPABIDG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJIOOPABIDG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PJIOOPABIDG HDMCHLGAKFI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PJIOOPABIDG EIFONLCJOPG)
	{
		return ((::PJIOOPABIDG(*)(::FlatBuffers::ByteBuffer*, ::PJIOOPABIDG))((::PBYTE)hIl2Cpp + PJIOOPABIDG_HDMCHLGAKFI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OBCJEFGJLCP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JFPIMNACOEG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JFPIMNACOEG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x812A70)
#define JFPIMNACOEG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JFPIMNACOEG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JFPIMNACOEG_JDFFNMDCLIG_1_OFFSET UNITYSDK_OFFSET(0x1B7D9500)
#define JFPIMNACOEG_JDFFNMDCLIG_OFFSET UNITYSDK_OFFSET(0x1B7D9490)
#define JFPIMNACOEG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x812AB0)
#define JFPIMNACOEG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x812A60)
#define JFPIMNACOEG___INIT_OFFSET UNITYSDK_OFFSET(0x812A40)

inline static constexpr unsigned int JFPIMNACOEG_TypeDefinitionIndex = 13821;

struct alignas(8) JFPIMNACOEG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPIMNACOEG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JFPIMNACOEG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPIMNACOEG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::JFPIMNACOEG JDFFNMDCLIG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JFPIMNACOEG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JFPIMNACOEG_JDFFNMDCLIG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPIMNACOEG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::JFPIMNACOEG JDFFNMDCLIG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JFPIMNACOEG EIFONLCJOPG)
	{
		return ((::JFPIMNACOEG(*)(::FlatBuffers::ByteBuffer*, ::JFPIMNACOEG))((::PBYTE)hIl2Cpp + JFPIMNACOEG_JDFFNMDCLIG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::JFPIMNACOEG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JFPIMNACOEG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JFPIMNACOEG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OBCJEFGJLCP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OBCJEFGJLCP&))((::PBYTE)hIl2Cpp + JFPIMNACOEG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OBCJEFGJLCP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OBCJEFGJLCP&, ::System::Int32&))((::PBYTE)hIl2Cpp + JFPIMNACOEG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};

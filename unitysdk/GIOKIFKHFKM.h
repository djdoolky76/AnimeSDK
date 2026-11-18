#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JMIMDCBKHJH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GIOKIFKHFKM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GIOKIFKHFKM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A7EF0)
#define GIOKIFKHFKM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GIOKIFKHFKM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GIOKIFKHFKM_HOFGJCAMHCK_1_OFFSET UNITYSDK_OFFSET(0x17469480)
#define GIOKIFKHFKM_HOFGJCAMHCK_OFFSET UNITYSDK_OFFSET(0x174693E0)
#define GIOKIFKHFKM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A7F30)
#define GIOKIFKHFKM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A7EE0)
#define GIOKIFKHFKM___INIT_OFFSET UNITYSDK_OFFSET(0x7A7EC0)

inline static constexpr unsigned int GIOKIFKHFKM_TypeDefinitionIndex = 17188;

struct alignas(8) GIOKIFKHFKM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIOKIFKHFKM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GIOKIFKHFKM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIOKIFKHFKM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GIOKIFKHFKM HOFGJCAMHCK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GIOKIFKHFKM EIFONLCJOPG)
	{
		return ((::GIOKIFKHFKM(*)(::FlatBuffers::ByteBuffer*, ::GIOKIFKHFKM))((::PBYTE)hIl2Cpp + GIOKIFKHFKM_HOFGJCAMHCK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::GIOKIFKHFKM HOFGJCAMHCK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GIOKIFKHFKM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GIOKIFKHFKM_HOFGJCAMHCK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIOKIFKHFKM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JMIMDCBKHJH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JMIMDCBKHJH&))((::PBYTE)hIl2Cpp + GIOKIFKHFKM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::GIOKIFKHFKM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GIOKIFKHFKM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GIOKIFKHFKM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JMIMDCBKHJH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JMIMDCBKHJH&, ::System::Int32&))((::PBYTE)hIl2Cpp + GIOKIFKHFKM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};

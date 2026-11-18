#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PEKCJCJHOIN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IFJGKLJABNH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IFJGKLJABNH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76F390)
#define IFJGKLJABNH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IFJGKLJABNH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IFJGKLJABNH_JPHKBMGGFJD_1_OFFSET UNITYSDK_OFFSET(0x15A96660)
#define IFJGKLJABNH_JPHKBMGGFJD_OFFSET UNITYSDK_OFFSET(0x15A96600)
#define IFJGKLJABNH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x76F370)
#define IFJGKLJABNH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76F380)
#define IFJGKLJABNH___INIT_OFFSET UNITYSDK_OFFSET(0x76F350)

inline static constexpr unsigned int IFJGKLJABNH_TypeDefinitionIndex = 9397;

struct alignas(8) IFJGKLJABNH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJGKLJABNH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFJGKLJABNH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PEKCJCJHOIN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PEKCJCJHOIN&, ::System::Int32&))((::PBYTE)hIl2Cpp + IFJGKLJABNH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJGKLJABNH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJGKLJABNH_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PEKCJCJHOIN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PEKCJCJHOIN&))((::PBYTE)hIl2Cpp + IFJGKLJABNH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::IFJGKLJABNH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IFJGKLJABNH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFJGKLJABNH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IFJGKLJABNH JPHKBMGGFJD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IFJGKLJABNH EIFONLCJOPG)
	{
		return ((::IFJGKLJABNH(*)(::FlatBuffers::ByteBuffer*, ::IFJGKLJABNH))((::PBYTE)hIl2Cpp + IFJGKLJABNH_JPHKBMGGFJD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::IFJGKLJABNH JPHKBMGGFJD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IFJGKLJABNH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFJGKLJABNH_JPHKBMGGFJD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};

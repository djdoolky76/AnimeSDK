#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GFKDKBPPDJJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CDNHGKFCHDF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CDNHGKFCHDF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D0670)
#define CDNHGKFCHDF_EJDPLICFGKN_1_OFFSET UNITYSDK_OFFSET(0x18783BB0)
#define CDNHGKFCHDF_EJDPLICFGKN_OFFSET UNITYSDK_OFFSET(0x18783B10)
#define CDNHGKFCHDF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CDNHGKFCHDF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CDNHGKFCHDF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D06B0)
#define CDNHGKFCHDF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D0660)
#define CDNHGKFCHDF___INIT_OFFSET UNITYSDK_OFFSET(0x7D0640)

inline static constexpr unsigned int CDNHGKFCHDF_TypeDefinitionIndex = 9500;

struct alignas(8) CDNHGKFCHDF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNHGKFCHDF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDNHGKFCHDF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNHGKFCHDF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GFKDKBPPDJJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GFKDKBPPDJJ&))((::PBYTE)hIl2Cpp + CDNHGKFCHDF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::CDNHGKFCHDF EJDPLICFGKN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CDNHGKFCHDF EIFONLCJOPG)
	{
		return ((::CDNHGKFCHDF(*)(::FlatBuffers::ByteBuffer*, ::CDNHGKFCHDF))((::PBYTE)hIl2Cpp + CDNHGKFCHDF_EJDPLICFGKN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::CDNHGKFCHDF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CDNHGKFCHDF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDNHGKFCHDF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNHGKFCHDF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::CDNHGKFCHDF EJDPLICFGKN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CDNHGKFCHDF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDNHGKFCHDF_EJDPLICFGKN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GFKDKBPPDJJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GFKDKBPPDJJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + CDNHGKFCHDF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};

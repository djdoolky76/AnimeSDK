#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MDFCLCDOBLO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IBBPPDGCNIL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IBBPPDGCNIL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76F060)
#define IBBPPDGCNIL_CKMKJHOFCGI_1_OFFSET UNITYSDK_OFFSET(0x15A93410)
#define IBBPPDGCNIL_CKMKJHOFCGI_OFFSET UNITYSDK_OFFSET(0x15A933A0)
#define IBBPPDGCNIL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IBBPPDGCNIL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IBBPPDGCNIL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x76F0A0)
#define IBBPPDGCNIL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76F0B0)
#define IBBPPDGCNIL___INIT_OFFSET UNITYSDK_OFFSET(0x76F040)

inline static constexpr unsigned int IBBPPDGCNIL_TypeDefinitionIndex = 11914;

struct alignas(8) IBBPPDGCNIL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBBPPDGCNIL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBBPPDGCNIL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IBBPPDGCNIL CKMKJHOFCGI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IBBPPDGCNIL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBBPPDGCNIL_CKMKJHOFCGI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::IBBPPDGCNIL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IBBPPDGCNIL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBBPPDGCNIL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 AOOCHHNLFDB, ::System::Int32 KCKNFNJOIIB, ::MDFCLCDOBLO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::MDFCLCDOBLO&, ::System::Int32&))((::PBYTE)hIl2Cpp + IBBPPDGCNIL_LLGCOCLACNA_OFFSET))(this, AOOCHHNLFDB, KCKNFNJOIIB, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MDFCLCDOBLO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MDFCLCDOBLO&))((::PBYTE)hIl2Cpp + IBBPPDGCNIL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBBPPDGCNIL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::IBBPPDGCNIL CKMKJHOFCGI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IBBPPDGCNIL EIFONLCJOPG)
	{
		return ((::IBBPPDGCNIL(*)(::FlatBuffers::ByteBuffer*, ::IBBPPDGCNIL))((::PBYTE)hIl2Cpp + IBBPPDGCNIL_CKMKJHOFCGI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBBPPDGCNIL_PPOMNIFACOL_OFFSET))(this);
	}
};

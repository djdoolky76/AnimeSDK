#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DNFADCFHGCD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ANLMAHOJPCL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ANLMAHOJPCL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B1640)
#define ANLMAHOJPCL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ANLMAHOJPCL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ANLMAHOJPCL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B1680)
#define ANLMAHOJPCL_NNPMNIJOEFE_1_OFFSET UNITYSDK_OFFSET(0x17A737B0)
#define ANLMAHOJPCL_NNPMNIJOEFE_OFFSET UNITYSDK_OFFSET(0x17A73740)
#define ANLMAHOJPCL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B1690)
#define ANLMAHOJPCL___INIT_OFFSET UNITYSDK_OFFSET(0x7B1620)

inline static constexpr unsigned int ANLMAHOJPCL_TypeDefinitionIndex = 16913;

struct alignas(8) ANLMAHOJPCL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLMAHOJPCL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ANLMAHOJPCL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::ANLMAHOJPCL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ANLMAHOJPCL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ANLMAHOJPCL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::ANLMAHOJPCL NNPMNIJOEFE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ANLMAHOJPCL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ANLMAHOJPCL_NNPMNIJOEFE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::ANLMAHOJPCL NNPMNIJOEFE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ANLMAHOJPCL EIFONLCJOPG)
	{
		return ((::ANLMAHOJPCL(*)(::FlatBuffers::ByteBuffer*, ::ANLMAHOJPCL))((::PBYTE)hIl2Cpp + ANLMAHOJPCL_NNPMNIJOEFE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DNFADCFHGCD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DNFADCFHGCD&, ::System::Int32&))((::PBYTE)hIl2Cpp + ANLMAHOJPCL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLMAHOJPCL_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLMAHOJPCL_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DNFADCFHGCD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DNFADCFHGCD&))((::PBYTE)hIl2Cpp + ANLMAHOJPCL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GHHGADBINAG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ABECOJENIEA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ABECOJENIEA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C12B0)
#define ABECOJENIEA_CPHEFKKLEBJ_1_OFFSET UNITYSDK_OFFSET(0x17EE3E40)
#define ABECOJENIEA_CPHEFKKLEBJ_OFFSET UNITYSDK_OFFSET(0x17EE3D00)
#define ABECOJENIEA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ABECOJENIEA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ABECOJENIEA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C12F0)
#define ABECOJENIEA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C12A0)
#define ABECOJENIEA___INIT_OFFSET UNITYSDK_OFFSET(0x7C1280)

inline static constexpr unsigned int ABECOJENIEA_TypeDefinitionIndex = 11509;

struct alignas(8) ABECOJENIEA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABECOJENIEA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ABECOJENIEA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABECOJENIEA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::ABECOJENIEA CPHEFKKLEBJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ABECOJENIEA EIFONLCJOPG)
	{
		return ((::ABECOJENIEA(*)(::FlatBuffers::ByteBuffer*, ::ABECOJENIEA))((::PBYTE)hIl2Cpp + ABECOJENIEA_CPHEFKKLEBJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GHHGADBINAG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GHHGADBINAG&))((::PBYTE)hIl2Cpp + ABECOJENIEA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::ABECOJENIEA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ABECOJENIEA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ABECOJENIEA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::ABECOJENIEA CPHEFKKLEBJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ABECOJENIEA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ABECOJENIEA_CPHEFKKLEBJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABECOJENIEA_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GHHGADBINAG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GHHGADBINAG&, ::System::Int32&))((::PBYTE)hIl2Cpp + ABECOJENIEA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};

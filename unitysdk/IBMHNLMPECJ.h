#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PPHMKJJNOJE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IBMHNLMPECJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IBMHNLMPECJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81BC40)
#define IBMHNLMPECJ_DCJPNILMCOO_1_OFFSET UNITYSDK_OFFSET(0x1BAE5230)
#define IBMHNLMPECJ_DCJPNILMCOO_OFFSET UNITYSDK_OFFSET(0x1BAE51C0)
#define IBMHNLMPECJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IBMHNLMPECJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IBMHNLMPECJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81BC30)
#define IBMHNLMPECJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81BC80)
#define IBMHNLMPECJ___INIT_OFFSET UNITYSDK_OFFSET(0x81BC10)

inline static constexpr unsigned int IBMHNLMPECJ_TypeDefinitionIndex = 15345;

struct alignas(8) IBMHNLMPECJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMHNLMPECJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBMHNLMPECJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IBMHNLMPECJ DCJPNILMCOO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IBMHNLMPECJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBMHNLMPECJ_DCJPNILMCOO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::IBMHNLMPECJ DCJPNILMCOO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IBMHNLMPECJ EIFONLCJOPG)
	{
		return ((::IBMHNLMPECJ(*)(::FlatBuffers::ByteBuffer*, ::IBMHNLMPECJ))((::PBYTE)hIl2Cpp + IBMHNLMPECJ_DCJPNILMCOO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PPHMKJJNOJE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PPHMKJJNOJE&, ::System::Int32&))((::PBYTE)hIl2Cpp + IBMHNLMPECJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::IBMHNLMPECJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IBMHNLMPECJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBMHNLMPECJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PPHMKJJNOJE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PPHMKJJNOJE&))((::PBYTE)hIl2Cpp + IBMHNLMPECJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMHNLMPECJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMHNLMPECJ_PPOMNIFACOL_OFFSET))(this);
	}
};

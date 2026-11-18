#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EILGHEJKGPA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LJHAHNABLKF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LJHAHNABLKF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EF320)
#define LJHAHNABLKF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LJHAHNABLKF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LJHAHNABLKF_IJABHIMCMNJ_1_OFFSET UNITYSDK_OFFSET(0x19DA9830)
#define LJHAHNABLKF_IJABHIMCMNJ_OFFSET UNITYSDK_OFFSET(0x19DA9790)
#define LJHAHNABLKF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EF300)
#define LJHAHNABLKF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EF310)
#define LJHAHNABLKF___INIT_OFFSET UNITYSDK_OFFSET(0x7EF2E0)

inline static constexpr unsigned int LJHAHNABLKF_TypeDefinitionIndex = 14182;

struct alignas(8) LJHAHNABLKF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHAHNABLKF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJHAHNABLKF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHAHNABLKF_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EILGHEJKGPA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EILGHEJKGPA&))((::PBYTE)hIl2Cpp + LJHAHNABLKF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EILGHEJKGPA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EILGHEJKGPA&, ::System::Int32&))((::PBYTE)hIl2Cpp + LJHAHNABLKF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::LJHAHNABLKF IJABHIMCMNJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LJHAHNABLKF EIFONLCJOPG)
	{
		return ((::LJHAHNABLKF(*)(::FlatBuffers::ByteBuffer*, ::LJHAHNABLKF))((::PBYTE)hIl2Cpp + LJHAHNABLKF_IJABHIMCMNJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHAHNABLKF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LJHAHNABLKF IJABHIMCMNJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LJHAHNABLKF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJHAHNABLKF_IJABHIMCMNJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::LJHAHNABLKF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LJHAHNABLKF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJHAHNABLKF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};

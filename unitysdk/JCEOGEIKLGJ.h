#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OCDAMJPJEGH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JCEOGEIKLGJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JCEOGEIKLGJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x77AB80)
#define JCEOGEIKLGJ_CFMEAPPIHPN_1_OFFSET UNITYSDK_OFFSET(0x16114E60)
#define JCEOGEIKLGJ_CFMEAPPIHPN_OFFSET UNITYSDK_OFFSET(0x16114D20)
#define JCEOGEIKLGJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JCEOGEIKLGJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JCEOGEIKLGJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x77ABC0)
#define JCEOGEIKLGJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x77AB70)
#define JCEOGEIKLGJ___INIT_OFFSET UNITYSDK_OFFSET(0x77AB50)

inline static constexpr unsigned int JCEOGEIKLGJ_TypeDefinitionIndex = 11679;

struct alignas(8) JCEOGEIKLGJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEOGEIKLGJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCEOGEIKLGJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JCEOGEIKLGJ CFMEAPPIHPN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JCEOGEIKLGJ EIFONLCJOPG)
	{
		return ((::JCEOGEIKLGJ(*)(::FlatBuffers::ByteBuffer*, ::JCEOGEIKLGJ))((::PBYTE)hIl2Cpp + JCEOGEIKLGJ_CFMEAPPIHPN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OCDAMJPJEGH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OCDAMJPJEGH&))((::PBYTE)hIl2Cpp + JCEOGEIKLGJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::JCEOGEIKLGJ CFMEAPPIHPN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JCEOGEIKLGJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCEOGEIKLGJ_CFMEAPPIHPN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEOGEIKLGJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEOGEIKLGJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::JCEOGEIKLGJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JCEOGEIKLGJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCEOGEIKLGJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OCDAMJPJEGH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OCDAMJPJEGH&, ::System::Int32&))((::PBYTE)hIl2Cpp + JCEOGEIKLGJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};

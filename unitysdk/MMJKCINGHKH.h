#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DCKMBDMCHHF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MMJKCINGHKH_BDMHIPAHCHM_1_OFFSET UNITYSDK_OFFSET(0x1B31BAA0)
#define MMJKCINGHKH_BDMHIPAHCHM_OFFSET UNITYSDK_OFFSET(0x1B31BA30)
#define MMJKCINGHKH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MMJKCINGHKH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80BD00)
#define MMJKCINGHKH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MMJKCINGHKH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MMJKCINGHKH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80BD40)
#define MMJKCINGHKH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80BD50)
#define MMJKCINGHKH___INIT_OFFSET UNITYSDK_OFFSET(0x80BCE0)

inline static constexpr unsigned int MMJKCINGHKH_TypeDefinitionIndex = 12378;

struct alignas(8) MMJKCINGHKH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJKCINGHKH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMJKCINGHKH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJKCINGHKH_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DCKMBDMCHHF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DCKMBDMCHHF&))((::PBYTE)hIl2Cpp + MMJKCINGHKH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::MMJKCINGHKH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MMJKCINGHKH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMJKCINGHKH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MMJKCINGHKH BDMHIPAHCHM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MMJKCINGHKH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMJKCINGHKH_BDMHIPAHCHM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DCKMBDMCHHF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DCKMBDMCHHF&, ::System::Int32&))((::PBYTE)hIl2Cpp + MMJKCINGHKH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJKCINGHKH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MMJKCINGHKH BDMHIPAHCHM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MMJKCINGHKH EIFONLCJOPG)
	{
		return ((::MMJKCINGHKH(*)(::FlatBuffers::ByteBuffer*, ::MMJKCINGHKH))((::PBYTE)hIl2Cpp + MMJKCINGHKH_BDMHIPAHCHM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};

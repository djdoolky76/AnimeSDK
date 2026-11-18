#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JMAEGMENCOF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HCFJICFNDDJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HCFJICFNDDJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x779B00)
#define HCFJICFNDDJ_FLBIIOCMLMI_1_OFFSET UNITYSDK_OFFSET(0x160EFA70)
#define HCFJICFNDDJ_FLBIIOCMLMI_OFFSET UNITYSDK_OFFSET(0x160EFA00)
#define HCFJICFNDDJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HCFJICFNDDJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HCFJICFNDDJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x779B50)
#define HCFJICFNDDJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x779B40)
#define HCFJICFNDDJ___INIT_OFFSET UNITYSDK_OFFSET(0x779AE0)

inline static constexpr unsigned int HCFJICFNDDJ_TypeDefinitionIndex = 17335;

struct alignas(8) HCFJICFNDDJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFJICFNDDJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCFJICFNDDJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFJICFNDDJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HCFJICFNDDJ FLBIIOCMLMI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HCFJICFNDDJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCFJICFNDDJ_FLBIIOCMLMI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::HCFJICFNDDJ FLBIIOCMLMI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HCFJICFNDDJ EIFONLCJOPG)
	{
		return ((::HCFJICFNDDJ(*)(::FlatBuffers::ByteBuffer*, ::HCFJICFNDDJ))((::PBYTE)hIl2Cpp + HCFJICFNDDJ_FLBIIOCMLMI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JMAEGMENCOF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JMAEGMENCOF&))((::PBYTE)hIl2Cpp + HCFJICFNDDJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::HCFJICFNDDJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HCFJICFNDDJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCFJICFNDDJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFJICFNDDJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JMAEGMENCOF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JMAEGMENCOF&, ::System::Int32&))((::PBYTE)hIl2Cpp + HCFJICFNDDJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};

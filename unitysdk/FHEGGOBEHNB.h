#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BAJHFOPPOKM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FHEGGOBEHNB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FHEGGOBEHNB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80D150)
#define FHEGGOBEHNB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FHEGGOBEHNB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FHEGGOBEHNB_JLCHGLLLGHF_1_OFFSET UNITYSDK_OFFSET(0x1B4C31F0)
#define FHEGGOBEHNB_JLCHGLLLGHF_OFFSET UNITYSDK_OFFSET(0x1B4C3190)
#define FHEGGOBEHNB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80D140)
#define FHEGGOBEHNB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80D190)
#define FHEGGOBEHNB___INIT_OFFSET UNITYSDK_OFFSET(0x80D120)

inline static constexpr unsigned int FHEGGOBEHNB_TypeDefinitionIndex = 13418;

struct alignas(8) FHEGGOBEHNB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHEGGOBEHNB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHEGGOBEHNB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BAJHFOPPOKM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BAJHFOPPOKM&, ::System::Int32&))((::PBYTE)hIl2Cpp + FHEGGOBEHNB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHEGGOBEHNB_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BAJHFOPPOKM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BAJHFOPPOKM&))((::PBYTE)hIl2Cpp + FHEGGOBEHNB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::FHEGGOBEHNB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FHEGGOBEHNB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHEGGOBEHNB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FHEGGOBEHNB JLCHGLLLGHF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FHEGGOBEHNB EIFONLCJOPG)
	{
		return ((::FHEGGOBEHNB(*)(::FlatBuffers::ByteBuffer*, ::FHEGGOBEHNB))((::PBYTE)hIl2Cpp + FHEGGOBEHNB_JLCHGLLLGHF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHEGGOBEHNB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::FHEGGOBEHNB JLCHGLLLGHF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FHEGGOBEHNB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHEGGOBEHNB_JLCHGLLLGHF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};

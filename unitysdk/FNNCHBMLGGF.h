#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IOCOPPDJNJH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FNNCHBMLGGF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FNNCHBMLGGF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80D570)
#define FNNCHBMLGGF_FLDMGCAAGND_1_OFFSET UNITYSDK_OFFSET(0x1B4CC2D0)
#define FNNCHBMLGGF_FLDMGCAAGND_OFFSET UNITYSDK_OFFSET(0x1B4CC270)
#define FNNCHBMLGGF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FNNCHBMLGGF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FNNCHBMLGGF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80D5C0)
#define FNNCHBMLGGF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80D5B0)
#define FNNCHBMLGGF___INIT_OFFSET UNITYSDK_OFFSET(0x80D550)

inline static constexpr unsigned int FNNCHBMLGGF_TypeDefinitionIndex = 14771;

struct alignas(8) FNNCHBMLGGF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNCHBMLGGF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNNCHBMLGGF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IOCOPPDJNJH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IOCOPPDJNJH&))((::PBYTE)hIl2Cpp + FNNCHBMLGGF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::FNNCHBMLGGF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FNNCHBMLGGF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNNCHBMLGGF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNCHBMLGGF_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNCHBMLGGF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IOCOPPDJNJH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IOCOPPDJNJH&, ::System::Int32&))((::PBYTE)hIl2Cpp + FNNCHBMLGGF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::FNNCHBMLGGF FLDMGCAAGND(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FNNCHBMLGGF EIFONLCJOPG)
	{
		return ((::FNNCHBMLGGF(*)(::FlatBuffers::ByteBuffer*, ::FNNCHBMLGGF))((::PBYTE)hIl2Cpp + FNNCHBMLGGF_FLDMGCAAGND_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::FNNCHBMLGGF FLDMGCAAGND_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FNNCHBMLGGF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNNCHBMLGGF_FLDMGCAAGND_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};

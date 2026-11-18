#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FBENHJOABPO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FKKKBIABAIN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FKKKBIABAIN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x755AD0)
#define FKKKBIABAIN_EGLBFOJDMCE_1_OFFSET UNITYSDK_OFFSET(0x152C4280)
#define FKKKBIABAIN_EGLBFOJDMCE_OFFSET UNITYSDK_OFFSET(0x152C4210)
#define FKKKBIABAIN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FKKKBIABAIN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FKKKBIABAIN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x755AC0)
#define FKKKBIABAIN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x755B10)
#define FKKKBIABAIN___INIT_OFFSET UNITYSDK_OFFSET(0x755AA0)

inline static constexpr unsigned int FKKKBIABAIN_TypeDefinitionIndex = 9581;

struct alignas(8) FKKKBIABAIN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKKKBIABAIN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FKKKBIABAIN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FBENHJOABPO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FBENHJOABPO&, ::System::Int32&))((::PBYTE)hIl2Cpp + FKKKBIABAIN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKKKBIABAIN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::FKKKBIABAIN EGLBFOJDMCE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FKKKBIABAIN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FKKKBIABAIN_EGLBFOJDMCE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::FKKKBIABAIN EGLBFOJDMCE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FKKKBIABAIN EIFONLCJOPG)
	{
		return ((::FKKKBIABAIN(*)(::FlatBuffers::ByteBuffer*, ::FKKKBIABAIN))((::PBYTE)hIl2Cpp + FKKKBIABAIN_EGLBFOJDMCE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::FKKKBIABAIN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FKKKBIABAIN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FKKKBIABAIN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FBENHJOABPO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FBENHJOABPO&))((::PBYTE)hIl2Cpp + FKKKBIABAIN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKKKBIABAIN_PPOMNIFACOL_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DADOLLLLKKM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CNBNIHHHANM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CNBNIHHHANM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F1F30)
#define CNBNIHHHANM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CNBNIHHHANM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CNBNIHHHANM_KHJICEBJNEK_1_OFFSET UNITYSDK_OFFSET(0x19F2FD60)
#define CNBNIHHHANM_KHJICEBJNEK_OFFSET UNITYSDK_OFFSET(0x19F2FC20)
#define CNBNIHHHANM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F1F20)
#define CNBNIHHHANM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F1F10)
#define CNBNIHHHANM___INIT_OFFSET UNITYSDK_OFFSET(0x7F1EF0)

inline static constexpr unsigned int CNBNIHHHANM_TypeDefinitionIndex = 16329;

struct alignas(8) CNBNIHHHANM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBNIHHHANM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CNBNIHHHANM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::CNBNIHHHANM KHJICEBJNEK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CNBNIHHHANM EIFONLCJOPG)
	{
		return ((::CNBNIHHHANM(*)(::FlatBuffers::ByteBuffer*, ::CNBNIHHHANM))((::PBYTE)hIl2Cpp + CNBNIHHHANM_KHJICEBJNEK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DADOLLLLKKM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DADOLLLLKKM&))((::PBYTE)hIl2Cpp + CNBNIHHHANM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::CNBNIHHHANM KHJICEBJNEK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CNBNIHHHANM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CNBNIHHHANM_KHJICEBJNEK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBNIHHHANM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DADOLLLLKKM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DADOLLLLKKM&, ::System::Int32&))((::PBYTE)hIl2Cpp + CNBNIHHHANM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::CNBNIHHHANM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CNBNIHHHANM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CNBNIHHHANM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBNIHHHANM_GHKKNCCLPAN_OFFSET))(this);
	}
};

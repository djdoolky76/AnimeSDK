#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GADJODHJBBO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KHBKIEKKPIJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KHBKIEKKPIJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7589E0)
#define KHBKIEKKPIJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KHBKIEKKPIJ_GGNDOBNNFHB_1_OFFSET UNITYSDK_OFFSET(0x15301920)
#define KHBKIEKKPIJ_GGNDOBNNFHB_OFFSET UNITYSDK_OFFSET(0x153018B0)
#define KHBKIEKKPIJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KHBKIEKKPIJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7589D0)
#define KHBKIEKKPIJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x758A20)
#define KHBKIEKKPIJ___INIT_OFFSET UNITYSDK_OFFSET(0x7589B0)

inline static constexpr unsigned int KHBKIEKKPIJ_TypeDefinitionIndex = 16004;

struct alignas(8) KHBKIEKKPIJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHBKIEKKPIJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KHBKIEKKPIJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHBKIEKKPIJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GADJODHJBBO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GADJODHJBBO&, ::System::Int32&))((::PBYTE)hIl2Cpp + KHBKIEKKPIJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GADJODHJBBO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GADJODHJBBO&))((::PBYTE)hIl2Cpp + KHBKIEKKPIJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::KHBKIEKKPIJ GGNDOBNNFHB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KHBKIEKKPIJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KHBKIEKKPIJ_GGNDOBNNFHB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::KHBKIEKKPIJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KHBKIEKKPIJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KHBKIEKKPIJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KHBKIEKKPIJ GGNDOBNNFHB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KHBKIEKKPIJ EIFONLCJOPG)
	{
		return ((::KHBKIEKKPIJ(*)(::FlatBuffers::ByteBuffer*, ::KHBKIEKKPIJ))((::PBYTE)hIl2Cpp + KHBKIEKKPIJ_GGNDOBNNFHB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHBKIEKKPIJ_PPOMNIFACOL_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JEFGAHIGDBD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HDFHMBPCIEL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HDFHMBPCIEL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DEC70)
#define HDFHMBPCIEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HDFHMBPCIEL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HDFHMBPCIEL_KAOLGMHLMPG_1_OFFSET UNITYSDK_OFFSET(0x1933E7F0)
#define HDFHMBPCIEL_KAOLGMHLMPG_OFFSET UNITYSDK_OFFSET(0x1933E780)
#define HDFHMBPCIEL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DECC0)
#define HDFHMBPCIEL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DECB0)
#define HDFHMBPCIEL___INIT_OFFSET UNITYSDK_OFFSET(0x7DEC50)

inline static constexpr unsigned int HDFHMBPCIEL_TypeDefinitionIndex = 16753;

struct alignas(8) HDFHMBPCIEL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDFHMBPCIEL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HDFHMBPCIEL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JEFGAHIGDBD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JEFGAHIGDBD&))((::PBYTE)hIl2Cpp + HDFHMBPCIEL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::HDFHMBPCIEL KAOLGMHLMPG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HDFHMBPCIEL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HDFHMBPCIEL_KAOLGMHLMPG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::HDFHMBPCIEL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HDFHMBPCIEL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HDFHMBPCIEL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDFHMBPCIEL_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDFHMBPCIEL_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JEFGAHIGDBD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JEFGAHIGDBD&, ::System::Int32&))((::PBYTE)hIl2Cpp + HDFHMBPCIEL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::HDFHMBPCIEL KAOLGMHLMPG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HDFHMBPCIEL EIFONLCJOPG)
	{
		return ((::HDFHMBPCIEL(*)(::FlatBuffers::ByteBuffer*, ::HDFHMBPCIEL))((::PBYTE)hIl2Cpp + HDFHMBPCIEL_KAOLGMHLMPG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};

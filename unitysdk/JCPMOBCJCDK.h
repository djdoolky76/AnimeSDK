#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EBCPFDNNLBC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JCPMOBCJCDK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JCPMOBCJCDK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DF6C0)
#define JCPMOBCJCDK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JCPMOBCJCDK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JCPMOBCJCDK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DF700)
#define JCPMOBCJCDK_ODKKDIPBNGF_1_OFFSET UNITYSDK_OFFSET(0x193580E0)
#define JCPMOBCJCDK_ODKKDIPBNGF_OFFSET UNITYSDK_OFFSET(0x19357E40)
#define JCPMOBCJCDK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DF6B0)
#define JCPMOBCJCDK___INIT_OFFSET UNITYSDK_OFFSET(0x7DF690)

inline static constexpr unsigned int JCPMOBCJCDK_TypeDefinitionIndex = 15640;

struct alignas(8) JCPMOBCJCDK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCPMOBCJCDK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCPMOBCJCDK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCPMOBCJCDK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::JCPMOBCJCDK ODKKDIPBNGF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JCPMOBCJCDK EIFONLCJOPG)
	{
		return ((::JCPMOBCJCDK(*)(::FlatBuffers::ByteBuffer*, ::JCPMOBCJCDK))((::PBYTE)hIl2Cpp + JCPMOBCJCDK_ODKKDIPBNGF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCPMOBCJCDK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::JCPMOBCJCDK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JCPMOBCJCDK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCPMOBCJCDK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EBCPFDNNLBC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EBCPFDNNLBC&, ::System::Int32&))((::PBYTE)hIl2Cpp + JCPMOBCJCDK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EBCPFDNNLBC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EBCPFDNNLBC&))((::PBYTE)hIl2Cpp + JCPMOBCJCDK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::JCPMOBCJCDK ODKKDIPBNGF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JCPMOBCJCDK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCPMOBCJCDK_ODKKDIPBNGF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CGBMAGMKCLD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ILBDOONOKJF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ILBDOONOKJF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7BEDE0)
#define ILBDOONOKJF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ILBDOONOKJF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ILBDOONOKJF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7BEE20)
#define ILBDOONOKJF_OHEMHNMCDHI_1_OFFSET UNITYSDK_OFFSET(0x17C1ED80)
#define ILBDOONOKJF_OHEMHNMCDHI_OFFSET UNITYSDK_OFFSET(0x17C1ED20)
#define ILBDOONOKJF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7BEDD0)
#define ILBDOONOKJF___INIT_OFFSET UNITYSDK_OFFSET(0x7BEDB0)

inline static constexpr unsigned int ILBDOONOKJF_TypeDefinitionIndex = 12017;

struct alignas(8) ILBDOONOKJF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILBDOONOKJF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ILBDOONOKJF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILBDOONOKJF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILBDOONOKJF_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CGBMAGMKCLD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CGBMAGMKCLD&))((::PBYTE)hIl2Cpp + ILBDOONOKJF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::ILBDOONOKJF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ILBDOONOKJF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ILBDOONOKJF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CGBMAGMKCLD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CGBMAGMKCLD&, ::System::Int32&))((::PBYTE)hIl2Cpp + ILBDOONOKJF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::ILBDOONOKJF OHEMHNMCDHI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ILBDOONOKJF EIFONLCJOPG)
	{
		return ((::ILBDOONOKJF(*)(::FlatBuffers::ByteBuffer*, ::ILBDOONOKJF))((::PBYTE)hIl2Cpp + ILBDOONOKJF_OHEMHNMCDHI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::ILBDOONOKJF OHEMHNMCDHI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ILBDOONOKJF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ILBDOONOKJF_OHEMHNMCDHI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};

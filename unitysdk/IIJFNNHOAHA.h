#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JHBLEOGMEOJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IIJFNNHOAHA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IIJFNNHOAHA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A8700)
#define IIJFNNHOAHA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IIJFNNHOAHA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IIJFNNHOAHA_JCBMJKHNEKK_1_OFFSET UNITYSDK_OFFSET(0x17484070)
#define IIJFNNHOAHA_JCBMJKHNEKK_OFFSET UNITYSDK_OFFSET(0x17484000)
#define IIJFNNHOAHA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A8740)
#define IIJFNNHOAHA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A86F0)
#define IIJFNNHOAHA___INIT_OFFSET UNITYSDK_OFFSET(0x7A86D0)

inline static constexpr unsigned int IIJFNNHOAHA_TypeDefinitionIndex = 17479;

struct alignas(8) IIJFNNHOAHA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIJFNNHOAHA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IIJFNNHOAHA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIJFNNHOAHA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JHBLEOGMEOJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JHBLEOGMEOJ&))((::PBYTE)hIl2Cpp + IIJFNNHOAHA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::IIJFNNHOAHA JCBMJKHNEKK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IIJFNNHOAHA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IIJFNNHOAHA_JCBMJKHNEKK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::IIJFNNHOAHA JCBMJKHNEKK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IIJFNNHOAHA EIFONLCJOPG)
	{
		return ((::IIJFNNHOAHA(*)(::FlatBuffers::ByteBuffer*, ::IIJFNNHOAHA))((::PBYTE)hIl2Cpp + IIJFNNHOAHA_JCBMJKHNEKK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIJFNNHOAHA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::IIJFNNHOAHA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IIJFNNHOAHA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IIJFNNHOAHA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JHBLEOGMEOJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JHBLEOGMEOJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + IIJFNNHOAHA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};

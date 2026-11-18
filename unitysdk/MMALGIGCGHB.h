#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AGJDHCBPKLK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MMALGIGCGHB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MMALGIGCGHB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81F160)
#define MMALGIGCGHB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MMALGIGCGHB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MMALGIGCGHB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81F1A0)
#define MMALGIGCGHB_ODDLFIMPJNK_1_OFFSET UNITYSDK_OFFSET(0x1C08C350)
#define MMALGIGCGHB_ODDLFIMPJNK_OFFSET UNITYSDK_OFFSET(0x1C08C2E0)
#define MMALGIGCGHB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81F150)
#define MMALGIGCGHB___INIT_OFFSET UNITYSDK_OFFSET(0x81F130)

inline static constexpr unsigned int MMALGIGCGHB_TypeDefinitionIndex = 11137;

struct alignas(8) MMALGIGCGHB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMALGIGCGHB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMALGIGCGHB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMALGIGCGHB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::MMALGIGCGHB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MMALGIGCGHB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMALGIGCGHB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MMALGIGCGHB ODDLFIMPJNK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MMALGIGCGHB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMALGIGCGHB_ODDLFIMPJNK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMALGIGCGHB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MMALGIGCGHB ODDLFIMPJNK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MMALGIGCGHB EIFONLCJOPG)
	{
		return ((::MMALGIGCGHB(*)(::FlatBuffers::ByteBuffer*, ::MMALGIGCGHB))((::PBYTE)hIl2Cpp + MMALGIGCGHB_ODDLFIMPJNK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AGJDHCBPKLK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AGJDHCBPKLK&))((::PBYTE)hIl2Cpp + MMALGIGCGHB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AGJDHCBPKLK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AGJDHCBPKLK&, ::System::Int32&))((::PBYTE)hIl2Cpp + MMALGIGCGHB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};

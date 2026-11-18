#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EPAPDMKDCLJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NFMHLBMIHHK_AJCEMEJJMCE_1_OFFSET UNITYSDK_OFFSET(0x1C0938F0)
#define NFMHLBMIHHK_AJCEMEJJMCE_OFFSET UNITYSDK_OFFSET(0x1C093750)
#define NFMHLBMIHHK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NFMHLBMIHHK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81F2A0)
#define NFMHLBMIHHK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NFMHLBMIHHK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NFMHLBMIHHK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81F2F0)
#define NFMHLBMIHHK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81F2E0)
#define NFMHLBMIHHK___INIT_OFFSET UNITYSDK_OFFSET(0x81F280)

inline static constexpr unsigned int NFMHLBMIHHK_TypeDefinitionIndex = 11677;

struct alignas(8) NFMHLBMIHHK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMHLBMIHHK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NFMHLBMIHHK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NFMHLBMIHHK AJCEMEJJMCE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NFMHLBMIHHK EIFONLCJOPG)
	{
		return ((::NFMHLBMIHHK(*)(::FlatBuffers::ByteBuffer*, ::NFMHLBMIHHK))((::PBYTE)hIl2Cpp + NFMHLBMIHHK_AJCEMEJJMCE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EPAPDMKDCLJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EPAPDMKDCLJ&))((::PBYTE)hIl2Cpp + NFMHLBMIHHK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::NFMHLBMIHHK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NFMHLBMIHHK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NFMHLBMIHHK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMHLBMIHHK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::NFMHLBMIHHK AJCEMEJJMCE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NFMHLBMIHHK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NFMHLBMIHHK_AJCEMEJJMCE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMHLBMIHHK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EPAPDMKDCLJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EPAPDMKDCLJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + NFMHLBMIHHK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OANHGFBJNMD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DJIPHDNEAHM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DJIPHDNEAHM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x807810)
#define DJIPHDNEAHM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DJIPHDNEAHM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DJIPHDNEAHM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8077F0)
#define DJIPHDNEAHM_PLGDGGAKPEG_1_OFFSET UNITYSDK_OFFSET(0x1ADC6FF0)
#define DJIPHDNEAHM_PLGDGGAKPEG_OFFSET UNITYSDK_OFFSET(0x1ADC6F80)
#define DJIPHDNEAHM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x807800)
#define DJIPHDNEAHM___INIT_OFFSET UNITYSDK_OFFSET(0x8077D0)

inline static constexpr unsigned int DJIPHDNEAHM_TypeDefinitionIndex = 16690;

struct alignas(8) DJIPHDNEAHM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIPHDNEAHM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJIPHDNEAHM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIPHDNEAHM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DJIPHDNEAHM PLGDGGAKPEG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DJIPHDNEAHM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJIPHDNEAHM_PLGDGGAKPEG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OANHGFBJNMD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OANHGFBJNMD&))((::PBYTE)hIl2Cpp + DJIPHDNEAHM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::DJIPHDNEAHM PLGDGGAKPEG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DJIPHDNEAHM EIFONLCJOPG)
	{
		return ((::DJIPHDNEAHM(*)(::FlatBuffers::ByteBuffer*, ::DJIPHDNEAHM))((::PBYTE)hIl2Cpp + DJIPHDNEAHM_PLGDGGAKPEG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OANHGFBJNMD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OANHGFBJNMD&, ::System::Int32&))((::PBYTE)hIl2Cpp + DJIPHDNEAHM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIPHDNEAHM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::DJIPHDNEAHM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DJIPHDNEAHM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJIPHDNEAHM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};

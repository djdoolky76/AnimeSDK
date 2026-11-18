#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JCMHHGHMBFG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ABLECLLBDMI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ABLECLLBDMI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F46F0)
#define ABLECLLBDMI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ABLECLLBDMI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ABLECLLBDMI_LJBAMPIJINF_1_OFFSET UNITYSDK_OFFSET(0x1A15A7C0)
#define ABLECLLBDMI_LJBAMPIJINF_OFFSET UNITYSDK_OFFSET(0x1A15A720)
#define ABLECLLBDMI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F46E0)
#define ABLECLLBDMI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F4730)
#define ABLECLLBDMI___INIT_OFFSET UNITYSDK_OFFSET(0x7F46C0)

inline static constexpr unsigned int ABLECLLBDMI_TypeDefinitionIndex = 9610;

struct alignas(8) ABLECLLBDMI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABLECLLBDMI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ABLECLLBDMI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JCMHHGHMBFG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JCMHHGHMBFG&))((::PBYTE)hIl2Cpp + ABLECLLBDMI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::ABLECLLBDMI LJBAMPIJINF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ABLECLLBDMI EIFONLCJOPG)
	{
		return ((::ABLECLLBDMI(*)(::FlatBuffers::ByteBuffer*, ::ABLECLLBDMI))((::PBYTE)hIl2Cpp + ABLECLLBDMI_LJBAMPIJINF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::ABLECLLBDMI LJBAMPIJINF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ABLECLLBDMI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ABLECLLBDMI_LJBAMPIJINF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JCMHHGHMBFG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JCMHHGHMBFG&, ::System::Int32&))((::PBYTE)hIl2Cpp + ABLECLLBDMI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABLECLLBDMI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::ABLECLLBDMI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ABLECLLBDMI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ABLECLLBDMI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABLECLLBDMI_PPOMNIFACOL_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FHGAOMHILGE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FHGAOMHILGE_GADACDFJCBJ_OFFSET UNITYSDK_OFFSET(0x761240)
#define FHGAOMHILGE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FHGAOMHILGE_GOALIHGGJKP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FHGAOMHILGE_HKOAIDCDOJF_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define FHGAOMHILGE_IDLKPHKEJIA_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define FHGAOMHILGE_KCABOHHBGBC_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define FHGAOMHILGE_KGJIJHDKNBA_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define FHGAOMHILGE_MILHMBIPBDF_OFFSET UNITYSDK_OFFSET(0x757290)
#define FHGAOMHILGE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1ADE35B0)
#define FHGAOMHILGE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FHGAOMHILGE_TypeDefinitionIndex = 17348;

struct alignas(4) FHGAOMHILGE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHGAOMHILGE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHGAOMHILGE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GOALIHGGJKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHGAOMHILGE_GOALIHGGJKP_OFFSET))(this);
	}

	::System::Int32 GADACDFJCBJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHGAOMHILGE_GADACDFJCBJ_OFFSET))(this);
	}

	::System::Boolean IDLKPHKEJIA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FHGAOMHILGE_IDLKPHKEJIA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::FHGAOMHILGE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FHGAOMHILGE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHGAOMHILGE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 HKOAIDCDOJF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHGAOMHILGE_HKOAIDCDOJF_OFFSET))(this);
	}

	::System::String* MILHMBIPBDF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHGAOMHILGE_MILHMBIPBDF_OFFSET))(this);
	}

	/*
	static ::FHGAOMHILGE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FHGAOMHILGE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FHGAOMHILGE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean KCABOHHBGBC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FHGAOMHILGE_KCABOHHBGBC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* KGJIJHDKNBA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHGAOMHILGE_KGJIJHDKNBA_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FPLFHEENEBL_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FPLFHEENEBL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FPLFHEENEBL_BIFFDJHNBCL_OFFSET UNITYSDK_OFFSET(0x7562E0)
#define FPLFHEENEBL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FPLFHEENEBL_GOFGEHAELBL_OFFSET UNITYSDK_OFFSET(0x754F10)
#define FPLFHEENEBL_ICOMMHALIOG_OFFSET UNITYSDK_OFFSET(0x756B10)
#define FPLFHEENEBL_JENMOKHKDIC_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define FPLFHEENEBL_JLGPHINMFOI_OFFSET UNITYSDK_OFFSET(0x756720)
#define FPLFHEENEBL_MFCBLIFOINE_OFFSET UNITYSDK_OFFSET(0x756D50)
#define FPLFHEENEBL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B10E020)
#define FPLFHEENEBL_ONPFNLJBIAE_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define FPLFHEENEBL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FPLFHEENEBL_TypeDefinitionIndex = 13242;

struct alignas(4) FPLFHEENEBL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLFHEENEBL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FPLFHEENEBL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FPLFHEENEBL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FPLFHEENEBL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FPLFHEENEBL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* JENMOKHKDIC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLFHEENEBL_JENMOKHKDIC_OFFSET))(this);
	}

	/*
	::FPLFHEENEBL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FPLFHEENEBL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FPLFHEENEBL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 JLGPHINMFOI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLFHEENEBL_JLGPHINMFOI_OFFSET))(this);
	}

	::System::Boolean BIFFDJHNBCL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FPLFHEENEBL_BIFFDJHNBCL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLFHEENEBL_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* GOFGEHAELBL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLFHEENEBL_GOFGEHAELBL_OFFSET))(this);
	}

	::System::String* ICOMMHALIOG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLFHEENEBL_ICOMMHALIOG_OFFSET))(this);
	}

	::System::String* ONPFNLJBIAE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLFHEENEBL_ONPFNLJBIAE_OFFSET))(this);
	}

	::System::String* MFCBLIFOINE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLFHEENEBL_MFCBLIFOINE_OFFSET))(this);
	}
};

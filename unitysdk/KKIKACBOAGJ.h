#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KKIKACBOAGJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KKIKACBOAGJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KKIKACBOAGJ_BIFFDJHNBCL_OFFSET UNITYSDK_OFFSET(0x7562E0)
#define KKIKACBOAGJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KKIKACBOAGJ_GOFGEHAELBL_OFFSET UNITYSDK_OFFSET(0x754F10)
#define KKIKACBOAGJ_ICOMMHALIOG_OFFSET UNITYSDK_OFFSET(0x756B10)
#define KKIKACBOAGJ_JENMOKHKDIC_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define KKIKACBOAGJ_JLGPHINMFOI_OFFSET UNITYSDK_OFFSET(0x756720)
#define KKIKACBOAGJ_MFCBLIFOINE_OFFSET UNITYSDK_OFFSET(0x756D50)
#define KKIKACBOAGJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1955CA00)
#define KKIKACBOAGJ_ONPFNLJBIAE_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define KKIKACBOAGJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KKIKACBOAGJ_TypeDefinitionIndex = 15110;

struct alignas(4) KKIKACBOAGJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIKACBOAGJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KKIKACBOAGJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* MFCBLIFOINE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIKACBOAGJ_MFCBLIFOINE_OFFSET))(this);
	}

	::System::String* ONPFNLJBIAE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIKACBOAGJ_ONPFNLJBIAE_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIKACBOAGJ_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* ICOMMHALIOG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIKACBOAGJ_ICOMMHALIOG_OFFSET))(this);
	}

	/*
	static ::KKIKACBOAGJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KKIKACBOAGJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KKIKACBOAGJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* GOFGEHAELBL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIKACBOAGJ_GOFGEHAELBL_OFFSET))(this);
	}

	::System::Int32 JLGPHINMFOI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIKACBOAGJ_JLGPHINMFOI_OFFSET))(this);
	}

	/*
	::KKIKACBOAGJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KKIKACBOAGJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KKIKACBOAGJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BIFFDJHNBCL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KKIKACBOAGJ_BIFFDJHNBCL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* JENMOKHKDIC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIKACBOAGJ_JENMOKHKDIC_OFFSET))(this);
	}
};

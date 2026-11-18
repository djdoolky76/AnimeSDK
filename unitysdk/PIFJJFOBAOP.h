#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PIFJJFOBAOP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PIFJJFOBAOP_AFFFKCGNCHN_OFFSET UNITYSDK_OFFSET(0x756B10)
#define PIFJJFOBAOP_BAHGFJHODGF_OFFSET UNITYSDK_OFFSET(0x762C60)
#define PIFJJFOBAOP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PIFJJFOBAOP_BIFFDJHNBCL_OFFSET UNITYSDK_OFFSET(0x76FE20)
#define PIFJJFOBAOP_DEAPDAMGIBL_OFFSET UNITYSDK_OFFSET(0x755A00)
#define PIFJJFOBAOP_EHDKDIGBBAO_OFFSET UNITYSDK_OFFSET(0x762D20)
#define PIFJJFOBAOP_EKCGPMCKGLA_OFFSET UNITYSDK_OFFSET(0x755440)
#define PIFJJFOBAOP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PIFJJFOBAOP_GOFGEHAELBL_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define PIFJJFOBAOP_IACOGOAFKDL_OFFSET UNITYSDK_OFFSET(0x754B50)
#define PIFJJFOBAOP_ICOMMHALIOG_OFFSET UNITYSDK_OFFSET(0x757190)
#define PIFJJFOBAOP_JENMOKHKDIC_OFFSET UNITYSDK_OFFSET(0x757290)
#define PIFJJFOBAOP_JLGPHINMFOI_OFFSET UNITYSDK_OFFSET(0x760650)
#define PIFJJFOBAOP_JLNFECCECDD_OFFSET UNITYSDK_OFFSET(0x754F10)
#define PIFJJFOBAOP_KACCGHBPACC_OFFSET UNITYSDK_OFFSET(0x761710)
#define PIFJJFOBAOP_LGGPAMOGJDL_OFFSET UNITYSDK_OFFSET(0x762BA0)
#define PIFJJFOBAOP_MOCKMNHBIMO_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define PIFJJFOBAOP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1D0DCE60)
#define PIFJJFOBAOP_ONPFNLJBIAE_OFFSET UNITYSDK_OFFSET(0x756D50)
#define PIFJJFOBAOP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PIFJJFOBAOP_TypeDefinitionIndex = 10755;

struct alignas(4) PIFJJFOBAOP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFJJFOBAOP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PIFJJFOBAOP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LGGPAMOGJDL(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + PIFJJFOBAOP_LGGPAMOGJDL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* AFFFKCGNCHN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFJJFOBAOP_AFFFKCGNCHN_OFFSET))(this);
	}

	::System::String* DEAPDAMGIBL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFJJFOBAOP_DEAPDAMGIBL_OFFSET))(this);
	}

	::System::String* KACCGHBPACC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFJJFOBAOP_KACCGHBPACC_OFFSET))(this);
	}

	::System::String* JLNFECCECDD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFJJFOBAOP_JLNFECCECDD_OFFSET))(this);
	}

	::System::String* JENMOKHKDIC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFJJFOBAOP_JENMOKHKDIC_OFFSET))(this);
	}

	::System::String* MOCKMNHBIMO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFJJFOBAOP_MOCKMNHBIMO_OFFSET))(this);
	}

	::System::String* ONPFNLJBIAE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFJJFOBAOP_ONPFNLJBIAE_OFFSET))(this);
	}

	::System::Boolean BIFFDJHNBCL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PIFJJFOBAOP_BIFFDJHNBCL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::PIFJJFOBAOP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PIFJJFOBAOP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PIFJJFOBAOP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PIFJJFOBAOP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PIFJJFOBAOP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PIFJJFOBAOP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 IACOGOAFKDL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFJJFOBAOP_IACOGOAFKDL_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFJJFOBAOP_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 EHDKDIGBBAO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFJJFOBAOP_EHDKDIGBBAO_OFFSET))(this);
	}

	::System::Boolean BAHGFJHODGF(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + PIFJJFOBAOP_BAHGFJHODGF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* ICOMMHALIOG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFJJFOBAOP_ICOMMHALIOG_OFFSET))(this);
	}

	::System::Int32 EKCGPMCKGLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFJJFOBAOP_EKCGPMCKGLA_OFFSET))(this);
	}

	::System::String* GOFGEHAELBL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFJJFOBAOP_GOFGEHAELBL_OFFSET))(this);
	}

	::System::Int32 JLGPHINMFOI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFJJFOBAOP_JLGPHINMFOI_OFFSET))(this);
	}
};

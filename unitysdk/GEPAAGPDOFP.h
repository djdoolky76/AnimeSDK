#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GEPAAGPDOFP_AAAGAOPIFMC_OFFSET UNITYSDK_OFFSET(0x754920)
#define GEPAAGPDOFP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GEPAAGPDOFP_BLFKNELJFFB_OFFSET UNITYSDK_OFFSET(0x754B50)
#define GEPAAGPDOFP_DDJHGPIDANB_OFFSET UNITYSDK_OFFSET(0x755C70)
#define GEPAAGPDOFP_EHEDNGGDAKF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GEPAAGPDOFP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GEPAAGPDOFP_JIBDHLJJECJ_OFFSET UNITYSDK_OFFSET(0x7606B0)
#define GEPAAGPDOFP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17465D70)
#define GEPAAGPDOFP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GEPAAGPDOFP_TypeDefinitionIndex = 12927;

struct alignas(4) GEPAAGPDOFP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPAAGPDOFP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GEPAAGPDOFP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DDJHGPIDANB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPAAGPDOFP_DDJHGPIDANB_OFFSET))(this);
	}

	/*
	::GEPAAGPDOFP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GEPAAGPDOFP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GEPAAGPDOFP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BLFKNELJFFB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPAAGPDOFP_BLFKNELJFFB_OFFSET))(this);
	}

	::System::Int32 EHEDNGGDAKF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPAAGPDOFP_EHEDNGGDAKF_OFFSET))(this);
	}

	::System::Int32 AAAGAOPIFMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPAAGPDOFP_AAAGAOPIFMC_OFFSET))(this);
	}

	::System::String* JIBDHLJJECJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPAAGPDOFP_JIBDHLJJECJ_OFFSET))(this);
	}

	/*
	static ::GEPAAGPDOFP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 FPCEGDFJDPO, ::System::Int32 EEEDMAGLOBB, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GEPAAGPDOFP(*)(::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GEPAAGPDOFP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, FPCEGDFJDPO, EEEDMAGLOBB, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};

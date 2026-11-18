#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HAKNOJAEJKN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HAKNOJAEJKN_DGFAJDNHCIJ_OFFSET UNITYSDK_OFFSET(0x755D20)
#define HAKNOJAEJKN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HAKNOJAEJKN_JCIPEGCLINP_OFFSET UNITYSDK_OFFSET(0x756B10)
#define HAKNOJAEJKN_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x754970)
#define HAKNOJAEJKN_NLAIFNFGGMA_OFFSET UNITYSDK_OFFSET(0x756B90)
#define HAKNOJAEJKN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x152D39D0)
#define HAKNOJAEJKN_OKGKODNEICJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HAKNOJAEJKN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HAKNOJAEJKN_TypeDefinitionIndex = 10853;

struct alignas(4) HAKNOJAEJKN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAKNOJAEJKN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HAKNOJAEJKN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* JCIPEGCLINP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAKNOJAEJKN_JCIPEGCLINP_OFFSET))(this);
	}

	/*
	static ::HAKNOJAEJKN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HAKNOJAEJKN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HAKNOJAEJKN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAKNOJAEJKN_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::Int32 OKGKODNEICJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAKNOJAEJKN_OKGKODNEICJ_OFFSET))(this);
	}

	::System::Int32 NLAIFNFGGMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAKNOJAEJKN_NLAIFNFGGMA_OFFSET))(this);
	}

	::System::Int32 DGFAJDNHCIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAKNOJAEJKN_DGFAJDNHCIJ_OFFSET))(this);
	}

	/*
	::HAKNOJAEJKN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HAKNOJAEJKN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HAKNOJAEJKN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};

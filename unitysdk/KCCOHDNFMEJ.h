#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KCCOHDNFMEJ_ABJINPPFDIO_OFFSET UNITYSDK_OFFSET(0x756D50)
#define KCCOHDNFMEJ_ANIKGALFBKF_OFFSET UNITYSDK_OFFSET(0x757190)
#define KCCOHDNFMEJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KCCOHDNFMEJ_EBDNKKLBPJF_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KCCOHDNFMEJ_EHEDNGGDAKF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KCCOHDNFMEJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KCCOHDNFMEJ_ICFCKFMDNEE_OFFSET UNITYSDK_OFFSET(0x758840)
#define KCCOHDNFMEJ_IFDDNJBJHJJ_OFFSET UNITYSDK_OFFSET(0x757290)
#define KCCOHDNFMEJ_INHAHFKDCOD_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define KCCOHDNFMEJ_LNIEIILFBAE_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define KCCOHDNFMEJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x152FE1C0)
#define KCCOHDNFMEJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KCCOHDNFMEJ_TypeDefinitionIndex = 15701;

struct alignas(4) KCCOHDNFMEJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCOHDNFMEJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KCCOHDNFMEJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* ANIKGALFBKF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCOHDNFMEJ_ANIKGALFBKF_OFFSET))(this);
	}

	::System::Int32 EBDNKKLBPJF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCOHDNFMEJ_EBDNKKLBPJF_OFFSET))(this);
	}

	::System::String* ABJINPPFDIO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCOHDNFMEJ_ABJINPPFDIO_OFFSET))(this);
	}

	/*
	static ::KCCOHDNFMEJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KCCOHDNFMEJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KCCOHDNFMEJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 INHAHFKDCOD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCOHDNFMEJ_INHAHFKDCOD_OFFSET))(this);
	}

	/*
	::KCCOHDNFMEJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KCCOHDNFMEJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KCCOHDNFMEJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 EHEDNGGDAKF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCOHDNFMEJ_EHEDNGGDAKF_OFFSET))(this);
	}

	::System::Boolean ICFCKFMDNEE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCOHDNFMEJ_ICFCKFMDNEE_OFFSET))(this);
	}

	::System::String* LNIEIILFBAE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCOHDNFMEJ_LNIEIILFBAE_OFFSET))(this);
	}

	::System::String* IFDDNJBJHJJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCOHDNFMEJ_IFDDNJBJHJJ_OFFSET))(this);
	}
};

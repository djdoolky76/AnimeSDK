#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OMCNFDFGFCB_AKJAILHOIEC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define OMCNFDFGFCB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OMCNFDFGFCB_GCOKBEGLJAJ_OFFSET UNITYSDK_OFFSET(0x761500)
#define OMCNFDFGFCB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OMCNFDFGFCB_MFOOKILPPDI_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OMCNFDFGFCB_MKHMCGGNGPL_OFFSET UNITYSDK_OFFSET(0x754C20)
#define OMCNFDFGFCB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B340CF0)
#define OMCNFDFGFCB_OLDJAFAKEON_OFFSET UNITYSDK_OFFSET(0x755D20)
#define OMCNFDFGFCB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OMCNFDFGFCB_TypeDefinitionIndex = 16544;

struct alignas(4) OMCNFDFGFCB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCNFDFGFCB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMCNFDFGFCB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 OLDJAFAKEON()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCNFDFGFCB_OLDJAFAKEON_OFFSET))(this);
	}

	::System::Boolean GCOKBEGLJAJ(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + OMCNFDFGFCB_GCOKBEGLJAJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 MKHMCGGNGPL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCNFDFGFCB_MKHMCGGNGPL_OFFSET))(this);
	}

	/*
	static ::OMCNFDFGFCB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OMCNFDFGFCB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OMCNFDFGFCB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::OMCNFDFGFCB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OMCNFDFGFCB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMCNFDFGFCB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MFOOKILPPDI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCNFDFGFCB_MFOOKILPPDI_OFFSET))(this);
	}

	::System::Int32 AKJAILHOIEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCNFDFGFCB_AKJAILHOIEC_OFFSET))(this);
	}
};

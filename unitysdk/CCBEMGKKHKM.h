#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CCBEMGKKHKM_AEDGKBNLMIL_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define CCBEMGKKHKM_AEFEHLHIACB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CCBEMGKKHKM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CCBEMGKKHKM_DAMIDKFCFIH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define CCBEMGKKHKM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CCBEMGKKHKM_ILCILIIKIHA_OFFSET UNITYSDK_OFFSET(0x755E40)
#define CCBEMGKKHKM_JBOIMNAPIKG_OFFSET UNITYSDK_OFFSET(0x755C70)
#define CCBEMGKKHKM_MJOEOKHGPNN_OFFSET UNITYSDK_OFFSET(0x754F10)
#define CCBEMGKKHKM_NCGMDMHLBAL_OFFSET UNITYSDK_OFFSET(0x754B50)
#define CCBEMGKKHKM_NCNCOKGOOMP_OFFSET UNITYSDK_OFFSET(0x756B10)
#define CCBEMGKKHKM_OFCFCLJGKFH_OFFSET UNITYSDK_OFFSET(0x758780)
#define CCBEMGKKHKM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CCBEMGKKHKM_TypeDefinitionIndex = 17519;

struct alignas(4) CCBEMGKKHKM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCBEMGKKHKM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CCBEMGKKHKM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* NCNCOKGOOMP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCBEMGKKHKM_NCNCOKGOOMP_OFFSET))(this);
	}

	::System::Int32 AEFEHLHIACB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCBEMGKKHKM_AEFEHLHIACB_OFFSET))(this);
	}

	::System::Int32 OFCFCLJGKFH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCBEMGKKHKM_OFCFCLJGKFH_OFFSET))(this);
	}

	::System::Int32 ILCILIIKIHA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCBEMGKKHKM_ILCILIIKIHA_OFFSET))(this);
	}

	::System::String* DAMIDKFCFIH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCBEMGKKHKM_DAMIDKFCFIH_OFFSET))(this);
	}

	/*
	::CCBEMGKKHKM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CCBEMGKKHKM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CCBEMGKKHKM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 JBOIMNAPIKG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCBEMGKKHKM_JBOIMNAPIKG_OFFSET))(this);
	}

	::System::Int32 AEDGKBNLMIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCBEMGKKHKM_AEDGKBNLMIL_OFFSET))(this);
	}

	::System::Int32 NCGMDMHLBAL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCBEMGKKHKM_NCGMDMHLBAL_OFFSET))(this);
	}

	::System::String* MJOEOKHGPNN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCBEMGKKHKM_MJOEOKHGPNN_OFFSET))(this);
	}
};

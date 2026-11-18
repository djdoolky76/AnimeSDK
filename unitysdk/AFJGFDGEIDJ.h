#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define AFJGFDGEIDJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AFJGFDGEIDJ_CLBNOKLABIE_OFFSET UNITYSDK_OFFSET(0x755A00)
#define AFJGFDGEIDJ_EHKBHJOOGLK_OFFSET UNITYSDK_OFFSET(0x763D00)
#define AFJGFDGEIDJ_FBEJCABGGLP_OFFSET UNITYSDK_OFFSET(0x756B10)
#define AFJGFDGEIDJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AFJGFDGEIDJ_MBFNEDKMIJG_OFFSET UNITYSDK_OFFSET(0x754F10)
#define AFJGFDGEIDJ_MGMAAJNANAN_OFFSET UNITYSDK_OFFSET(0x7587D0)
#define AFJGFDGEIDJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1576EE20)
#define AFJGFDGEIDJ_OOOKBEFEKPF_OFFSET UNITYSDK_OFFSET(0x7618B0)
#define AFJGFDGEIDJ_PPIMLIGJNFO_OFFSET UNITYSDK_OFFSET(0x758320)
#define AFJGFDGEIDJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AFJGFDGEIDJ_TypeDefinitionIndex = 11637;

struct alignas(4) AFJGFDGEIDJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFJGFDGEIDJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AFJGFDGEIDJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Span_1_9011FAD97750D224<::System::Byte> EHKBHJOOGLK()
	{
		return ((::System::Span_1_9011FAD97750D224<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + AFJGFDGEIDJ_EHKBHJOOGLK_OFFSET))(this);
	}

	/*
	static ::AFJGFDGEIDJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::String* MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::AFJGFDGEIDJ(*)(::System::Int32, ::System::String*, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + AFJGFDGEIDJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* FBEJCABGGLP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFJGFDGEIDJ_FBEJCABGGLP_OFFSET))(this);
	}

	::System::String* PPIMLIGJNFO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFJGFDGEIDJ_PPIMLIGJNFO_OFFSET))(this);
	}

	::System::String* OOOKBEFEKPF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFJGFDGEIDJ_OOOKBEFEKPF_OFFSET))(this);
	}

	::System::String* CLBNOKLABIE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFJGFDGEIDJ_CLBNOKLABIE_OFFSET))(this);
	}

	::System::String* MBFNEDKMIJG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFJGFDGEIDJ_MBFNEDKMIJG_OFFSET))(this);
	}

	/*
	::AFJGFDGEIDJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AFJGFDGEIDJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AFJGFDGEIDJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MGMAAJNANAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFJGFDGEIDJ_MGMAAJNANAN_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EDJDJKEEHNM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EDJDJKEEHNM_CGACDBPFDNJ_OFFSET UNITYSDK_OFFSET(0x755D20)
#define EDJDJKEEHNM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EDJDJKEEHNM_JJJDIAPAMDA_OFFSET UNITYSDK_OFFSET(0x754920)
#define EDJDJKEEHNM_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EDJDJKEEHNM_MCPGCCECEGE_OFFSET UNITYSDK_OFFSET(0x756D50)
#define EDJDJKEEHNM_MNANMJGNLLM_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define EDJDJKEEHNM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B9B3870)
#define EDJDJKEEHNM_OMEENAIGOKL_OFFSET UNITYSDK_OFFSET(0x756B90)
#define EDJDJKEEHNM_OOAMMDCDIGF_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EDJDJKEEHNM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EDJDJKEEHNM_TypeDefinitionIndex = 15017;

struct alignas(4) EDJDJKEEHNM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJDJKEEHNM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EDJDJKEEHNM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 OMEENAIGOKL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJDJKEEHNM_OMEENAIGOKL_OFFSET))(this);
	}

	/*
	static ::EDJDJKEEHNM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EDJDJKEEHNM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EDJDJKEEHNM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* MCPGCCECEGE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJDJKEEHNM_MCPGCCECEGE_OFFSET))(this);
	}

	::System::Int32 JJJDIAPAMDA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJDJKEEHNM_JJJDIAPAMDA_OFFSET))(this);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJDJKEEHNM_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Int32 CGACDBPFDNJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJDJKEEHNM_CGACDBPFDNJ_OFFSET))(this);
	}

	::System::String* MNANMJGNLLM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJDJKEEHNM_MNANMJGNLLM_OFFSET))(this);
	}

	/*
	::EDJDJKEEHNM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EDJDJKEEHNM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EDJDJKEEHNM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 OOAMMDCDIGF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJDJKEEHNM_OOAMMDCDIGF_OFFSET))(this);
	}
};

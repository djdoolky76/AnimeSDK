#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KIAIBCPBCII_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KIAIBCPBCII_CDDEMGGGOJN_OFFSET UNITYSDK_OFFSET(0x755C70)
#define KIAIBCPBCII_DICAICPAGCO_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KIAIBCPBCII_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KIAIBCPBCII_KAJNGOEPBKP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define KIAIBCPBCII_KHJPCCOHEOD_OFFSET UNITYSDK_OFFSET(0x754970)
#define KIAIBCPBCII_MKAFCCGFODM_OFFSET UNITYSDK_OFFSET(0x755A00)
#define KIAIBCPBCII_MNJFGIFGIGF_OFFSET UNITYSDK_OFFSET(0x756B10)
#define KIAIBCPBCII_NANAMGBBGDD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KIAIBCPBCII_NNKCKPNDEBC_OFFSET UNITYSDK_OFFSET(0x758780)
#define KIAIBCPBCII_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1936A9B0)
#define KIAIBCPBCII___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KIAIBCPBCII_TypeDefinitionIndex = 12513;

struct alignas(4) KIAIBCPBCII
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAIBCPBCII_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KIAIBCPBCII___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* MNJFGIFGIGF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAIBCPBCII_MNJFGIFGIGF_OFFSET))(this);
	}

	::System::Int32 CDDEMGGGOJN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAIBCPBCII_CDDEMGGGOJN_OFFSET))(this);
	}

	::System::String* MKAFCCGFODM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAIBCPBCII_MKAFCCGFODM_OFFSET))(this);
	}

	::System::String* KAJNGOEPBKP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAIBCPBCII_KAJNGOEPBKP_OFFSET))(this);
	}

	::System::Int32 NNKCKPNDEBC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAIBCPBCII_NNKCKPNDEBC_OFFSET))(this);
	}

	::System::Int32 NANAMGBBGDD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAIBCPBCII_NANAMGBBGDD_OFFSET))(this);
	}

	/*
	static ::KIAIBCPBCII OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KIAIBCPBCII(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KIAIBCPBCII_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 KHJPCCOHEOD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAIBCPBCII_KHJPCCOHEOD_OFFSET))(this);
	}

	::System::Int32 DICAICPAGCO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAIBCPBCII_DICAICPAGCO_OFFSET))(this);
	}

	/*
	::KIAIBCPBCII BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KIAIBCPBCII(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KIAIBCPBCII_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NMLJHHCPEDG_AEIBHKDHLAD_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define NMLJHHCPEDG_AFLMJAMMBOO_OFFSET UNITYSDK_OFFSET(0x754B50)
#define NMLJHHCPEDG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NMLJHHCPEDG_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NMLJHHCPEDG_EFOMBGMJIEM_OFFSET UNITYSDK_OFFSET(0x757190)
#define NMLJHHCPEDG_GCEAPOPEMOI_OFFSET UNITYSDK_OFFSET(0x756D50)
#define NMLJHHCPEDG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NMLJHHCPEDG_HAKICLIPGNN_OFFSET UNITYSDK_OFFSET(0x757290)
#define NMLJHHCPEDG_HPIHBGHEBME_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define NMLJHHCPEDG_LIIPCKENBMG_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define NMLJHHCPEDG_NLFCNEJPCNI_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define NMLJHHCPEDG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19122350)
#define NMLJHHCPEDG_PKJIDCANCOD_OFFSET UNITYSDK_OFFSET(0x755D20)
#define NMLJHHCPEDG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NMLJHHCPEDG_TypeDefinitionIndex = 11880;

struct alignas(4) NMLJHHCPEDG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLJHHCPEDG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMLJHHCPEDG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PKJIDCANCOD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLJHHCPEDG_PKJIDCANCOD_OFFSET))(this);
	}

	::System::String* NLFCNEJPCNI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLJHHCPEDG_NLFCNEJPCNI_OFFSET))(this);
	}

	::System::String* GCEAPOPEMOI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLJHHCPEDG_GCEAPOPEMOI_OFFSET))(this);
	}

	/*
	::NMLJHHCPEDG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NMLJHHCPEDG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMLJHHCPEDG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* HAKICLIPGNN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLJHHCPEDG_HAKICLIPGNN_OFFSET))(this);
	}

	::System::String* LIIPCKENBMG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLJHHCPEDG_LIIPCKENBMG_OFFSET))(this);
	}

	::System::String* EFOMBGMJIEM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLJHHCPEDG_EFOMBGMJIEM_OFFSET))(this);
	}

	/*
	static ::NMLJHHCPEDG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NMLJHHCPEDG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NMLJHHCPEDG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* HPIHBGHEBME()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLJHHCPEDG_HPIHBGHEBME_OFFSET))(this);
	}

	::System::String* AEIBHKDHLAD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLJHHCPEDG_AEIBHKDHLAD_OFFSET))(this);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLJHHCPEDG_DNKLBHKEDEM_OFFSET))(this);
	}

	::System::Int32 AFLMJAMMBOO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLJHHCPEDG_AFLMJAMMBOO_OFFSET))(this);
	}
};

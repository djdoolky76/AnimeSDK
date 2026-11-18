#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NIOAJBDJAFM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NIOAJBDJAFM_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x755C70)
#define NIOAJBDJAFM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NIOAJBDJAFM_GDKCBOHCOCK_OFFSET UNITYSDK_OFFSET(0x754970)
#define NIOAJBDJAFM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NIOAJBDJAFM_HNOMNPJOKCH_OFFSET UNITYSDK_OFFSET(0x757290)
#define NIOAJBDJAFM_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define NIOAJBDJAFM_MCCDBHFFMKF_OFFSET UNITYSDK_OFFSET(0x754920)
#define NIOAJBDJAFM_MPIDGDJCDMO_OFFSET UNITYSDK_OFFSET(0x754B50)
#define NIOAJBDJAFM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18E1F590)
#define NIOAJBDJAFM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NIOAJBDJAFM_TypeDefinitionIndex = 10216;

struct alignas(4) NIOAJBDJAFM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIOAJBDJAFM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NIOAJBDJAFM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GDKCBOHCOCK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIOAJBDJAFM_GDKCBOHCOCK_OFFSET))(this);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIOAJBDJAFM_IFDIOIOCGDP_OFFSET))(this);
	}

	::System::String* HNOMNPJOKCH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIOAJBDJAFM_HNOMNPJOKCH_OFFSET))(this);
	}

	::System::Int32 MCCDBHFFMKF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIOAJBDJAFM_MCCDBHFFMKF_OFFSET))(this);
	}

	::System::Int32 MPIDGDJCDMO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIOAJBDJAFM_MPIDGDJCDMO_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIOAJBDJAFM_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIOAJBDJAFM_APCKPKCNFJE_OFFSET))(this);
	}

	/*
	::NIOAJBDJAFM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NIOAJBDJAFM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NIOAJBDJAFM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NIOAJBDJAFM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NIOAJBDJAFM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NIOAJBDJAFM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};

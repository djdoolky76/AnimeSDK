#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IKMNAKGKFPC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IKMNAKGKFPC_CCKNOHKHNLL_OFFSET UNITYSDK_OFFSET(0x754F10)
#define IKMNAKGKFPC_DMLEINIBFMD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define IKMNAKGKFPC_GEIECMIOCOE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IKMNAKGKFPC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IKMNAKGKFPC_LJBNDINCABH_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define IKMNAKGKFPC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A4FC0B0)
#define IKMNAKGKFPC_ODPEOBKOFDP_OFFSET UNITYSDK_OFFSET(0x756D50)
#define IKMNAKGKFPC_PIHDMJCPOPK_OFFSET UNITYSDK_OFFSET(0x754A70)
#define IKMNAKGKFPC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IKMNAKGKFPC_TypeDefinitionIndex = 12911;

struct alignas(4) IKMNAKGKFPC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMNAKGKFPC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IKMNAKGKFPC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IKMNAKGKFPC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IKMNAKGKFPC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IKMNAKGKFPC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean PIHDMJCPOPK(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + IKMNAKGKFPC_PIHDMJCPOPK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* ODPEOBKOFDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMNAKGKFPC_ODPEOBKOFDP_OFFSET))(this);
	}

	::System::Int32 DMLEINIBFMD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMNAKGKFPC_DMLEINIBFMD_OFFSET))(this);
	}

	::System::Int32 LJBNDINCABH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMNAKGKFPC_LJBNDINCABH_OFFSET))(this);
	}

	::System::Int32 GEIECMIOCOE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMNAKGKFPC_GEIECMIOCOE_OFFSET))(this);
	}

	::System::String* CCKNOHKHNLL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMNAKGKFPC_CCKNOHKHNLL_OFFSET))(this);
	}

	/*
	::IKMNAKGKFPC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IKMNAKGKFPC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IKMNAKGKFPC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};

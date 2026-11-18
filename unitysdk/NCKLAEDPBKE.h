#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NCKLAEDPBKE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NCKLAEDPBKE_DOGGOBMOAOH_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define NCKLAEDPBKE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NCKLAEDPBKE_KGBMKKNKMOK_OFFSET UNITYSDK_OFFSET(0x754920)
#define NCKLAEDPBKE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x191159C0)
#define NCKLAEDPBKE_OCKOGBMGJNP_OFFSET UNITYSDK_OFFSET(0x755A00)
#define NCKLAEDPBKE_OCKPJFGLDEG_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NCKLAEDPBKE_OMMOLBNNGHC_OFFSET UNITYSDK_OFFSET(0x758320)
#define NCKLAEDPBKE_PGLHDOBJIIN_OFFSET UNITYSDK_OFFSET(0x756D50)
#define NCKLAEDPBKE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NCKLAEDPBKE_TypeDefinitionIndex = 10647;

struct alignas(4) NCKLAEDPBKE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKLAEDPBKE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NCKLAEDPBKE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* DOGGOBMOAOH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKLAEDPBKE_DOGGOBMOAOH_OFFSET))(this);
	}

	::System::Int32 KGBMKKNKMOK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKLAEDPBKE_KGBMKKNKMOK_OFFSET))(this);
	}

	/*
	::NCKLAEDPBKE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NCKLAEDPBKE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NCKLAEDPBKE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* OCKOGBMGJNP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKLAEDPBKE_OCKOGBMGJNP_OFFSET))(this);
	}

	::System::Int32 OCKPJFGLDEG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKLAEDPBKE_OCKPJFGLDEG_OFFSET))(this);
	}

	::System::String* OMMOLBNNGHC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKLAEDPBKE_OMMOLBNNGHC_OFFSET))(this);
	}

	::System::String* PGLHDOBJIIN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKLAEDPBKE_PGLHDOBJIIN_OFFSET))(this);
	}

	/*
	static ::NCKLAEDPBKE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NCKLAEDPBKE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NCKLAEDPBKE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};

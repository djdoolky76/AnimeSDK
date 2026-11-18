#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define CJNCNGBGKEB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CJNCNGBGKEB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CJNCNGBGKEB_BPJMJDLGNDP_OFFSET UNITYSDK_OFFSET(0x7D7450)
#define CJNCNGBGKEB_EIGMGCGDDDK_OFFSET UNITYSDK_OFFSET(0x7A5C20)
#define CJNCNGBGKEB_EKINMPBKOOA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define CJNCNGBGKEB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CJNCNGBGKEB_GOMMJNCBLID_OFFSET UNITYSDK_OFFSET(0x762FE0)
#define CJNCNGBGKEB_JHMCPFIKLKL_OFFSET UNITYSDK_OFFSET(0x7E4710)
#define CJNCNGBGKEB_LNHMAHGAOOE_OFFSET UNITYSDK_OFFSET(0x766740)
#define CJNCNGBGKEB_OMBFLNLLIOF_OFFSET UNITYSDK_OFFSET(0x7A7F80)
#define CJNCNGBGKEB_PMBPAGJIHHF_OFFSET UNITYSDK_OFFSET(0x7EA330)
#define CJNCNGBGKEB_PPPGNNGLLKE_OFFSET UNITYSDK_OFFSET(0x7EA2E0)
#define CJNCNGBGKEB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CJNCNGBGKEB_TypeDefinitionIndex = 17325;

struct alignas(4) CJNCNGBGKEB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNCNGBGKEB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CJNCNGBGKEB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::CJNCNGBGKEB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CJNCNGBGKEB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CJNCNGBGKEB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Single BPJMJDLGNDP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNCNGBGKEB_BPJMJDLGNDP_OFFSET))(this);
	}

	::System::Single OMBFLNLLIOF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNCNGBGKEB_OMBFLNLLIOF_OFFSET))(this);
	}

	::System::Single PPPGNNGLLKE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNCNGBGKEB_PPPGNNGLLKE_OFFSET))(this);
	}

	::System::Single JHMCPFIKLKL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNCNGBGKEB_JHMCPFIKLKL_OFFSET))(this);
	}

	::System::UInt64 PMBPAGJIHHF()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNCNGBGKEB_PMBPAGJIHHF_OFFSET))(this);
	}

	::System::Single EIGMGCGDDDK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNCNGBGKEB_EIGMGCGDDDK_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNCNGBGKEB_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 EKINMPBKOOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNCNGBGKEB_EKINMPBKOOA_OFFSET))(this);
	}

	::System::Single LNHMAHGAOOE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNCNGBGKEB_LNHMAHGAOOE_OFFSET))(this);
	}

	::System::Int32 GOMMJNCBLID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNCNGBGKEB_GOMMJNCBLID_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GKJPHOBNMMN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GKJPHOBNMMN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GKJPHOBNMMN_CEPHPBBPJMP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define GKJPHOBNMMN_CLOCMMBKNOE_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define GKJPHOBNMMN_CNPMPBOFMFN_OFFSET UNITYSDK_OFFSET(0x756D50)
#define GKJPHOBNMMN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GKJPHOBNMMN_GHNAPGILMPI_OFFSET UNITYSDK_OFFSET(0x756440)
#define GKJPHOBNMMN_GJHPDBJMGCK_OFFSET UNITYSDK_OFFSET(0x755A00)
#define GKJPHOBNMMN_HKEMFICFMAB_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define GKJPHOBNMMN_ILGJMGDFGPG_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define GKJPHOBNMMN_IOCNEHIGCOA_OFFSET UNITYSDK_OFFSET(0x756B10)
#define GKJPHOBNMMN_JEIDCKNABNA_OFFSET UNITYSDK_OFFSET(0x758320)
#define GKJPHOBNMMN_LFJJJKJAJKN_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define GKJPHOBNMMN_NIMGCPHAPDP_OFFSET UNITYSDK_OFFSET(0x758780)
#define GKJPHOBNMMN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19AFD820)
#define GKJPHOBNMMN_ODFOAIDFFFC_OFFSET UNITYSDK_OFFSET(0x755E40)
#define GKJPHOBNMMN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GKJPHOBNMMN_TypeDefinitionIndex = 12978;

struct alignas(4) GKJPHOBNMMN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJPHOBNMMN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GKJPHOBNMMN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* CLOCMMBKNOE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJPHOBNMMN_CLOCMMBKNOE_OFFSET))(this);
	}

	/*
	::GKJPHOBNMMN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GKJPHOBNMMN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GKJPHOBNMMN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LFJJJKJAJKN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJPHOBNMMN_LFJJJKJAJKN_OFFSET))(this);
	}

	::System::Int32 ODFOAIDFFFC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJPHOBNMMN_ODFOAIDFFFC_OFFSET))(this);
	}

	::System::String* ILGJMGDFGPG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJPHOBNMMN_ILGJMGDFGPG_OFFSET))(this);
	}

	::System::String* CNPMPBOFMFN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJPHOBNMMN_CNPMPBOFMFN_OFFSET))(this);
	}

	::System::String* GJHPDBJMGCK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJPHOBNMMN_GJHPDBJMGCK_OFFSET))(this);
	}

	/*
	static ::GKJPHOBNMMN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GKJPHOBNMMN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GKJPHOBNMMN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 NIMGCPHAPDP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJPHOBNMMN_NIMGCPHAPDP_OFFSET))(this);
	}

	::System::String* JEIDCKNABNA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJPHOBNMMN_JEIDCKNABNA_OFFSET))(this);
	}

	::System::Int32 GHNAPGILMPI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJPHOBNMMN_GHNAPGILMPI_OFFSET))(this);
	}

	::System::String* IOCNEHIGCOA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJPHOBNMMN_IOCNEHIGCOA_OFFSET))(this);
	}

	::System::Int32 HKEMFICFMAB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJPHOBNMMN_HKEMFICFMAB_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJPHOBNMMN_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* CEPHPBBPJMP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJPHOBNMMN_CEPHPBBPJMP_OFFSET))(this);
	}
};

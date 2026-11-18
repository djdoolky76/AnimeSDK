#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FDDPPOELLBE_AAPANLNKOGP_OFFSET UNITYSDK_OFFSET(0x756280)
#define FDDPPOELLBE_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FDDPPOELLBE_BFOICJEADOA_OFFSET UNITYSDK_OFFSET(0x755890)
#define FDDPPOELLBE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FDDPPOELLBE_CHMPPDAJMBP_OFFSET UNITYSDK_OFFSET(0x758780)
#define FDDPPOELLBE_DDOLJLJHMEL_OFFSET UNITYSDK_OFFSET(0x7A6880)
#define FDDPPOELLBE_EPOANHKLBOO_OFFSET UNITYSDK_OFFSET(0x76F6C0)
#define FDDPPOELLBE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FDDPPOELLBE_GPHABMAEACB_OFFSET UNITYSDK_OFFSET(0x755FE0)
#define FDDPPOELLBE_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x756B90)
#define FDDPPOELLBE_IFCPGCKBDCO_OFFSET UNITYSDK_OFFSET(0x756640)
#define FDDPPOELLBE_IPAJPBLNMPF_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define FDDPPOELLBE_JICBDMIKBCA_OFFSET UNITYSDK_OFFSET(0x755190)
#define FDDPPOELLBE_JIPHJBPJCOL_OFFSET UNITYSDK_OFFSET(0x756800)
#define FDDPPOELLBE_LNLNHEMFAEC_OFFSET UNITYSDK_OFFSET(0x754F10)
#define FDDPPOELLBE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19527350)
#define FDDPPOELLBE_OFLDMEBEEEL_OFFSET UNITYSDK_OFFSET(0x756140)
#define FDDPPOELLBE_OLEEKAECECI_OFFSET UNITYSDK_OFFSET(0x7624E0)
#define FDDPPOELLBE_PNDIDIGMAPN_OFFSET UNITYSDK_OFFSET(0x7561C0)
#define FDDPPOELLBE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FDDPPOELLBE_TypeDefinitionIndex = 13601;

struct alignas(4) FDDPPOELLBE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDPPOELLBE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FDDPPOELLBE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 JICBDMIKBCA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDPPOELLBE_JICBDMIKBCA_OFFSET))(this);
	}

	::System::Boolean GPHABMAEACB(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FDDPPOELLBE_GPHABMAEACB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDPPOELLBE_HKELPCLHLEC_OFFSET))(this);
	}

	/*
	::FDDPPOELLBE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FDDPPOELLBE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FDDPPOELLBE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean EPOANHKLBOO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDPPOELLBE_EPOANHKLBOO_OFFSET))(this);
	}

	/*
	static ::FDDPPOELLBE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FDDPPOELLBE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FDDPPOELLBE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* IPAJPBLNMPF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDPPOELLBE_IPAJPBLNMPF_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDPPOELLBE_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean OLEEKAECECI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDPPOELLBE_OLEEKAECECI_OFFSET))(this);
	}

	::System::String* LNLNHEMFAEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDPPOELLBE_LNLNHEMFAEC_OFFSET))(this);
	}

	::System::Int32 AAPANLNKOGP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDPPOELLBE_AAPANLNKOGP_OFFSET))(this);
	}

	::System::Int32 BFOICJEADOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDPPOELLBE_BFOICJEADOA_OFFSET))(this);
	}

	::System::Boolean OFLDMEBEEEL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FDDPPOELLBE_OFLDMEBEEEL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 CHMPPDAJMBP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDPPOELLBE_CHMPPDAJMBP_OFFSET))(this);
	}

	::System::Boolean IFCPGCKBDCO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FDDPPOELLBE_IFCPGCKBDCO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 JIPHJBPJCOL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDPPOELLBE_JIPHJBPJCOL_OFFSET))(this);
	}

	::System::Boolean DDOLJLJHMEL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDPPOELLBE_DDOLJLJHMEL_OFFSET))(this);
	}

	::System::Int32 PNDIDIGMAPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDPPOELLBE_PNDIDIGMAPN_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BLDFLJKGKEM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BLDFLJKGKEM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BLDFLJKGKEM_BHLMNLCICNM_OFFSET UNITYSDK_OFFSET(0x754D50)
#define BLDFLJKGKEM_CIGBKHHPJLA_OFFSET UNITYSDK_OFFSET(0x755190)
#define BLDFLJKGKEM_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x756D50)
#define BLDFLJKGKEM_DJMCEPKHJKM_OFFSET UNITYSDK_OFFSET(0x756B10)
#define BLDFLJKGKEM_FCIINHKGEFN_OFFSET UNITYSDK_OFFSET(0x755890)
#define BLDFLJKGKEM_FMHPOEOCOOG_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define BLDFLJKGKEM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BLDFLJKGKEM_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define BLDFLJKGKEM_IPEFOCILLFJ_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define BLDFLJKGKEM_MDICIFDHHHL_OFFSET UNITYSDK_OFFSET(0x757290)
#define BLDFLJKGKEM_NFDDMGBFGNI_OFFSET UNITYSDK_OFFSET(0x755C70)
#define BLDFLJKGKEM_NIEELKLOCNP_OFFSET UNITYSDK_OFFSET(0x757190)
#define BLDFLJKGKEM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1572F260)
#define BLDFLJKGKEM_OPPIDGPFEAA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define BLDFLJKGKEM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BLDFLJKGKEM_TypeDefinitionIndex = 14089;

struct alignas(4) BLDFLJKGKEM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDFLJKGKEM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BLDFLJKGKEM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDFLJKGKEM_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::BLDFLJKGKEM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BLDFLJKGKEM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BLDFLJKGKEM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDFLJKGKEM_HKELPCLHLEC_OFFSET))(this);
	}

	::System::String* FMHPOEOCOOG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDFLJKGKEM_FMHPOEOCOOG_OFFSET))(this);
	}

	::System::String* DJMCEPKHJKM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDFLJKGKEM_DJMCEPKHJKM_OFFSET))(this);
	}

	::System::Boolean IPEFOCILLFJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BLDFLJKGKEM_IPEFOCILLFJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* MDICIFDHHHL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDFLJKGKEM_MDICIFDHHHL_OFFSET))(this);
	}

	::System::String* NIEELKLOCNP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDFLJKGKEM_NIEELKLOCNP_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDFLJKGKEM_DECMGICKDLH_OFFSET))(this);
	}

	/*
	static ::BLDFLJKGKEM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BLDFLJKGKEM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BLDFLJKGKEM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 FCIINHKGEFN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDFLJKGKEM_FCIINHKGEFN_OFFSET))(this);
	}

	::System::Int32 BHLMNLCICNM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDFLJKGKEM_BHLMNLCICNM_OFFSET))(this);
	}

	::System::Int32 NFDDMGBFGNI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDFLJKGKEM_NFDDMGBFGNI_OFFSET))(this);
	}

	::System::Int32 CIGBKHHPJLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDFLJKGKEM_CIGBKHHPJLA_OFFSET))(this);
	}

	::System::Int32 OPPIDGPFEAA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDFLJKGKEM_OPPIDGPFEAA_OFFSET))(this);
	}
};

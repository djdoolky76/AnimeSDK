#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EDGJLKGIPJL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EDGJLKGIPJL_EAEJAHFHCIH_OFFSET UNITYSDK_OFFSET(0x758200)
#define EDGJLKGIPJL_GEADINPIDDE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EDGJLKGIPJL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EDGJLKGIPJL_HPNHCGKNAEJ_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define EDGJLKGIPJL_IBKIFKOCOLI_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define EDGJLKGIPJL_LCOILJEGAGP_OFFSET UNITYSDK_OFFSET(0x756B10)
#define EDGJLKGIPJL_MBODAPGMNDN_OFFSET UNITYSDK_OFFSET(0x755A00)
#define EDGJLKGIPJL_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EDGJLKGIPJL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A55E710)
#define EDGJLKGIPJL_OKFGAAFADCF_OFFSET UNITYSDK_OFFSET(0x756360)
#define EDGJLKGIPJL_PNIILEDMPDB_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define EDGJLKGIPJL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EDGJLKGIPJL_TypeDefinitionIndex = 10974;

struct alignas(4) EDGJLKGIPJL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGJLKGIPJL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EDGJLKGIPJL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::EDGJLKGIPJL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EDGJLKGIPJL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EDGJLKGIPJL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean OKFGAAFADCF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EDGJLKGIPJL_OKFGAAFADCF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* LCOILJEGAGP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGJLKGIPJL_LCOILJEGAGP_OFFSET))(this);
	}

	::System::String* HPNHCGKNAEJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGJLKGIPJL_HPNHCGKNAEJ_OFFSET))(this);
	}

	::System::Int32 PNIILEDMPDB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGJLKGIPJL_PNIILEDMPDB_OFFSET))(this);
	}

	::System::String* MBODAPGMNDN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGJLKGIPJL_MBODAPGMNDN_OFFSET))(this);
	}

	::System::Int32 IBKIFKOCOLI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGJLKGIPJL_IBKIFKOCOLI_OFFSET))(this);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGJLKGIPJL_NFKFHJBEPGD_OFFSET))(this);
	}

	::System::Int32 GEADINPIDDE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGJLKGIPJL_GEADINPIDDE_OFFSET))(this);
	}

	::System::Boolean EAEJAHFHCIH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EDGJLKGIPJL_EAEJAHFHCIH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::EDGJLKGIPJL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EDGJLKGIPJL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EDGJLKGIPJL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define NDFAFJFHNPA_AOHGABFPPKE_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define NDFAFJFHNPA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NDFAFJFHNPA_CGEJEJKAOBO_OFFSET UNITYSDK_OFFSET(0x754C20)
#define NDFAFJFHNPA_EHOGGGKCMLF_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define NDFAFJFHNPA_FLGIHBEJOCO_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NDFAFJFHNPA_FLOKAJDNDJM_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define NDFAFJFHNPA_FOBMGMAICPJ_OFFSET UNITYSDK_OFFSET(0x756360)
#define NDFAFJFHNPA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NDFAFJFHNPA_JGGOLNPNFPJ_OFFSET UNITYSDK_OFFSET(0x754A70)
#define NDFAFJFHNPA_JOICKNFANMM_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define NDFAFJFHNPA_LDHNABOMIPP_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define NDFAFJFHNPA_MFJGCDCONMN_OFFSET UNITYSDK_OFFSET(0x755790)
#define NDFAFJFHNPA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19DBE920)
#define NDFAFJFHNPA_OCLJCNBLJEB_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define NDFAFJFHNPA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NDFAFJFHNPA_TypeDefinitionIndex = 10797;

struct alignas(4) NDFAFJFHNPA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFAFJFHNPA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDFAFJFHNPA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean OCLJCNBLJEB(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NDFAFJFHNPA_OCLJCNBLJEB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 MFJGCDCONMN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFAFJFHNPA_MFJGCDCONMN_OFFSET))(this);
	}

	/*
	static ::NDFAFJFHNPA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NDFAFJFHNPA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NDFAFJFHNPA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::NDFAFJFHNPA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NDFAFJFHNPA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDFAFJFHNPA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean JGGOLNPNFPJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NDFAFJFHNPA_JGGOLNPNFPJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 JOICKNFANMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFAFJFHNPA_JOICKNFANMM_OFFSET))(this);
	}

	::System::Boolean LDHNABOMIPP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NDFAFJFHNPA_LDHNABOMIPP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 CGEJEJKAOBO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFAFJFHNPA_CGEJEJKAOBO_OFFSET))(this);
	}

	::System::Boolean FOBMGMAICPJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NDFAFJFHNPA_FOBMGMAICPJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 EHOGGGKCMLF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFAFJFHNPA_EHOGGGKCMLF_OFFSET))(this);
	}

	::System::Int32 FLGIHBEJOCO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFAFJFHNPA_FLGIHBEJOCO_OFFSET))(this);
	}

	::System::Int32 AOHGABFPPKE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFAFJFHNPA_AOHGABFPPKE_OFFSET))(this);
	}

	::System::Boolean FLOKAJDNDJM(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NDFAFJFHNPA_FLOKAJDNDJM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};

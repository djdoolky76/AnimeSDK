#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LGPDLKBDAGI_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LGPDLKBDAGI_AGCLNHIDLMP_OFFSET UNITYSDK_OFFSET(0x754C20)
#define LGPDLKBDAGI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LGPDLKBDAGI_CNNJCGCEGML_OFFSET UNITYSDK_OFFSET(0x761500)
#define LGPDLKBDAGI_DKPFPHDEDFD_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define LGPDLKBDAGI_EGEJODBDBCJ_OFFSET UNITYSDK_OFFSET(0x761360)
#define LGPDLKBDAGI_FBGBCLHKLGA_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define LGPDLKBDAGI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LGPDLKBDAGI_NAINNEKPGME_OFFSET UNITYSDK_OFFSET(0x754920)
#define LGPDLKBDAGI_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define LGPDLKBDAGI_NPHJLAHHDLP_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define LGPDLKBDAGI_OEFKAJCPCMO_OFFSET UNITYSDK_OFFSET(0x77A4E0)
#define LGPDLKBDAGI_OLPFCKIFFLP_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define LGPDLKBDAGI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LGPDLKBDAGI_TypeDefinitionIndex = 16712;

struct alignas(4) LGPDLKBDAGI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPDLKBDAGI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGPDLKBDAGI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 FBGBCLHKLGA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPDLKBDAGI_FBGBCLHKLGA_OFFSET))(this);
	}

	::System::Boolean DKPFPHDEDFD(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LGPDLKBDAGI_DKPFPHDEDFD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean EGEJODBDBCJ(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + LGPDLKBDAGI_EGEJODBDBCJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NAINNEKPGME()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPDLKBDAGI_NAINNEKPGME_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPDLKBDAGI_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 OLPFCKIFFLP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPDLKBDAGI_OLPFCKIFFLP_OFFSET))(this);
	}

	::System::Int32 NPHJLAHHDLP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPDLKBDAGI_NPHJLAHHDLP_OFFSET))(this);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPDLKBDAGI_NFKFHJBEPGD_OFFSET))(this);
	}

	::System::Boolean OEFKAJCPCMO(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + LGPDLKBDAGI_OEFKAJCPCMO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::LGPDLKBDAGI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LGPDLKBDAGI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGPDLKBDAGI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean CNNJCGCEGML(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + LGPDLKBDAGI_CNNJCGCEGML_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 AGCLNHIDLMP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPDLKBDAGI_AGCLNHIDLMP_OFFSET))(this);
	}
};

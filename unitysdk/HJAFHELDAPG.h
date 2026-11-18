#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HJAFHELDAPG_ACKKPOIFPCI_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define HJAFHELDAPG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HJAFHELDAPG_BOJGPHCECHP_OFFSET UNITYSDK_OFFSET(0x755190)
#define HJAFHELDAPG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HJAFHELDAPG_GHKOBIMHENC_OFFSET UNITYSDK_OFFSET(0x757190)
#define HJAFHELDAPG_GOALIHGGJKP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HJAFHELDAPG_HBDBHPGOBNH_OFFSET UNITYSDK_OFFSET(0x758780)
#define HJAFHELDAPG_HKNPMNAEAGM_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define HJAFHELDAPG_JACPMGBNLNB_OFFSET UNITYSDK_OFFSET(0x754970)
#define HJAFHELDAPG_LIDNHEIHMCO_OFFSET UNITYSDK_OFFSET(0x754A70)
#define HJAFHELDAPG_NEOJPFNDMNP_OFFSET UNITYSDK_OFFSET(0x761240)
#define HJAFHELDAPG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x160F6DB0)
#define HJAFHELDAPG_OPLBDIDJDMP_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define HJAFHELDAPG_PALAPAPKNNP_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define HJAFHELDAPG_PLHJAINNDIK_OFFSET UNITYSDK_OFFSET(0x754920)
#define HJAFHELDAPG_PLICGHPBOBM_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define HJAFHELDAPG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HJAFHELDAPG_TypeDefinitionIndex = 13283;

struct alignas(4) HJAFHELDAPG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAFHELDAPG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HJAFHELDAPG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean PALAPAPKNNP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HJAFHELDAPG_PALAPAPKNNP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LIDNHEIHMCO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HJAFHELDAPG_LIDNHEIHMCO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean HKNPMNAEAGM(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HJAFHELDAPG_HKNPMNAEAGM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 JACPMGBNLNB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAFHELDAPG_JACPMGBNLNB_OFFSET))(this);
	}

	::System::Int32 BOJGPHCECHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAFHELDAPG_BOJGPHCECHP_OFFSET))(this);
	}

	::System::Int32 PLHJAINNDIK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAFHELDAPG_PLHJAINNDIK_OFFSET))(this);
	}

	::System::String* GHKOBIMHENC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAFHELDAPG_GHKOBIMHENC_OFFSET))(this);
	}

	/*
	::HJAFHELDAPG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HJAFHELDAPG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HJAFHELDAPG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NEOJPFNDMNP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAFHELDAPG_NEOJPFNDMNP_OFFSET))(this);
	}

	::System::Int32 PLICGHPBOBM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAFHELDAPG_PLICGHPBOBM_OFFSET))(this);
	}

	/*
	static ::HJAFHELDAPG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HJAFHELDAPG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HJAFHELDAPG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACKKPOIFPCI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAFHELDAPG_ACKKPOIFPCI_OFFSET))(this);
	}

	::System::Int32 HBDBHPGOBNH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAFHELDAPG_HBDBHPGOBNH_OFFSET))(this);
	}

	::System::Int32 GOALIHGGJKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAFHELDAPG_GOALIHGGJKP_OFFSET))(this);
	}

	::System::Int32 OPLBDIDJDMP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAFHELDAPG_OPLBDIDJDMP_OFFSET))(this);
	}
};

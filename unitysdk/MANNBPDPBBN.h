#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MANNBPDPBBN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MANNBPDPBBN_AKBAHIJPMGB_OFFSET UNITYSDK_OFFSET(0x7560E0)
#define MANNBPDPBBN_AOBOFECAJBB_OFFSET UNITYSDK_OFFSET(0x757B50)
#define MANNBPDPBBN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MANNBPDPBBN_EKKGFICJMGA_OFFSET UNITYSDK_OFFSET(0x757330)
#define MANNBPDPBBN_ELDJHLHDLPD_OFFSET UNITYSDK_OFFSET(0x7578F0)
#define MANNBPDPBBN_FKMJIMHJKAH_OFFSET UNITYSDK_OFFSET(0x754B50)
#define MANNBPDPBBN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MANNBPDPBBN_GNNMOJBFJKO_OFFSET UNITYSDK_OFFSET(0x755E40)
#define MANNBPDPBBN_HPEGEHDBMIN_OFFSET UNITYSDK_OFFSET(0x754920)
#define MANNBPDPBBN_IBPKDFNJAMD_OFFSET UNITYSDK_OFFSET(0x7588B0)
#define MANNBPDPBBN_IIPAKHLEKCO_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define MANNBPDPBBN_INLHHABMEFM_OFFSET UNITYSDK_OFFSET(0x756490)
#define MANNBPDPBBN_MGEOBCHPJCF_OFFSET UNITYSDK_OFFSET(0x755D20)
#define MANNBPDPBBN_MOAHHAPGDCJ_OFFSET UNITYSDK_OFFSET(0x756220)
#define MANNBPDPBBN_NNMMKIBOLID_OFFSET UNITYSDK_OFFSET(0x760650)
#define MANNBPDPBBN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1AD6A6A0)
#define MANNBPDPBBN_PLBMAOCHFFM_OFFSET UNITYSDK_OFFSET(0x76FE20)
#define MANNBPDPBBN_PLHKKHHPCNA_OFFSET UNITYSDK_OFFSET(0x756B90)
#define MANNBPDPBBN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MANNBPDPBBN_TypeDefinitionIndex = 11922;

struct alignas(4) MANNBPDPBBN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MANNBPDPBBN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MANNBPDPBBN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 EKKGFICJMGA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MANNBPDPBBN_EKKGFICJMGA_OFFSET))(this);
	}

	::System::Boolean INLHHABMEFM(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MANNBPDPBBN_INLHHABMEFM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean IBPKDFNJAMD(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + MANNBPDPBBN_IBPKDFNJAMD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MANNBPDPBBN_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 HPEGEHDBMIN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MANNBPDPBBN_HPEGEHDBMIN_OFFSET))(this);
	}

	::System::Int32 FKMJIMHJKAH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MANNBPDPBBN_FKMJIMHJKAH_OFFSET))(this);
	}

	::System::Int32 IIPAKHLEKCO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MANNBPDPBBN_IIPAKHLEKCO_OFFSET))(this);
	}

	/*
	::MANNBPDPBBN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MANNBPDPBBN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MANNBPDPBBN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MOAHHAPGDCJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MANNBPDPBBN_MOAHHAPGDCJ_OFFSET))(this);
	}

	::System::Boolean PLBMAOCHFFM(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MANNBPDPBBN_PLBMAOCHFFM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MANNBPDPBBN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MANNBPDPBBN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MANNBPDPBBN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean ELDJHLHDLPD(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + MANNBPDPBBN_ELDJHLHDLPD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 PLHKKHHPCNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MANNBPDPBBN_PLHKKHHPCNA_OFFSET))(this);
	}

	::System::Int32 GNNMOJBFJKO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MANNBPDPBBN_GNNMOJBFJKO_OFFSET))(this);
	}

	::System::Int32 MGEOBCHPJCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MANNBPDPBBN_MGEOBCHPJCF_OFFSET))(this);
	}

	::System::Int32 NNMMKIBOLID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MANNBPDPBBN_NNMMKIBOLID_OFFSET))(this);
	}

	::System::Boolean AOBOFECAJBB(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + MANNBPDPBBN_AOBOFECAJBB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 AKBAHIJPMGB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MANNBPDPBBN_AKBAHIJPMGB_OFFSET))(this);
	}
};

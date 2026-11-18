#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DMLNFHLPIJC_ABMJFGBFHEE_OFFSET UNITYSDK_OFFSET(0x754F10)
#define DMLNFHLPIJC_AKIIACBDFNC_OFFSET UNITYSDK_OFFSET(0x754970)
#define DMLNFHLPIJC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DMLNFHLPIJC_BKHAMOGLDOH_OFFSET UNITYSDK_OFFSET(0x76FE20)
#define DMLNFHLPIJC_ELEKCEEGOGH_OFFSET UNITYSDK_OFFSET(0x755E40)
#define DMLNFHLPIJC_ELIGIEFBIPJ_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define DMLNFHLPIJC_ENMFEHJEAJE_OFFSET UNITYSDK_OFFSET(0x756B90)
#define DMLNFHLPIJC_EOIJLOAGKOA_OFFSET UNITYSDK_OFFSET(0x755890)
#define DMLNFHLPIJC_EPIIJBOPPFG_OFFSET UNITYSDK_OFFSET(0x755190)
#define DMLNFHLPIJC_GDOMNECAGNC_OFFSET UNITYSDK_OFFSET(0x756490)
#define DMLNFHLPIJC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DMLNFHLPIJC_HHIGPCHDGKF_OFFSET UNITYSDK_OFFSET(0x7560E0)
#define DMLNFHLPIJC_HIBJDJGPPMJ_OFFSET UNITYSDK_OFFSET(0x76FDA0)
#define DMLNFHLPIJC_HOBFCANGGFE_OFFSET UNITYSDK_OFFSET(0x762D20)
#define DMLNFHLPIJC_HOCKHAAPODL_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DMLNFHLPIJC_IBGENGCIOHD_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define DMLNFHLPIJC_NCHMNOMKBDE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DMLNFHLPIJC_PCBJAEPDJCM_OFFSET UNITYSDK_OFFSET(0x760650)
#define DMLNFHLPIJC_PIPDLHJLKJI_OFFSET UNITYSDK_OFFSET(0x758780)
#define DMLNFHLPIJC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DMLNFHLPIJC_TypeDefinitionIndex = 17179;

struct alignas(4) DMLNFHLPIJC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLNFHLPIJC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMLNFHLPIJC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PCBJAEPDJCM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLNFHLPIJC_PCBJAEPDJCM_OFFSET))(this);
	}

	/*
	::DMLNFHLPIJC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DMLNFHLPIJC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMLNFHLPIJC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BKHAMOGLDOH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + DMLNFHLPIJC_BKHAMOGLDOH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean HIBJDJGPPMJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + DMLNFHLPIJC_HIBJDJGPPMJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 IBGENGCIOHD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLNFHLPIJC_IBGENGCIOHD_OFFSET))(this);
	}

	::System::Int32 EOIJLOAGKOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLNFHLPIJC_EOIJLOAGKOA_OFFSET))(this);
	}

	::System::Int32 PIPDLHJLKJI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLNFHLPIJC_PIPDLHJLKJI_OFFSET))(this);
	}

	::System::Int32 EPIIJBOPPFG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLNFHLPIJC_EPIIJBOPPFG_OFFSET))(this);
	}

	::System::Int32 ELEKCEEGOGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLNFHLPIJC_ELEKCEEGOGH_OFFSET))(this);
	}

	::System::Int32 ENMFEHJEAJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLNFHLPIJC_ENMFEHJEAJE_OFFSET))(this);
	}

	::System::Boolean GDOMNECAGNC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + DMLNFHLPIJC_GDOMNECAGNC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 HOBFCANGGFE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLNFHLPIJC_HOBFCANGGFE_OFFSET))(this);
	}

	::System::Int32 HOCKHAAPODL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLNFHLPIJC_HOCKHAAPODL_OFFSET))(this);
	}

	::System::Int32 NCHMNOMKBDE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLNFHLPIJC_NCHMNOMKBDE_OFFSET))(this);
	}

	::System::String* ABMJFGBFHEE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLNFHLPIJC_ABMJFGBFHEE_OFFSET))(this);
	}

	::System::Int32 ELIGIEFBIPJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLNFHLPIJC_ELIGIEFBIPJ_OFFSET))(this);
	}

	::System::Int32 HHIGPCHDGKF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLNFHLPIJC_HHIGPCHDGKF_OFFSET))(this);
	}

	::System::Int32 AKIIACBDFNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLNFHLPIJC_AKIIACBDFNC_OFFSET))(this);
	}
};

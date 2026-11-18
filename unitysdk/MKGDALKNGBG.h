#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MKGDALKNGBG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MKGDALKNGBG_CCGKILGIJAF_OFFSET UNITYSDK_OFFSET(0x756B10)
#define MKGDALKNGBG_FLMKIJOPCIK_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define MKGDALKNGBG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MKGDALKNGBG_HCJDFLCNFOK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MKGDALKNGBG_HFHKCEHKLPL_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define MKGDALKNGBG_IIIDPCDOOHM_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define MKGDALKNGBG_IOLLDGHPOEK_OFFSET UNITYSDK_OFFSET(0x758780)
#define MKGDALKNGBG_KBFHJFBHADJ_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define MKGDALKNGBG_LHLEAMBFLCO_OFFSET UNITYSDK_OFFSET(0x757190)
#define MKGDALKNGBG_NFADBDJFLFB_OFFSET UNITYSDK_OFFSET(0x763920)
#define MKGDALKNGBG_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define MKGDALKNGBG_NLEKMDLKBCK_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define MKGDALKNGBG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1CFE2130)
#define MKGDALKNGBG_PAEHJOMBOFA_OFFSET UNITYSDK_OFFSET(0x756D50)
#define MKGDALKNGBG_PPJICBLKCKB_OFFSET UNITYSDK_OFFSET(0x757330)
#define MKGDALKNGBG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MKGDALKNGBG_TypeDefinitionIndex = 11345;

struct alignas(4) MKGDALKNGBG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGDALKNGBG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKGDALKNGBG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* NLEKMDLKBCK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGDALKNGBG_NLEKMDLKBCK_OFFSET))(this);
	}

	/*
	::MKGDALKNGBG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MKGDALKNGBG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKGDALKNGBG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 HCJDFLCNFOK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGDALKNGBG_HCJDFLCNFOK_OFFSET))(this);
	}

	::System::String* CCGKILGIJAF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGDALKNGBG_CCGKILGIJAF_OFFSET))(this);
	}

	::System::String* PAEHJOMBOFA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGDALKNGBG_PAEHJOMBOFA_OFFSET))(this);
	}

	::System::String* LHLEAMBFLCO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGDALKNGBG_LHLEAMBFLCO_OFFSET))(this);
	}

	::System::Int32 IOLLDGHPOEK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGDALKNGBG_IOLLDGHPOEK_OFFSET))(this);
	}

	::System::String* HFHKCEHKLPL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGDALKNGBG_HFHKCEHKLPL_OFFSET))(this);
	}

	::System::Int32 PPJICBLKCKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGDALKNGBG_PPJICBLKCKB_OFFSET))(this);
	}

	::System::String* KBFHJFBHADJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGDALKNGBG_KBFHJFBHADJ_OFFSET))(this);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGDALKNGBG_NKCNGLADFNA_OFFSET))(this);
	}

	::System::String* IIIDPCDOOHM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGDALKNGBG_IIIDPCDOOHM_OFFSET))(this);
	}

	::System::Boolean NFADBDJFLFB(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MKGDALKNGBG_NFADBDJFLFB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* FLMKIJOPCIK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGDALKNGBG_FLMKIJOPCIK_OFFSET))(this);
	}

	/*
	static ::MKGDALKNGBG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MKGDALKNGBG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MKGDALKNGBG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};

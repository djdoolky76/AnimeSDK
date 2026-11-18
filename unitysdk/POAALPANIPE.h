#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define POAALPANIPE_ADLPJMBJLHA_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define POAALPANIPE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define POAALPANIPE_CCHKHIIMAAG_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define POAALPANIPE_FMMCOBPPNNH_OFFSET UNITYSDK_OFFSET(0x754A70)
#define POAALPANIPE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define POAALPANIPE_HOCKHAAPODL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define POAALPANIPE_HPABLIEDGJO_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define POAALPANIPE_IDDHBJHJNDN_OFFSET UNITYSDK_OFFSET(0x761240)
#define POAALPANIPE_IGGJJFPCJNL_OFFSET UNITYSDK_OFFSET(0x756360)
#define POAALPANIPE_IIICDBPMACF_OFFSET UNITYSDK_OFFSET(0x755790)
#define POAALPANIPE_JAPGAFJPCDH_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define POAALPANIPE_JIJOBGLBHOL_OFFSET UNITYSDK_OFFSET(0x754C20)
#define POAALPANIPE_NJHNDMDBLEN_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define POAALPANIPE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1EE0B1E0)
#define POAALPANIPE_OPNFOMNJDAB_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define POAALPANIPE_PDHGCENDCFI_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define POAALPANIPE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int POAALPANIPE_TypeDefinitionIndex = 10658;

struct alignas(4) POAALPANIPE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + POAALPANIPE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POAALPANIPE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean FMMCOBPPNNH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + POAALPANIPE_FMMCOBPPNNH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean OPNFOMNJDAB(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + POAALPANIPE_OPNFOMNJDAB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 IDDHBJHJNDN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POAALPANIPE_IDDHBJHJNDN_OFFSET))(this);
	}

	/*
	static ::POAALPANIPE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::POAALPANIPE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + POAALPANIPE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 PDHGCENDCFI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POAALPANIPE_PDHGCENDCFI_OFFSET))(this);
	}

	::System::Int32 IIICDBPMACF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POAALPANIPE_IIICDBPMACF_OFFSET))(this);
	}

	::System::Boolean NJHNDMDBLEN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + POAALPANIPE_NJHNDMDBLEN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean HPABLIEDGJO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + POAALPANIPE_HPABLIEDGJO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 JIJOBGLBHOL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POAALPANIPE_JIJOBGLBHOL_OFFSET))(this);
	}

	::System::Int32 HOCKHAAPODL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POAALPANIPE_HOCKHAAPODL_OFFSET))(this);
	}

	::System::Int32 ADLPJMBJLHA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POAALPANIPE_ADLPJMBJLHA_OFFSET))(this);
	}

	::System::Boolean CCHKHIIMAAG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + POAALPANIPE_CCHKHIIMAAG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean IGGJJFPCJNL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + POAALPANIPE_IGGJJFPCJNL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 JAPGAFJPCDH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POAALPANIPE_JAPGAFJPCDH_OFFSET))(this);
	}

	/*
	::POAALPANIPE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::POAALPANIPE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POAALPANIPE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};

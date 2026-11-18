#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GBNOIAAMAMG_AHHNNLBLJLG_OFFSET UNITYSDK_OFFSET(0x755D20)
#define GBNOIAAMAMG_AHPADFGBCHK_OFFSET UNITYSDK_OFFSET(0x7A69D0)
#define GBNOIAAMAMG_AODLLGEIHKB_OFFSET UNITYSDK_OFFSET(0x754920)
#define GBNOIAAMAMG_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define GBNOIAAMAMG_BBPONMKOLJI_OFFSET UNITYSDK_OFFSET(0x7575F0)
#define GBNOIAAMAMG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GBNOIAAMAMG_DECAMCOMLKJ_OFFSET UNITYSDK_OFFSET(0x761710)
#define GBNOIAAMAMG_DJEEIGPHMED_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define GBNOIAAMAMG_DKDKNFIBODP_OFFSET UNITYSDK_OFFSET(0x758780)
#define GBNOIAAMAMG_EFIBMFCFBLN_OFFSET UNITYSDK_OFFSET(0x755E40)
#define GBNOIAAMAMG_FBPDHKICNBG_OFFSET UNITYSDK_OFFSET(0x7D4550)
#define GBNOIAAMAMG_FHENIBMCJBB_OFFSET UNITYSDK_OFFSET(0x760650)
#define GBNOIAAMAMG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GBNOIAAMAMG_GFALPBCMEIC_OFFSET UNITYSDK_OFFSET(0x757E20)
#define GBNOIAAMAMG_IGPBGONOENL_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define GBNOIAAMAMG_IMFELMMICNE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GBNOIAAMAMG_KHBFBCLCDLA_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define GBNOIAAMAMG_KMHPIDHPPGL_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define GBNOIAAMAMG_MLMPIEEGOGH_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define GBNOIAAMAMG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A4D1E90)
#define GBNOIAAMAMG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GBNOIAAMAMG_TypeDefinitionIndex = 11490;

struct alignas(4) GBNOIAAMAMG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNOIAAMAMG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GBNOIAAMAMG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::GBNOIAAMAMG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GBNOIAAMAMG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GBNOIAAMAMG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 AHHNNLBLJLG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNOIAAMAMG_AHHNNLBLJLG_OFFSET))(this);
	}

	::System::Int32 AODLLGEIHKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNOIAAMAMG_AODLLGEIHKB_OFFSET))(this);
	}

	::System::String* DJEEIGPHMED()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNOIAAMAMG_DJEEIGPHMED_OFFSET))(this);
	}

	::System::String* IGPBGONOENL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNOIAAMAMG_IGPBGONOENL_OFFSET))(this);
	}

	::System::Boolean AHPADFGBCHK(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + GBNOIAAMAMG_AHPADFGBCHK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* GFALPBCMEIC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNOIAAMAMG_GFALPBCMEIC_OFFSET))(this);
	}

	::System::String* MLMPIEEGOGH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNOIAAMAMG_MLMPIEEGOGH_OFFSET))(this);
	}

	/*
	static ::GBNOIAAMAMG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GBNOIAAMAMG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GBNOIAAMAMG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* DECAMCOMLKJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNOIAAMAMG_DECAMCOMLKJ_OFFSET))(this);
	}

	::System::Boolean FBPDHKICNBG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNOIAAMAMG_FBPDHKICNBG_OFFSET))(this);
	}

	::System::Boolean BBPONMKOLJI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNOIAAMAMG_BBPONMKOLJI_OFFSET))(this);
	}

	::System::Int32 DKDKNFIBODP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNOIAAMAMG_DKDKNFIBODP_OFFSET))(this);
	}

	::System::Int32 EFIBMFCFBLN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNOIAAMAMG_EFIBMFCFBLN_OFFSET))(this);
	}

	::System::Int32 KHBFBCLCDLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNOIAAMAMG_KHBFBCLCDLA_OFFSET))(this);
	}

	::System::Int32 FHENIBMCJBB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNOIAAMAMG_FHENIBMCJBB_OFFSET))(this);
	}

	::System::Int32 IMFELMMICNE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNOIAAMAMG_IMFELMMICNE_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNOIAAMAMG_APCKPKCNFJE_OFFSET))(this);
	}

	::System::String* KMHPIDHPPGL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNOIAAMAMG_KMHPIDHPPGL_OFFSET))(this);
	}
};

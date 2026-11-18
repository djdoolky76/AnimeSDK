#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MEIJEDGKILG_AFGNHKNIMEL_OFFSET UNITYSDK_OFFSET(0x754A70)
#define MEIJEDGKILG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MEIJEDGKILG_DIGOHCJDFFJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MEIJEDGKILG_EKBLNLLMIHP_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define MEIJEDGKILG_GCANKPHCPDE_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define MEIJEDGKILG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MEIJEDGKILG_HGKPEMHFHNM_OFFSET UNITYSDK_OFFSET(0x755790)
#define MEIJEDGKILG_HICGLBMMMPK_OFFSET UNITYSDK_OFFSET(0x756720)
#define MEIJEDGKILG_ICCNAJJLHMH_OFFSET UNITYSDK_OFFSET(0x756D50)
#define MEIJEDGKILG_KIHPMNKLNOL_OFFSET UNITYSDK_OFFSET(0x754D50)
#define MEIJEDGKILG_KOPGBNDOELB_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define MEIJEDGKILG_LGOCBNIJIAJ_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define MEIJEDGKILG_NEBAFJMNACJ_OFFSET UNITYSDK_OFFSET(0x7562E0)
#define MEIJEDGKILG_OAGLBOJFGNL_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define MEIJEDGKILG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B311E50)
#define MEIJEDGKILG_OEGHPEJJGNG_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define MEIJEDGKILG_PCJCPFEKOKL_OFFSET UNITYSDK_OFFSET(0x754C20)
#define MEIJEDGKILG_PNIFKCKHANA_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define MEIJEDGKILG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MEIJEDGKILG_TypeDefinitionIndex = 15043;

struct alignas(4) MEIJEDGKILG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIJEDGKILG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEIJEDGKILG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DIGOHCJDFFJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIJEDGKILG_DIGOHCJDFFJ_OFFSET))(this);
	}

	/*
	::MEIJEDGKILG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MEIJEDGKILG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEIJEDGKILG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 HICGLBMMMPK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIJEDGKILG_HICGLBMMMPK_OFFSET))(this);
	}

	/*
	static ::MEIJEDGKILG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MEIJEDGKILG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MEIJEDGKILG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean OAGLBOJFGNL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MEIJEDGKILG_OAGLBOJFGNL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* ICCNAJJLHMH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIJEDGKILG_ICCNAJJLHMH_OFFSET))(this);
	}

	::System::Int32 KIHPMNKLNOL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIJEDGKILG_KIHPMNKLNOL_OFFSET))(this);
	}

	::System::Int32 KOPGBNDOELB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIJEDGKILG_KOPGBNDOELB_OFFSET))(this);
	}

	::System::Int32 LGOCBNIJIAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIJEDGKILG_LGOCBNIJIAJ_OFFSET))(this);
	}

	::System::Int32 HGKPEMHFHNM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIJEDGKILG_HGKPEMHFHNM_OFFSET))(this);
	}

	::System::Boolean NEBAFJMNACJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MEIJEDGKILG_NEBAFJMNACJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean PNIFKCKHANA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MEIJEDGKILG_PNIFKCKHANA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean GCANKPHCPDE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MEIJEDGKILG_GCANKPHCPDE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean OEGHPEJJGNG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MEIJEDGKILG_OEGHPEJJGNG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean AFGNHKNIMEL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MEIJEDGKILG_AFGNHKNIMEL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 EKBLNLLMIHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIJEDGKILG_EKBLNLLMIHP_OFFSET))(this);
	}

	::System::Int32 PCJCPFEKOKL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIJEDGKILG_PCJCPFEKOKL_OFFSET))(this);
	}
};

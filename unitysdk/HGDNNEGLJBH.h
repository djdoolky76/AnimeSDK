#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DGDELGEEGCE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HGDNNEGLJBH_ABCLIDNADEG_OFFSET UNITYSDK_OFFSET(0x754920)
#define HGDNNEGLJBH_AEEMLAABOBO_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define HGDNNEGLJBH_BAHMLPGBFNC_OFFSET UNITYSDK_OFFSET(0x779C80)
#define HGDNNEGLJBH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HGDNNEGLJBH_BLFKNELJFFB_OFFSET UNITYSDK_OFFSET(0x755D20)
#define HGDNNEGLJBH_BOKMFELIMPE_OFFSET UNITYSDK_OFFSET(0x754A70)
#define HGDNNEGLJBH_DKAPJKAOHCA_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define HGDNNEGLJBH_DNFHGBNILLL_OFFSET UNITYSDK_OFFSET(0x754D50)
#define HGDNNEGLJBH_EFAPCMGDKAN_OFFSET UNITYSDK_OFFSET(0x7562E0)
#define HGDNNEGLJBH_FDNGOAIHGJG_OFFSET UNITYSDK_OFFSET(0x756720)
#define HGDNNEGLJBH_FGJMBNGAPLO_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define HGDNNEGLJBH_FHJKANNMPMK_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define HGDNNEGLJBH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HGDNNEGLJBH_GLLBJIAMKOF_OFFSET UNITYSDK_OFFSET(0x756D50)
#define HGDNNEGLJBH_HBJAIFJNMIA_OFFSET UNITYSDK_OFFSET(0x755190)
#define HGDNNEGLJBH_HCFBGOIPBMP_OFFSET UNITYSDK_OFFSET(0x758200)
#define HGDNNEGLJBH_IAGOADEDPNJ_OFFSET UNITYSDK_OFFSET(0x756440)
#define HGDNNEGLJBH_ICCAIEMDKNH_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define HGDNNEGLJBH_KIFKLBKPBJL_OFFSET UNITYSDK_OFFSET(0x756B90)
#define HGDNNEGLJBH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x160F34D0)
#define HGDNNEGLJBH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HGDNNEGLJBH_TypeDefinitionIndex = 16924;

struct alignas(4) HGDNNEGLJBH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDNNEGLJBH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HGDNNEGLJBH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BAHMLPGBFNC(::System::Int32 HPMEONKHFGG, ::DGDELGEEGCE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DGDELGEEGCE&))((::PBYTE)hIl2Cpp + HGDNNEGLJBH_BAHMLPGBFNC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::HGDNNEGLJBH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HGDNNEGLJBH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HGDNNEGLJBH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* GLLBJIAMKOF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDNNEGLJBH_GLLBJIAMKOF_OFFSET))(this);
	}

	/*
	static ::HGDNNEGLJBH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HGDNNEGLJBH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HGDNNEGLJBH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 DKAPJKAOHCA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDNNEGLJBH_DKAPJKAOHCA_OFFSET))(this);
	}

	::System::Int32 ABCLIDNADEG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDNNEGLJBH_ABCLIDNADEG_OFFSET))(this);
	}

	::System::Int32 AEEMLAABOBO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDNNEGLJBH_AEEMLAABOBO_OFFSET))(this);
	}

	::System::Int32 ICCAIEMDKNH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDNNEGLJBH_ICCAIEMDKNH_OFFSET))(this);
	}

	::System::Int32 HBJAIFJNMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDNNEGLJBH_HBJAIFJNMIA_OFFSET))(this);
	}

	::System::Int32 FHJKANNMPMK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDNNEGLJBH_FHJKANNMPMK_OFFSET))(this);
	}

	::System::Boolean HCFBGOIPBMP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HGDNNEGLJBH_HCFBGOIPBMP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 DNFHGBNILLL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDNNEGLJBH_DNFHGBNILLL_OFFSET))(this);
	}

	::System::Int32 BLFKNELJFFB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDNNEGLJBH_BLFKNELJFFB_OFFSET))(this);
	}

	::System::Int32 KIFKLBKPBJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDNNEGLJBH_KIFKLBKPBJL_OFFSET))(this);
	}

	::System::Int32 IAGOADEDPNJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDNNEGLJBH_IAGOADEDPNJ_OFFSET))(this);
	}

	::System::Int32 FDNGOAIHGJG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDNNEGLJBH_FDNGOAIHGJG_OFFSET))(this);
	}

	::System::Boolean FGJMBNGAPLO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HGDNNEGLJBH_FGJMBNGAPLO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean BOKMFELIMPE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HGDNNEGLJBH_BOKMFELIMPE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean EFAPCMGDKAN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HGDNNEGLJBH_EFAPCMGDKAN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};

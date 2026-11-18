#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define LPJIKIMGBCK_ACOCKCAKDBM_OFFSET UNITYSDK_OFFSET(0x758200)
#define LPJIKIMGBCK_BBIGPMKHJIA_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define LPJIKIMGBCK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LPJIKIMGBCK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LPJIKIMGBCK_GOALIHGGJKP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LPJIKIMGBCK_HFAPPMHIJKC_OFFSET UNITYSDK_OFFSET(0x763920)
#define LPJIKIMGBCK_ILKCLNBGEBB_OFFSET UNITYSDK_OFFSET(0x757330)
#define LPJIKIMGBCK_KFKBCOELDJF_OFFSET UNITYSDK_OFFSET(0x756570)
#define LPJIKIMGBCK_LAPHKEBIOAJ_OFFSET UNITYSDK_OFFSET(0x755D70)
#define LPJIKIMGBCK_LNPMGCDNIPG_OFFSET UNITYSDK_OFFSET(0x756220)
#define LPJIKIMGBCK_MFMAPENICGB_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define LPJIKIMGBCK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BF58F40)
#define LPJIKIMGBCK_PCDCCNLBFOM_OFFSET UNITYSDK_OFFSET(0x758780)
#define LPJIKIMGBCK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LPJIKIMGBCK_TypeDefinitionIndex = 11377;

struct alignas(4) LPJIKIMGBCK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJIKIMGBCK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LPJIKIMGBCK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PCDCCNLBFOM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJIKIMGBCK_PCDCCNLBFOM_OFFSET))(this);
	}

	::System::Boolean ACOCKCAKDBM(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LPJIKIMGBCK_ACOCKCAKDBM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::LPJIKIMGBCK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LPJIKIMGBCK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LPJIKIMGBCK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LNPMGCDNIPG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJIKIMGBCK_LNPMGCDNIPG_OFFSET))(this);
	}

	::System::Int32 BBIGPMKHJIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJIKIMGBCK_BBIGPMKHJIA_OFFSET))(this);
	}

	::System::Int32 GOALIHGGJKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJIKIMGBCK_GOALIHGGJKP_OFFSET))(this);
	}

	::System::Boolean HFAPPMHIJKC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LPJIKIMGBCK_HFAPPMHIJKC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ILKCLNBGEBB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJIKIMGBCK_ILKCLNBGEBB_OFFSET))(this);
	}

	::System::Boolean LAPHKEBIOAJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LPJIKIMGBCK_LAPHKEBIOAJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean KFKBCOELDJF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LPJIKIMGBCK_KFKBCOELDJF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 MFMAPENICGB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJIKIMGBCK_MFMAPENICGB_OFFSET))(this);
	}

	/*
	static ::LPJIKIMGBCK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LPJIKIMGBCK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LPJIKIMGBCK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};

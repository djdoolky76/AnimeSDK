#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KOKBABDIJDO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KOKBABDIJDO_AGBEKOLIMDM_OFFSET UNITYSDK_OFFSET(0x758780)
#define KOKBABDIJDO_AGCOEJNHLHG_OFFSET UNITYSDK_OFFSET(0x755790)
#define KOKBABDIJDO_AOAPEGOLCDK_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define KOKBABDIJDO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KOKBABDIJDO_BLEONALLLBM_OFFSET UNITYSDK_OFFSET(0x756360)
#define KOKBABDIJDO_GDDLMPNLNOA_OFFSET UNITYSDK_OFFSET(0x754D50)
#define KOKBABDIJDO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KOKBABDIJDO_IICPECCLAHP_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define KOKBABDIJDO_IIDEFADNACK_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define KOKBABDIJDO_IPLCKPJPFAF_OFFSET UNITYSDK_OFFSET(0x754A70)
#define KOKBABDIJDO_KIBOJJGLOON_OFFSET UNITYSDK_OFFSET(0x755E40)
#define KOKBABDIJDO_LMNLFCNBNEB_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define KOKBABDIJDO_LPKIMOOIKGP_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define KOKBABDIJDO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KOKBABDIJDO_TypeDefinitionIndex = 9531;

struct alignas(4) KOKBABDIJDO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKBABDIJDO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KOKBABDIJDO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GDDLMPNLNOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKBABDIJDO_GDDLMPNLNOA_OFFSET))(this);
	}

	::System::Int32 KIBOJJGLOON()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKBABDIJDO_KIBOJJGLOON_OFFSET))(this);
	}

	::System::Int32 IICPECCLAHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKBABDIJDO_IICPECCLAHP_OFFSET))(this);
	}

	::System::Int32 AGBEKOLIMDM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKBABDIJDO_AGBEKOLIMDM_OFFSET))(this);
	}

	::System::Int32 AGCOEJNHLHG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKBABDIJDO_AGCOEJNHLHG_OFFSET))(this);
	}

	::System::Boolean BLEONALLLBM(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KOKBABDIJDO_BLEONALLLBM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::KOKBABDIJDO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KOKBABDIJDO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KOKBABDIJDO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean IIDEFADNACK(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KOKBABDIJDO_IIDEFADNACK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKBABDIJDO_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean AOAPEGOLCDK(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KOKBABDIJDO_AOAPEGOLCDK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean IPLCKPJPFAF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KOKBABDIJDO_IPLCKPJPFAF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 LPKIMOOIKGP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKBABDIJDO_LPKIMOOIKGP_OFFSET))(this);
	}

	::System::Int32 LMNLFCNBNEB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKBABDIJDO_LMNLFCNBNEB_OFFSET))(this);
	}
};

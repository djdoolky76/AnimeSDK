#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DODKHHAODOE_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DODKHHAODOE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DODKHHAODOE_CKKKHABGCCM_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define DODKHHAODOE_CMIFCIEFDDA_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define DODKHHAODOE_COAHPIDLPAG_OFFSET UNITYSDK_OFFSET(0x754970)
#define DODKHHAODOE_CPALBCABGNN_OFFSET UNITYSDK_OFFSET(0x754C20)
#define DODKHHAODOE_DCJJPPKGKNC_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define DODKHHAODOE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DODKHHAODOE_KGKLGEGBHON_OFFSET UNITYSDK_OFFSET(0x757290)
#define DODKHHAODOE_MEAFHFHAICP_OFFSET UNITYSDK_OFFSET(0x755C70)
#define DODKHHAODOE_MHDJLAEBICE_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define DODKHHAODOE_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DODKHHAODOE_PIPBPLEIPFK_OFFSET UNITYSDK_OFFSET(0x754920)
#define DODKHHAODOE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DODKHHAODOE_TypeDefinitionIndex = 14171;

struct alignas(4) DODKHHAODOE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DODKHHAODOE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DODKHHAODOE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 COAHPIDLPAG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DODKHHAODOE_COAHPIDLPAG_OFFSET))(this);
	}

	::System::Int32 CPALBCABGNN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DODKHHAODOE_CPALBCABGNN_OFFSET))(this);
	}

	::System::Int32 PIPBPLEIPFK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DODKHHAODOE_PIPBPLEIPFK_OFFSET))(this);
	}

	/*
	::DODKHHAODOE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DODKHHAODOE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DODKHHAODOE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MEAFHFHAICP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DODKHHAODOE_MEAFHFHAICP_OFFSET))(this);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DODKHHAODOE_NKCNGLADFNA_OFFSET))(this);
	}

	::System::Boolean CKKKHABGCCM(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + DODKHHAODOE_CKKKHABGCCM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* KGKLGEGBHON()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DODKHHAODOE_KGKLGEGBHON_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DODKHHAODOE_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 DCJJPPKGKNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DODKHHAODOE_DCJJPPKGKNC_OFFSET))(this);
	}

	::System::Int32 MHDJLAEBICE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DODKHHAODOE_MHDJLAEBICE_OFFSET))(this);
	}

	::System::Boolean CMIFCIEFDDA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + DODKHHAODOE_CMIFCIEFDDA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};

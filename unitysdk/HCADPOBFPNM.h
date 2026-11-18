#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define HCADPOBFPNM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HCADPOBFPNM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HCADPOBFPNM_CFOJDGDMIAF_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define HCADPOBFPNM_CHHBKDIKOOO_OFFSET UNITYSDK_OFFSET(0x756360)
#define HCADPOBFPNM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HCADPOBFPNM_KDLNOCCBEBN_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define HCADPOBFPNM_KGPBFGGOHBB_OFFSET UNITYSDK_OFFSET(0x755790)
#define HCADPOBFPNM_KNKCADCJGPN_OFFSET UNITYSDK_OFFSET(0x7562E0)
#define HCADPOBFPNM_MLDHACLAMIB_OFFSET UNITYSDK_OFFSET(0x756720)
#define HCADPOBFPNM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HCADPOBFPNM_TypeDefinitionIndex = 12630;

struct alignas(4) HCADPOBFPNM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCADPOBFPNM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCADPOBFPNM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean KNKCADCJGPN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HCADPOBFPNM_KNKCADCJGPN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean CHHBKDIKOOO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HCADPOBFPNM_CHHBKDIKOOO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 MLDHACLAMIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCADPOBFPNM_MLDHACLAMIB_OFFSET))(this);
	}

	::System::Int32 KDLNOCCBEBN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCADPOBFPNM_KDLNOCCBEBN_OFFSET))(this);
	}

	::System::Int32 KGPBFGGOHBB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCADPOBFPNM_KGPBFGGOHBB_OFFSET))(this);
	}

	/*
	::HCADPOBFPNM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HCADPOBFPNM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCADPOBFPNM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean CFOJDGDMIAF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HCADPOBFPNM_CFOJDGDMIAF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCADPOBFPNM_ACOEONABOJL_OFFSET))(this);
	}
};

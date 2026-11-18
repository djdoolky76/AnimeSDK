#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define AMFJEECMFOL_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AMFJEECMFOL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AMFJEECMFOL_EKMICOCOPMJ_OFFSET UNITYSDK_OFFSET(0x756B90)
#define AMFJEECMFOL_FGIKGPCCGJD_OFFSET UNITYSDK_OFFSET(0x758780)
#define AMFJEECMFOL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AMFJEECMFOL_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define AMFJEECMFOL_JCCHPNDICND_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define AMFJEECMFOL_KBCGPJHFKOH_OFFSET UNITYSDK_OFFSET(0x754D50)
#define AMFJEECMFOL_LPHONAJLEJL_OFFSET UNITYSDK_OFFSET(0x755C70)
#define AMFJEECMFOL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1ADAAE90)
#define AMFJEECMFOL_PFIHIEGJJFJ_OFFSET UNITYSDK_OFFSET(0x755E40)
#define AMFJEECMFOL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AMFJEECMFOL_TypeDefinitionIndex = 11935;

struct alignas(4) AMFJEECMFOL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFJEECMFOL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMFJEECMFOL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFJEECMFOL_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 EKMICOCOPMJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFJEECMFOL_EKMICOCOPMJ_OFFSET))(this);
	}

	::System::Int32 PFIHIEGJJFJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFJEECMFOL_PFIHIEGJJFJ_OFFSET))(this);
	}

	/*
	static ::AMFJEECMFOL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::AMFJEECMFOL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + AMFJEECMFOL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::AMFJEECMFOL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AMFJEECMFOL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMFJEECMFOL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 KBCGPJHFKOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFJEECMFOL_KBCGPJHFKOH_OFFSET))(this);
	}

	::System::Boolean JCCHPNDICND(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + AMFJEECMFOL_JCCHPNDICND_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 LPHONAJLEJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFJEECMFOL_LPHONAJLEJL_OFFSET))(this);
	}

	::System::Int32 FGIKGPCCGJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFJEECMFOL_FGIKGPCCGJD_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFJEECMFOL_ACOEONABOJL_OFFSET))(this);
	}
};

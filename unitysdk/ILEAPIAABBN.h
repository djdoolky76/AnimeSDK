#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ILEAPIAABBN_BEACIHBKFLA_OFFSET UNITYSDK_OFFSET(0x754970)
#define ILEAPIAABBN_BFNOAJPIEBF_OFFSET UNITYSDK_OFFSET(0x758200)
#define ILEAPIAABBN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ILEAPIAABBN_EBPCMLBDFBF_OFFSET UNITYSDK_OFFSET(0x756B10)
#define ILEAPIAABBN_EDAJJJIPILC_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define ILEAPIAABBN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ILEAPIAABBN_GNCLPDKENEH_OFFSET UNITYSDK_OFFSET(0x754B50)
#define ILEAPIAABBN_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x756B90)
#define ILEAPIAABBN_IHDOHNPNCPB_OFFSET UNITYSDK_OFFSET(0x7563E0)
#define ILEAPIAABBN_KONFEPNHDGK_OFFSET UNITYSDK_OFFSET(0x756780)
#define ILEAPIAABBN_NLDDMCJBOEM_OFFSET UNITYSDK_OFFSET(0x755890)
#define ILEAPIAABBN_NNLMHKFPNNG_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ILEAPIAABBN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x152E93C0)
#define ILEAPIAABBN_PHDBPEOIOMA_OFFSET UNITYSDK_OFFSET(0x756440)
#define ILEAPIAABBN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ILEAPIAABBN_TypeDefinitionIndex = 17403;

struct alignas(4) ILEAPIAABBN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEAPIAABBN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ILEAPIAABBN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* EBPCMLBDFBF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEAPIAABBN_EBPCMLBDFBF_OFFSET))(this);
	}

	::System::Int32 NNLMHKFPNNG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEAPIAABBN_NNLMHKFPNNG_OFFSET))(this);
	}

	::System::Int32 GNCLPDKENEH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEAPIAABBN_GNCLPDKENEH_OFFSET))(this);
	}

	::System::Boolean KONFEPNHDGK(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + ILEAPIAABBN_KONFEPNHDGK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 PHDBPEOIOMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEAPIAABBN_PHDBPEOIOMA_OFFSET))(this);
	}

	/*
	::ILEAPIAABBN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ILEAPIAABBN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ILEAPIAABBN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BEACIHBKFLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEAPIAABBN_BEACIHBKFLA_OFFSET))(this);
	}

	::System::Int32 EDAJJJIPILC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEAPIAABBN_EDAJJJIPILC_OFFSET))(this);
	}

	::System::Int32 NLDDMCJBOEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEAPIAABBN_NLDDMCJBOEM_OFFSET))(this);
	}

	::System::Int32 IHDOHNPNCPB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEAPIAABBN_IHDOHNPNCPB_OFFSET))(this);
	}

	/*
	static ::ILEAPIAABBN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ILEAPIAABBN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ILEAPIAABBN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean BFNOAJPIEBF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + ILEAPIAABBN_BFNOAJPIEBF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEAPIAABBN_HKELPCLHLEC_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FLKCLEEJBMI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FLKCLEEJBMI_BMJNPIDOPNO_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define FLKCLEEJBMI_DENMGPNFBMN_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FLKCLEEJBMI_DIGBKKFFDNM_OFFSET UNITYSDK_OFFSET(0x754F10)
#define FLKCLEEJBMI_DOHANFCIALC_OFFSET UNITYSDK_OFFSET(0x755A00)
#define FLKCLEEJBMI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FLKCLEEJBMI_HMPFPCCBKMJ_OFFSET UNITYSDK_OFFSET(0x756D50)
#define FLKCLEEJBMI_LNHLCEJBOIN_OFFSET UNITYSDK_OFFSET(0x756B10)
#define FLKCLEEJBMI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FLKCLEEJBMI_TypeDefinitionIndex = 16103;

struct alignas(4) FLKCLEEJBMI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKCLEEJBMI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FLKCLEEJBMI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DENMGPNFBMN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKCLEEJBMI_DENMGPNFBMN_OFFSET))(this);
	}

	::System::String* BMJNPIDOPNO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKCLEEJBMI_BMJNPIDOPNO_OFFSET))(this);
	}

	::System::String* DOHANFCIALC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKCLEEJBMI_DOHANFCIALC_OFFSET))(this);
	}

	/*
	::FLKCLEEJBMI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FLKCLEEJBMI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FLKCLEEJBMI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* HMPFPCCBKMJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKCLEEJBMI_HMPFPCCBKMJ_OFFSET))(this);
	}

	::System::String* DIGBKKFFDNM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKCLEEJBMI_DIGBKKFFDNM_OFFSET))(this);
	}

	::System::String* LNHLCEJBOIN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKCLEEJBMI_LNHLCEJBOIN_OFFSET))(this);
	}
};

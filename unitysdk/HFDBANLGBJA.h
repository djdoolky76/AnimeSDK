#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HFDBANLGBJA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HFDBANLGBJA_BIFAMEHNOJF_OFFSET UNITYSDK_OFFSET(0x755E40)
#define HFDBANLGBJA_CDDIKECJMFK_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define HFDBANLGBJA_EJAGJEGAFAO_OFFSET UNITYSDK_OFFSET(0x755A00)
#define HFDBANLGBJA_EMFOPEBKCIO_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define HFDBANLGBJA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HFDBANLGBJA_GFGFBMBNBLG_OFFSET UNITYSDK_OFFSET(0x756B10)
#define HFDBANLGBJA_HMBDDGBNHMN_OFFSET UNITYSDK_OFFSET(0x755890)
#define HFDBANLGBJA_LNEOLCJOBAF_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define HFDBANLGBJA_OKGJDGIJMMO_OFFSET UNITYSDK_OFFSET(0x754F10)
#define HFDBANLGBJA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HFDBANLGBJA_TypeDefinitionIndex = 10434;

struct alignas(4) HFDBANLGBJA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDBANLGBJA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFDBANLGBJA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* GFGFBMBNBLG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDBANLGBJA_GFGFBMBNBLG_OFFSET))(this);
	}

	::System::Int32 BIFAMEHNOJF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDBANLGBJA_BIFAMEHNOJF_OFFSET))(this);
	}

	::System::String* CDDIKECJMFK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDBANLGBJA_CDDIKECJMFK_OFFSET))(this);
	}

	/*
	::HFDBANLGBJA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HFDBANLGBJA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFDBANLGBJA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* OKGJDGIJMMO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDBANLGBJA_OKGJDGIJMMO_OFFSET))(this);
	}

	::System::Int32 HMBDDGBNHMN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDBANLGBJA_HMBDDGBNHMN_OFFSET))(this);
	}

	::System::String* LNEOLCJOBAF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDBANLGBJA_LNEOLCJOBAF_OFFSET))(this);
	}

	::System::Int32 EMFOPEBKCIO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDBANLGBJA_EMFOPEBKCIO_OFFSET))(this);
	}

	::System::String* EJAGJEGAFAO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDBANLGBJA_EJAGJEGAFAO_OFFSET))(this);
	}
};

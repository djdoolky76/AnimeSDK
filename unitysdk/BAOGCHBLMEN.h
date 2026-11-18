#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BAOGCHBLMEN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BAOGCHBLMEN_CBOJKDLALMG_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define BAOGCHBLMEN_DKPFPHDEDFD_OFFSET UNITYSDK_OFFSET(0x7562E0)
#define BAOGCHBLMEN_ENGMHDKODIL_OFFSET UNITYSDK_OFFSET(0x756B90)
#define BAOGCHBLMEN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BAOGCHBLMEN_JCDEGFLOFNG_OFFSET UNITYSDK_OFFSET(0x756B10)
#define BAOGCHBLMEN_JNAPIIJFCPL_OFFSET UNITYSDK_OFFSET(0x755D20)
#define BAOGCHBLMEN_KEOCPKGEEMN_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BAOGCHBLMEN_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x754970)
#define BAOGCHBLMEN_OKAOBDHDJLB_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define BAOGCHBLMEN_OLPFCKIFFLP_OFFSET UNITYSDK_OFFSET(0x756720)
#define BAOGCHBLMEN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BAOGCHBLMEN_TypeDefinitionIndex = 14066;

struct alignas(4) BAOGCHBLMEN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAOGCHBLMEN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BAOGCHBLMEN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::BAOGCHBLMEN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BAOGCHBLMEN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BAOGCHBLMEN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAOGCHBLMEN_NFKFHJBEPGD_OFFSET))(this);
	}

	::System::Int32 ENGMHDKODIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAOGCHBLMEN_ENGMHDKODIL_OFFSET))(this);
	}

	::System::Int32 KEOCPKGEEMN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAOGCHBLMEN_KEOCPKGEEMN_OFFSET))(this);
	}

	::System::Int32 OKAOBDHDJLB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAOGCHBLMEN_OKAOBDHDJLB_OFFSET))(this);
	}

	::System::Int32 JNAPIIJFCPL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAOGCHBLMEN_JNAPIIJFCPL_OFFSET))(this);
	}

	::System::String* CBOJKDLALMG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAOGCHBLMEN_CBOJKDLALMG_OFFSET))(this);
	}

	::System::Boolean DKPFPHDEDFD(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BAOGCHBLMEN_DKPFPHDEDFD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 OLPFCKIFFLP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAOGCHBLMEN_OLPFCKIFFLP_OFFSET))(this);
	}

	::System::String* JCDEGFLOFNG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAOGCHBLMEN_JCDEGFLOFNG_OFFSET))(this);
	}
};

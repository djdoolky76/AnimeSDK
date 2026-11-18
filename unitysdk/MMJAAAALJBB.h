#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define MMJAAAALJBB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MMJAAAALJBB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MMJAAAALJBB_DPFDDHLBNGI_OFFSET UNITYSDK_OFFSET(0x755D20)
#define MMJAAAALJBB_FFCNBBBLHDE_OFFSET UNITYSDK_OFFSET(0x758780)
#define MMJAAAALJBB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MMJAAAALJBB_GFEEIMLGFHD_OFFSET UNITYSDK_OFFSET(0x754970)
#define MMJAAAALJBB_JDEDOIAJJCG_OFFSET UNITYSDK_OFFSET(0x756B90)
#define MMJAAAALJBB_LIIIHIIPNEO_OFFSET UNITYSDK_OFFSET(0x755C70)
#define MMJAAAALJBB_MCBCABAECOK_OFFSET UNITYSDK_OFFSET(0x754B50)
#define MMJAAAALJBB_MMNONDLBGIE_OFFSET UNITYSDK_OFFSET(0x755E40)
#define MMJAAAALJBB_NDOHJDGEHIM_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define MMJAAAALJBB_OGDNMJGFDMJ_OFFSET UNITYSDK_OFFSET(0x754920)
#define MMJAAAALJBB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MMJAAAALJBB_TypeDefinitionIndex = 14131;

struct alignas(4) MMJAAAALJBB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJAAAALJBB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMJAAAALJBB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GFEEIMLGFHD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJAAAALJBB_GFEEIMLGFHD_OFFSET))(this);
	}

	::System::Int32 OGDNMJGFDMJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJAAAALJBB_OGDNMJGFDMJ_OFFSET))(this);
	}

	::System::Int32 MCBCABAECOK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJAAAALJBB_MCBCABAECOK_OFFSET))(this);
	}

	::System::Int32 LIIIHIIPNEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJAAAALJBB_LIIIHIIPNEO_OFFSET))(this);
	}

	::System::Int32 MMNONDLBGIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJAAAALJBB_MMNONDLBGIE_OFFSET))(this);
	}

	::System::Int32 NDOHJDGEHIM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJAAAALJBB_NDOHJDGEHIM_OFFSET))(this);
	}

	/*
	::MMJAAAALJBB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MMJAAAALJBB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMJAAAALJBB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJAAAALJBB_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 FFCNBBBLHDE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJAAAALJBB_FFCNBBBLHDE_OFFSET))(this);
	}

	::System::Int32 JDEDOIAJJCG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJAAAALJBB_JDEDOIAJJCG_OFFSET))(this);
	}

	::System::Int32 DPFDDHLBNGI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJAAAALJBB_DPFDDHLBNGI_OFFSET))(this);
	}
};

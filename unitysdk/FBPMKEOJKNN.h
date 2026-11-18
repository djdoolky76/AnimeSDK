#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FBPMKEOJKNN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FBPMKEOJKNN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FBPMKEOJKNN_CDHGKKODAKF_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define FBPMKEOJKNN_FGOKNAJONOI_OFFSET UNITYSDK_OFFSET(0x756360)
#define FBPMKEOJKNN_FJFEFPGCBGM_OFFSET UNITYSDK_OFFSET(0x755E40)
#define FBPMKEOJKNN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FBPMKEOJKNN_GLMBKIEBFIE_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define FBPMKEOJKNN_HEDHLNCPMNC_OFFSET UNITYSDK_OFFSET(0x758780)
#define FBPMKEOJKNN_HJFPGDIIDBA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FBPMKEOJKNN_KCJAGJGEAFF_OFFSET UNITYSDK_OFFSET(0x755C70)
#define FBPMKEOJKNN_MKEOBJODDEG_OFFSET UNITYSDK_OFFSET(0x756B90)
#define FBPMKEOJKNN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1ADDEF20)
#define FBPMKEOJKNN_PGPIPGAOINM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define FBPMKEOJKNN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FBPMKEOJKNN_TypeDefinitionIndex = 10608;

struct alignas(4) FBPMKEOJKNN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPMKEOJKNN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FBPMKEOJKNN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::FBPMKEOJKNN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FBPMKEOJKNN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FBPMKEOJKNN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 CDHGKKODAKF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPMKEOJKNN_CDHGKKODAKF_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPMKEOJKNN_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 MKEOBJODDEG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPMKEOJKNN_MKEOBJODDEG_OFFSET))(this);
	}

	::System::Int32 PGPIPGAOINM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPMKEOJKNN_PGPIPGAOINM_OFFSET))(this);
	}

	::System::Int32 HEDHLNCPMNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPMKEOJKNN_HEDHLNCPMNC_OFFSET))(this);
	}

	::System::Int32 FJFEFPGCBGM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPMKEOJKNN_FJFEFPGCBGM_OFFSET))(this);
	}

	::System::Int32 GLMBKIEBFIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPMKEOJKNN_GLMBKIEBFIE_OFFSET))(this);
	}

	::System::Int32 HJFPGDIIDBA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPMKEOJKNN_HJFPGDIIDBA_OFFSET))(this);
	}

	/*
	static ::FBPMKEOJKNN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FBPMKEOJKNN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FBPMKEOJKNN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean FGOKNAJONOI(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FBPMKEOJKNN_FGOKNAJONOI_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 KCJAGJGEAFF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPMKEOJKNN_KCJAGJGEAFF_OFFSET))(this);
	}
};

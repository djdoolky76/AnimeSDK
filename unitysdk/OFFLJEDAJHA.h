#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OFFLJEDAJHA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OFFLJEDAJHA_AHHFJGMECHO_OFFSET UNITYSDK_OFFSET(0x757A30)
#define OFFLJEDAJHA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OFFLJEDAJHA_DGJAFCLNJCN_OFFSET UNITYSDK_OFFSET(0x7C3340)
#define OFFLJEDAJHA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OFFLJEDAJHA_JOJNCDLNJNM_OFFSET UNITYSDK_OFFSET(0x755570)
#define OFFLJEDAJHA_KNACJDJDHLO_OFFSET UNITYSDK_OFFSET(0x756510)
#define OFFLJEDAJHA_LMLJEAFNNKL_OFFSET UNITYSDK_OFFSET(0x757D20)
#define OFFLJEDAJHA_MLMPIEEGOGH_OFFSET UNITYSDK_OFFSET(0x757690)
#define OFFLJEDAJHA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B339F60)
#define OFFLJEDAJHA_OIKCBJKMNAF_OFFSET UNITYSDK_OFFSET(0x757830)
#define OFFLJEDAJHA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OFFLJEDAJHA_TypeDefinitionIndex = 17732;

struct alignas(4) OFFLJEDAJHA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFLJEDAJHA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OFFLJEDAJHA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::OFFLJEDAJHA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OFFLJEDAJHA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OFFLJEDAJHA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean OIKCBJKMNAF(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + OFFLJEDAJHA_OIKCBJKMNAF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* LMLJEAFNNKL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFLJEDAJHA_LMLJEAFNNKL_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFLJEDAJHA_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* MLMPIEEGOGH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFLJEDAJHA_MLMPIEEGOGH_OFFSET))(this);
	}

	::System::Int32 KNACJDJDHLO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFLJEDAJHA_KNACJDJDHLO_OFFSET))(this);
	}

	::System::String* JOJNCDLNJNM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFLJEDAJHA_JOJNCDLNJNM_OFFSET))(this);
	}

	::System::Int32 AHHFJGMECHO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFLJEDAJHA_AHHFJGMECHO_OFFSET))(this);
	}

	/*
	static ::OFFLJEDAJHA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OFFLJEDAJHA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OFFLJEDAJHA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean DGJAFCLNJCN(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + OFFLJEDAJHA_DGJAFCLNJCN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};

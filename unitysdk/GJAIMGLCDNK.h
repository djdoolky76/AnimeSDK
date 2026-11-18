#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GJAIMGLCDNK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GJAIMGLCDNK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GJAIMGLCDNK_BOBBGILMBLI_OFFSET UNITYSDK_OFFSET(0x754F10)
#define GJAIMGLCDNK_CEEJDLLKNMF_OFFSET UNITYSDK_OFFSET(0x756D50)
#define GJAIMGLCDNK_DFIGOHGIDJN_OFFSET UNITYSDK_OFFSET(0x757190)
#define GJAIMGLCDNK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GJAIMGLCDNK_HHGILFLIKLO_OFFSET UNITYSDK_OFFSET(0x758780)
#define GJAIMGLCDNK_JIGCIDPFIHP_OFFSET UNITYSDK_OFFSET(0x755A00)
#define GJAIMGLCDNK_JMFEJCIJGEG_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define GJAIMGLCDNK_LHBICAJDDMM_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define GJAIMGLCDNK_MDLLGIMAGCP_OFFSET UNITYSDK_OFFSET(0x754920)
#define GJAIMGLCDNK_MLOBPDJFAJJ_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define GJAIMGLCDNK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19AFB660)
#define GJAIMGLCDNK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GJAIMGLCDNK_TypeDefinitionIndex = 9381;

struct alignas(4) GJAIMGLCDNK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJAIMGLCDNK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GJAIMGLCDNK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* DFIGOHGIDJN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJAIMGLCDNK_DFIGOHGIDJN_OFFSET))(this);
	}

	::System::Int32 HHGILFLIKLO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJAIMGLCDNK_HHGILFLIKLO_OFFSET))(this);
	}

	::System::String* BOBBGILMBLI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJAIMGLCDNK_BOBBGILMBLI_OFFSET))(this);
	}

	::System::Int32 MDLLGIMAGCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJAIMGLCDNK_MDLLGIMAGCP_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJAIMGLCDNK_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* JIGCIDPFIHP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJAIMGLCDNK_JIGCIDPFIHP_OFFSET))(this);
	}

	::System::String* LHBICAJDDMM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJAIMGLCDNK_LHBICAJDDMM_OFFSET))(this);
	}

	/*
	::GJAIMGLCDNK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GJAIMGLCDNK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GJAIMGLCDNK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* JMFEJCIJGEG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJAIMGLCDNK_JMFEJCIJGEG_OFFSET))(this);
	}

	/*
	static ::GJAIMGLCDNK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GJAIMGLCDNK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GJAIMGLCDNK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 MLOBPDJFAJJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJAIMGLCDNK_MLOBPDJFAJJ_OFFSET))(this);
	}

	::System::String* CEEJDLLKNMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJAIMGLCDNK_CEEJDLLKNMF_OFFSET))(this);
	}
};

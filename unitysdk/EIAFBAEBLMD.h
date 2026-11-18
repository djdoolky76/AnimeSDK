#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EIAFBAEBLMD_APJONMKJOFJ_OFFSET UNITYSDK_OFFSET(0x757190)
#define EIAFBAEBLMD_BAAAJLJFCMA_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define EIAFBAEBLMD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EIAFBAEBLMD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EIAFBAEBLMD_GILBIMGHMKL_OFFSET UNITYSDK_OFFSET(0x754A70)
#define EIAFBAEBLMD_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EIAFBAEBLMD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A19DF90)
#define EIAFBAEBLMD_OPKBMBDBPHH_OFFSET UNITYSDK_OFFSET(0x756B10)
#define EIAFBAEBLMD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EIAFBAEBLMD_TypeDefinitionIndex = 16295;

struct alignas(4) EIAFBAEBLMD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIAFBAEBLMD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIAFBAEBLMD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::EIAFBAEBLMD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EIAFBAEBLMD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIAFBAEBLMD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean GILBIMGHMKL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EIAFBAEBLMD_GILBIMGHMKL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIAFBAEBLMD_NKCNGLADFNA_OFFSET))(this);
	}

	/*
	static ::EIAFBAEBLMD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EIAFBAEBLMD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EIAFBAEBLMD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* OPKBMBDBPHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIAFBAEBLMD_OPKBMBDBPHH_OFFSET))(this);
	}

	::System::Int32 BAAAJLJFCMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIAFBAEBLMD_BAAAJLJFCMA_OFFSET))(this);
	}

	::System::String* APJONMKJOFJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIAFBAEBLMD_APJONMKJOFJ_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define LENENBDEDLJ_BDMCAJJGDLI_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define LENENBDEDLJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LENENBDEDLJ_CMKDAGCKNJE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LENENBDEDLJ_EEIMCOLNLME_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define LENENBDEDLJ_EFICPBOMONF_OFFSET UNITYSDK_OFFSET(0x761240)
#define LENENBDEDLJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LENENBDEDLJ_NEAEAMMLBFC_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define LENENBDEDLJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B2FDAD0)
#define LENENBDEDLJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LENENBDEDLJ_TypeDefinitionIndex = 9611;

struct alignas(4) LENENBDEDLJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LENENBDEDLJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LENENBDEDLJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean NEAEAMMLBFC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LENENBDEDLJ_NEAEAMMLBFC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean EEIMCOLNLME(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LENENBDEDLJ_EEIMCOLNLME_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 EFICPBOMONF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LENENBDEDLJ_EFICPBOMONF_OFFSET))(this);
	}

	::System::Int32 BDMCAJJGDLI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LENENBDEDLJ_BDMCAJJGDLI_OFFSET))(this);
	}

	::System::Int32 CMKDAGCKNJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LENENBDEDLJ_CMKDAGCKNJE_OFFSET))(this);
	}

	/*
	::LENENBDEDLJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LENENBDEDLJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LENENBDEDLJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LENENBDEDLJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LENENBDEDLJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LENENBDEDLJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};

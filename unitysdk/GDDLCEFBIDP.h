#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GDDLCEFBIDP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GDDLCEFBIDP_CBCLFEIJFGH_OFFSET UNITYSDK_OFFSET(0x757290)
#define GDDLCEFBIDP_ECDHMPAPPPE_OFFSET UNITYSDK_OFFSET(0x755C70)
#define GDDLCEFBIDP_FOAGFLPIIOH_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define GDDLCEFBIDP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GDDLCEFBIDP_GPBFENDAJMF_OFFSET UNITYSDK_OFFSET(0x754970)
#define GDDLCEFBIDP_JBMENENCPBM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GDDLCEFBIDP_KBFOMAONODF_OFFSET UNITYSDK_OFFSET(0x755A00)
#define GDDLCEFBIDP_MIGNAGLCFFO_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define GDDLCEFBIDP_NOKNGIEGNKK_OFFSET UNITYSDK_OFFSET(0x754920)
#define GDDLCEFBIDP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17BE99E0)
#define GDDLCEFBIDP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GDDLCEFBIDP_TypeDefinitionIndex = 11502;

struct alignas(4) GDDLCEFBIDP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDLCEFBIDP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDDLCEFBIDP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* CBCLFEIJFGH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDLCEFBIDP_CBCLFEIJFGH_OFFSET))(this);
	}

	/*
	::GDDLCEFBIDP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GDDLCEFBIDP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDDLCEFBIDP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GDDLCEFBIDP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GDDLCEFBIDP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GDDLCEFBIDP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 MIGNAGLCFFO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDLCEFBIDP_MIGNAGLCFFO_OFFSET))(this);
	}

	::System::Boolean FOAGFLPIIOH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GDDLCEFBIDP_FOAGFLPIIOH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NOKNGIEGNKK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDLCEFBIDP_NOKNGIEGNKK_OFFSET))(this);
	}

	::System::Int32 GPBFENDAJMF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDLCEFBIDP_GPBFENDAJMF_OFFSET))(this);
	}

	::System::Int32 ECDHMPAPPPE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDLCEFBIDP_ECDHMPAPPPE_OFFSET))(this);
	}

	::System::String* KBFOMAONODF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDLCEFBIDP_KBFOMAONODF_OFFSET))(this);
	}

	::System::Int32 JBMENENCPBM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDLCEFBIDP_JBMENENCPBM_OFFSET))(this);
	}
};

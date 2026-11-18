#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define NEOHCLCHMKM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NEOHCLCHMKM_AHKHAMPGFJK_OFFSET UNITYSDK_OFFSET(0x754C20)
#define NEOHCLCHMKM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NEOHCLCHMKM_BNPNICOFANL_OFFSET UNITYSDK_OFFSET(0x754B50)
#define NEOHCLCHMKM_DOKFAOEOEFP_OFFSET UNITYSDK_OFFSET(0x754920)
#define NEOHCLCHMKM_FOFDKPNJCNC_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define NEOHCLCHMKM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NEOHCLCHMKM_MGEOBCHPJCF_OFFSET UNITYSDK_OFFSET(0x755D20)
#define NEOHCLCHMKM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1AD7CE90)
#define NEOHCLCHMKM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NEOHCLCHMKM_TypeDefinitionIndex = 16750;

struct alignas(4) NEOHCLCHMKM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOHCLCHMKM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NEOHCLCHMKM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 BNPNICOFANL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOHCLCHMKM_BNPNICOFANL_OFFSET))(this);
	}

	/*
	::NEOHCLCHMKM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NEOHCLCHMKM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NEOHCLCHMKM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NEOHCLCHMKM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NEOHCLCHMKM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NEOHCLCHMKM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 AHKHAMPGFJK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOHCLCHMKM_AHKHAMPGFJK_OFFSET))(this);
	}

	::System::Boolean FOFDKPNJCNC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NEOHCLCHMKM_FOFDKPNJCNC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 DOKFAOEOEFP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOHCLCHMKM_DOKFAOEOEFP_OFFSET))(this);
	}

	::System::Int32 MGEOBCHPJCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOHCLCHMKM_MGEOBCHPJCF_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOHCLCHMKM_ACOEONABOJL_OFFSET))(this);
	}
};

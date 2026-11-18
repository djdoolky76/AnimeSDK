#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define PAGEEAHOLBF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PAGEEAHOLBF_AOJINBEDHDI_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define PAGEEAHOLBF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PAGEEAHOLBF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PAGEEAHOLBF_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x756B90)
#define PAGEEAHOLBF_KFBAJDGEOHM_OFFSET UNITYSDK_OFFSET(0x761240)
#define PAGEEAHOLBF_KKLDJHGHHNB_OFFSET UNITYSDK_OFFSET(0x755D20)
#define PAGEEAHOLBF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1AB3D480)
#define PAGEEAHOLBF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PAGEEAHOLBF_TypeDefinitionIndex = 15761;

struct alignas(4) PAGEEAHOLBF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGEEAHOLBF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PAGEEAHOLBF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGEEAHOLBF_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 KFBAJDGEOHM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGEEAHOLBF_KFBAJDGEOHM_OFFSET))(this);
	}

	/*
	static ::PAGEEAHOLBF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PAGEEAHOLBF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PAGEEAHOLBF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 KKLDJHGHHNB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGEEAHOLBF_KKLDJHGHHNB_OFFSET))(this);
	}

	/*
	::PAGEEAHOLBF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PAGEEAHOLBF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PAGEEAHOLBF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGEEAHOLBF_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Boolean AOJINBEDHDI(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PAGEEAHOLBF_AOJINBEDHDI_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HAKMCMBCDIN_AJLKIHFGCHE_OFFSET UNITYSDK_OFFSET(0x756720)
#define HAKMCMBCDIN_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x754970)
#define HAKMCMBCDIN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HAKMCMBCDIN_CAGLLHANEFD_OFFSET UNITYSDK_OFFSET(0x754F10)
#define HAKMCMBCDIN_EEEOKMOHKDJ_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define HAKMCMBCDIN_FIJNBJJHCON_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HAKMCMBCDIN_FOPPBEKBKEL_OFFSET UNITYSDK_OFFSET(0x755C70)
#define HAKMCMBCDIN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HAKMCMBCDIN_LPAOHGMIFEN_OFFSET UNITYSDK_OFFSET(0x77A420)
#define HAKMCMBCDIN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x16654C50)
#define HAKMCMBCDIN_PLIKHNIFEEI_OFFSET UNITYSDK_OFFSET(0x755A00)
#define HAKMCMBCDIN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HAKMCMBCDIN_TypeDefinitionIndex = 16789;

struct alignas(4) HAKMCMBCDIN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAKMCMBCDIN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HAKMCMBCDIN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HAKMCMBCDIN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HAKMCMBCDIN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HAKMCMBCDIN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 AJLKIHFGCHE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAKMCMBCDIN_AJLKIHFGCHE_OFFSET))(this);
	}

	::System::String* EEEOKMOHKDJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAKMCMBCDIN_EEEOKMOHKDJ_OFFSET))(this);
	}

	::System::Int32 FIJNBJJHCON()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAKMCMBCDIN_FIJNBJJHCON_OFFSET))(this);
	}

	::System::Int32 FOPPBEKBKEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAKMCMBCDIN_FOPPBEKBKEL_OFFSET))(this);
	}

	/*
	::HAKMCMBCDIN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HAKMCMBCDIN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HAKMCMBCDIN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LPAOHGMIFEN(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + HAKMCMBCDIN_LPAOHGMIFEN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* CAGLLHANEFD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAKMCMBCDIN_CAGLLHANEFD_OFFSET))(this);
	}

	::System::String* PLIKHNIFEEI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAKMCMBCDIN_PLIKHNIFEEI_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAKMCMBCDIN_APCKPKCNFJE_OFFSET))(this);
	}
};

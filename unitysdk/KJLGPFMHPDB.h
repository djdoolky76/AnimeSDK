#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KJLGPFMHPDB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KJLGPFMHPDB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KJLGPFMHPDB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KJLGPFMHPDB_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KJLGPFMHPDB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B507D60)
#define KJLGPFMHPDB_OJLCHPLOPBC_OFFSET UNITYSDK_OFFSET(0x755A00)
#define KJLGPFMHPDB_OKGKODNEICJ_OFFSET UNITYSDK_OFFSET(0x754920)
#define KJLGPFMHPDB_PJKLEBBCMEB_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KJLGPFMHPDB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KJLGPFMHPDB_TypeDefinitionIndex = 14883;

struct alignas(4) KJLGPFMHPDB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJLGPFMHPDB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJLGPFMHPDB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJLGPFMHPDB_LPFMNKEFPMM_OFFSET))(this);
	}

	/*
	::KJLGPFMHPDB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KJLGPFMHPDB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJLGPFMHPDB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KJLGPFMHPDB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KJLGPFMHPDB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KJLGPFMHPDB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 PJKLEBBCMEB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJLGPFMHPDB_PJKLEBBCMEB_OFFSET))(this);
	}

	::System::String* OJLCHPLOPBC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJLGPFMHPDB_OJLCHPLOPBC_OFFSET))(this);
	}

	::System::Int32 OKGKODNEICJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJLGPFMHPDB_OKGKODNEICJ_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJLGPFMHPDB_ACOEONABOJL_OFFSET))(this);
	}
};

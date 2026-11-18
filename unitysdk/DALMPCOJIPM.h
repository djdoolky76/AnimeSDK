#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DALMPCOJIPM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DALMPCOJIPM_AJFEEILIIKH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define DALMPCOJIPM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DALMPCOJIPM_FEDPLDCPDHN_OFFSET UNITYSDK_OFFSET(0x756D50)
#define DALMPCOJIPM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DALMPCOJIPM_LGCDCINFEHD_OFFSET UNITYSDK_OFFSET(0x754F10)
#define DALMPCOJIPM_NIBNOFAHOAM_OFFSET UNITYSDK_OFFSET(0x756B10)
#define DALMPCOJIPM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A1866A0)
#define DALMPCOJIPM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DALMPCOJIPM_TypeDefinitionIndex = 12648;

struct alignas(4) DALMPCOJIPM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DALMPCOJIPM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DALMPCOJIPM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* FEDPLDCPDHN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DALMPCOJIPM_FEDPLDCPDHN_OFFSET))(this);
	}

	::System::String* NIBNOFAHOAM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DALMPCOJIPM_NIBNOFAHOAM_OFFSET))(this);
	}

	::System::String* AJFEEILIIKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DALMPCOJIPM_AJFEEILIIKH_OFFSET))(this);
	}

	/*
	::DALMPCOJIPM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DALMPCOJIPM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DALMPCOJIPM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* LGCDCINFEHD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DALMPCOJIPM_LGCDCINFEHD_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DALMPCOJIPM_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::DALMPCOJIPM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DALMPCOJIPM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DALMPCOJIPM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JIJHNDADGPM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JIJHNDADGPM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JIJHNDADGPM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JIJHNDADGPM_JLDGIMOPJKP_OFFSET UNITYSDK_OFFSET(0x754B50)
#define JIJHNDADGPM_LJPCDCEFHKM_OFFSET UNITYSDK_OFFSET(0x754F10)
#define JIJHNDADGPM_MPKDIOCPEPP_OFFSET UNITYSDK_OFFSET(0x758590)
#define JIJHNDADGPM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x152F5980)
#define JIJHNDADGPM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JIJHNDADGPM_TypeDefinitionIndex = 17116;

struct alignas(4) JIJHNDADGPM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJHNDADGPM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JIJHNDADGPM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::JIJHNDADGPM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JIJHNDADGPM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JIJHNDADGPM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* LJPCDCEFHKM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJHNDADGPM_LJPCDCEFHKM_OFFSET))(this);
	}

	::System::Int32 JLDGIMOPJKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJHNDADGPM_JLDGIMOPJKP_OFFSET))(this);
	}

	::System::Boolean MPKDIOCPEPP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJHNDADGPM_MPKDIOCPEPP_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJHNDADGPM_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::JIJHNDADGPM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JIJHNDADGPM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JIJHNDADGPM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};

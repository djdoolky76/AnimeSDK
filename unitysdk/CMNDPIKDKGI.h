#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define CMNDPIKDKGI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CMNDPIKDKGI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CMNDPIKDKGI_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CMNDPIKDKGI_NFNNIJAFGHH_OFFSET UNITYSDK_OFFSET(0x754B50)
#define CMNDPIKDKGI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17F14C40)
#define CMNDPIKDKGI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CMNDPIKDKGI_TypeDefinitionIndex = 11758;

struct alignas(4) CMNDPIKDKGI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNDPIKDKGI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMNDPIKDKGI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNDPIKDKGI_LPFMNKEFPMM_OFFSET))(this);
	}

	/*
	::CMNDPIKDKGI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CMNDPIKDKGI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMNDPIKDKGI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CMNDPIKDKGI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CMNDPIKDKGI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CMNDPIKDKGI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 NFNNIJAFGHH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNDPIKDKGI_NFNNIJAFGHH_OFFSET))(this);
	}
};

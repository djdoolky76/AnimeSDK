#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define COGNLKNIHPD_BHFCDEJGCJL_OFFSET UNITYSDK_OFFSET(0x758320)
#define COGNLKNIHPD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define COGNLKNIHPD_COKNGLDGGNN_OFFSET UNITYSDK_OFFSET(0x754C80)
#define COGNLKNIHPD_ECOBGODHBND_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define COGNLKNIHPD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define COGNLKNIHPD_GFHNNDGAJJI_OFFSET UNITYSDK_OFFSET(0x761710)
#define COGNLKNIHPD_JEJOFIOMEOG_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define COGNLKNIHPD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19AD2760)
#define COGNLKNIHPD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int COGNLKNIHPD_TypeDefinitionIndex = 15778;

struct alignas(4) COGNLKNIHPD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + COGNLKNIHPD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + COGNLKNIHPD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::COGNLKNIHPD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::COGNLKNIHPD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + COGNLKNIHPD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 COKNGLDGGNN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COGNLKNIHPD_COKNGLDGGNN_OFFSET))(this);
	}

	::System::String* ECOBGODHBND()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COGNLKNIHPD_ECOBGODHBND_OFFSET))(this);
	}

	::System::String* BHFCDEJGCJL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COGNLKNIHPD_BHFCDEJGCJL_OFFSET))(this);
	}

	::System::String* JEJOFIOMEOG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COGNLKNIHPD_JEJOFIOMEOG_OFFSET))(this);
	}

	::System::String* GFHNNDGAJJI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COGNLKNIHPD_GFHNNDGAJJI_OFFSET))(this);
	}

	/*
	static ::COGNLKNIHPD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::COGNLKNIHPD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + COGNLKNIHPD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};

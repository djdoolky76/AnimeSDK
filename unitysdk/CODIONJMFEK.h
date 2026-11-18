#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CODIONJMFEK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CODIONJMFEK_BLLOPKJDOBE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CODIONJMFEK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CODIONJMFEK_IMGEKPBJBAI_OFFSET UNITYSDK_OFFSET(0x755E40)
#define CODIONJMFEK_JDLILHAEHGJ_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define CODIONJMFEK_JKBLEMPNHBK_OFFSET UNITYSDK_OFFSET(0x755890)
#define CODIONJMFEK_LFMCFBFIINI_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define CODIONJMFEK_NIKGHIOKKBH_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define CODIONJMFEK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1ADBF730)
#define CODIONJMFEK_OPJICNJGKMN_OFFSET UNITYSDK_OFFSET(0x755190)
#define CODIONJMFEK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CODIONJMFEK_TypeDefinitionIndex = 10197;

struct alignas(4) CODIONJMFEK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODIONJMFEK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CODIONJMFEK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 IMGEKPBJBAI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODIONJMFEK_IMGEKPBJBAI_OFFSET))(this);
	}

	/*
	static ::CODIONJMFEK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CODIONJMFEK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CODIONJMFEK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 JKBLEMPNHBK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODIONJMFEK_JKBLEMPNHBK_OFFSET))(this);
	}

	::System::Int32 OPJICNJGKMN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODIONJMFEK_OPJICNJGKMN_OFFSET))(this);
	}

	::System::String* NIKGHIOKKBH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODIONJMFEK_NIKGHIOKKBH_OFFSET))(this);
	}

	::System::Int32 LFMCFBFIINI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODIONJMFEK_LFMCFBFIINI_OFFSET))(this);
	}

	::System::Int32 BLLOPKJDOBE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODIONJMFEK_BLLOPKJDOBE_OFFSET))(this);
	}

	::System::Int32 JDLILHAEHGJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODIONJMFEK_JDLILHAEHGJ_OFFSET))(this);
	}

	/*
	::CODIONJMFEK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CODIONJMFEK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CODIONJMFEK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};

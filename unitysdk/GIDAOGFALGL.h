#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GIDAOGFALGL_AKCIDHDAAIK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GIDAOGFALGL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GIDAOGFALGL_CHNNOCAIGDA_OFFSET UNITYSDK_OFFSET(0x756B10)
#define GIDAOGFALGL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GIDAOGFALGL_HIHKBMCPIJH_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define GIDAOGFALGL_LCOLNEOIGDF_OFFSET UNITYSDK_OFFSET(0x758780)
#define GIDAOGFALGL_LHCHCKNBFBL_OFFSET UNITYSDK_OFFSET(0x754970)
#define GIDAOGFALGL_LHCKNFCNGNF_OFFSET UNITYSDK_OFFSET(0x757190)
#define GIDAOGFALGL_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x755D20)
#define GIDAOGFALGL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1664A520)
#define GIDAOGFALGL_PCJNBHIFMAJ_OFFSET UNITYSDK_OFFSET(0x755A00)
#define GIDAOGFALGL_PGEMCKMAHFJ_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define GIDAOGFALGL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GIDAOGFALGL_TypeDefinitionIndex = 17111;

struct alignas(4) GIDAOGFALGL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDAOGFALGL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GIDAOGFALGL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* PGEMCKMAHFJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDAOGFALGL_PGEMCKMAHFJ_OFFSET))(this);
	}

	/*
	static ::GIDAOGFALGL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GIDAOGFALGL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GIDAOGFALGL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::GIDAOGFALGL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GIDAOGFALGL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GIDAOGFALGL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* PCJNBHIFMAJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDAOGFALGL_PCJNBHIFMAJ_OFFSET))(this);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDAOGFALGL_NFKFHJBEPGD_OFFSET))(this);
	}

	::System::Int32 HIHKBMCPIJH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDAOGFALGL_HIHKBMCPIJH_OFFSET))(this);
	}

	::System::Int32 AKCIDHDAAIK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDAOGFALGL_AKCIDHDAAIK_OFFSET))(this);
	}

	::System::Int32 LHCHCKNBFBL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDAOGFALGL_LHCHCKNBFBL_OFFSET))(this);
	}

	::System::String* LHCKNFCNGNF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDAOGFALGL_LHCKNFCNGNF_OFFSET))(this);
	}

	::System::Int32 LCOLNEOIGDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDAOGFALGL_LCOLNEOIGDF_OFFSET))(this);
	}

	::System::String* CHNNOCAIGDA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDAOGFALGL_CHNNOCAIGDA_OFFSET))(this);
	}
};

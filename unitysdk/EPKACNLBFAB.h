#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EPKACNLBFAB_ADDAIGNEAEO_OFFSET UNITYSDK_OFFSET(0x754F10)
#define EPKACNLBFAB_ALLLANGAPJA_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define EPKACNLBFAB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EPKACNLBFAB_DCDJGLIBNCI_OFFSET UNITYSDK_OFFSET(0x763D00)
#define EPKACNLBFAB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EPKACNLBFAB_GMLOOBNIHPK_OFFSET UNITYSDK_OFFSET(0x757290)
#define EPKACNLBFAB_JKIKMPIKIJG_OFFSET UNITYSDK_OFFSET(0x756B10)
#define EPKACNLBFAB_LKPAHDMKDDD_OFFSET UNITYSDK_OFFSET(0x779440)
#define EPKACNLBFAB_MEBILJEFDDH_OFFSET UNITYSDK_OFFSET(0x762060)
#define EPKACNLBFAB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B9C0520)
#define EPKACNLBFAB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EPKACNLBFAB_TypeDefinitionIndex = 11843;

struct alignas(4) EPKACNLBFAB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKACNLBFAB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EPKACNLBFAB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LKPAHDMKDDD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKACNLBFAB_LKPAHDMKDDD_OFFSET))(this);
	}

	::System::Span_1_9011FAD97750D224<::System::Byte> DCDJGLIBNCI()
	{
		return ((::System::Span_1_9011FAD97750D224<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKACNLBFAB_DCDJGLIBNCI_OFFSET))(this);
	}

	::System::String* GMLOOBNIHPK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKACNLBFAB_GMLOOBNIHPK_OFFSET))(this);
	}

	/*
	static ::EPKACNLBFAB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::String* MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EPKACNLBFAB(*)(::System::Int32, ::System::String*, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EPKACNLBFAB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* MEBILJEFDDH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKACNLBFAB_MEBILJEFDDH_OFFSET))(this);
	}

	::System::String* JKIKMPIKIJG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKACNLBFAB_JKIKMPIKIJG_OFFSET))(this);
	}

	/*
	::EPKACNLBFAB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EPKACNLBFAB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EPKACNLBFAB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* ADDAIGNEAEO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKACNLBFAB_ADDAIGNEAEO_OFFSET))(this);
	}

	::System::String* ALLLANGAPJA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKACNLBFAB_ALLLANGAPJA_OFFSET))(this);
	}
};

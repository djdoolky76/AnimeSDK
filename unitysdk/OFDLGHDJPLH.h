#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OFDLGHDJPLH_AJJNCFMGAOB_OFFSET UNITYSDK_OFFSET(0x761710)
#define OFDLGHDJPLH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OFDLGHDJPLH_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x755190)
#define OFDLGHDJPLH_CHDEHKBAPOG_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OFDLGHDJPLH_DDIMJHAEPEM_OFFSET UNITYSDK_OFFSET(0x7D4550)
#define OFDLGHDJPLH_FOHLBNMADGA_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define OFDLGHDJPLH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OFDLGHDJPLH_ILOHFAAHIPH_OFFSET UNITYSDK_OFFSET(0x7C3D50)
#define OFDLGHDJPLH_JOPOBFGDELP_OFFSET UNITYSDK_OFFSET(0x756B10)
#define OFDLGHDJPLH_KOPPJKALELC_OFFSET UNITYSDK_OFFSET(0x755E40)
#define OFDLGHDJPLH_NBAMKJDIJDJ_OFFSET UNITYSDK_OFFSET(0x756D50)
#define OFDLGHDJPLH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1CCF92F0)
#define OFDLGHDJPLH_OCHENJBHOEK_OFFSET UNITYSDK_OFFSET(0x762B30)
#define OFDLGHDJPLH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OFDLGHDJPLH_TypeDefinitionIndex = 14402;

struct alignas(4) OFDLGHDJPLH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDLGHDJPLH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OFDLGHDJPLH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::OFDLGHDJPLH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OFDLGHDJPLH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OFDLGHDJPLH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* NBAMKJDIJDJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDLGHDJPLH_NBAMKJDIJDJ_OFFSET))(this);
	}

	::System::String* JOPOBFGDELP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDLGHDJPLH_JOPOBFGDELP_OFFSET))(this);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDLGHDJPLH_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Boolean OCHENJBHOEK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDLGHDJPLH_OCHENJBHOEK_OFFSET))(this);
	}

	::System::Int32 KOPPJKALELC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDLGHDJPLH_KOPPJKALELC_OFFSET))(this);
	}

	::System::Int32 CHDEHKBAPOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDLGHDJPLH_CHDEHKBAPOG_OFFSET))(this);
	}

	::System::Int32 FOHLBNMADGA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDLGHDJPLH_FOHLBNMADGA_OFFSET))(this);
	}

	::System::String* AJJNCFMGAOB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDLGHDJPLH_AJJNCFMGAOB_OFFSET))(this);
	}

	/*
	static ::OFDLGHDJPLH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OFDLGHDJPLH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OFDLGHDJPLH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean DDIMJHAEPEM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDLGHDJPLH_DDIMJHAEPEM_OFFSET))(this);
	}

	::System::Boolean ILOHFAAHIPH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDLGHDJPLH_ILOHFAAHIPH_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DLJKIDLCJAK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DLJKIDLCJAK_EDMEPPJHINA_OFFSET UNITYSDK_OFFSET(0x754F10)
#define DLJKIDLCJAK_EFLFDBMLFHA_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define DLJKIDLCJAK_FENDCDEJEJF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DLJKIDLCJAK_FKGHIGBMBEP_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define DLJKIDLCJAK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DLJKIDLCJAK_HMEKAIOLFNI_OFFSET UNITYSDK_OFFSET(0x754920)
#define DLJKIDLCJAK_NDKJPDFADCA_OFFSET UNITYSDK_OFFSET(0x756B90)
#define DLJKIDLCJAK_NIFMPOGHMHH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define DLJKIDLCJAK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A593E80)
#define DLJKIDLCJAK_OGLKOKCMDCH_OFFSET UNITYSDK_OFFSET(0x757290)
#define DLJKIDLCJAK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DLJKIDLCJAK_TypeDefinitionIndex = 11767;

struct alignas(4) DLJKIDLCJAK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLJKIDLCJAK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DLJKIDLCJAK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* NIFMPOGHMHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLJKIDLCJAK_NIFMPOGHMHH_OFFSET))(this);
	}

	::System::String* FKGHIGBMBEP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLJKIDLCJAK_FKGHIGBMBEP_OFFSET))(this);
	}

	::System::String* EFLFDBMLFHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLJKIDLCJAK_EFLFDBMLFHA_OFFSET))(this);
	}

	::System::Int32 HMEKAIOLFNI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLJKIDLCJAK_HMEKAIOLFNI_OFFSET))(this);
	}

	::System::Int32 NDKJPDFADCA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLJKIDLCJAK_NDKJPDFADCA_OFFSET))(this);
	}

	/*
	static ::DLJKIDLCJAK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DLJKIDLCJAK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DLJKIDLCJAK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 FENDCDEJEJF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLJKIDLCJAK_FENDCDEJEJF_OFFSET))(this);
	}

	::System::String* OGLKOKCMDCH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLJKIDLCJAK_OGLKOKCMDCH_OFFSET))(this);
	}

	/*
	::DLJKIDLCJAK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DLJKIDLCJAK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DLJKIDLCJAK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* EDMEPPJHINA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLJKIDLCJAK_EDMEPPJHINA_OFFSET))(this);
	}
};

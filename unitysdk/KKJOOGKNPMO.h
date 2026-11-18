#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KKJOOGKNPMO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KKJOOGKNPMO_AKHOPDGDHGE_OFFSET UNITYSDK_OFFSET(0x754920)
#define KKJOOGKNPMO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KKJOOGKNPMO_BHMMKDGCLGB_OFFSET UNITYSDK_OFFSET(0x755C70)
#define KKJOOGKNPMO_ELJPPPBJKAJ_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define KKJOOGKNPMO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KKJOOGKNPMO_ICEPJNCOIBO_OFFSET UNITYSDK_OFFSET(0x755E40)
#define KKJOOGKNPMO_IKPKAJFNOAM_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define KKJOOGKNPMO_KGABNFDFJGE_OFFSET UNITYSDK_OFFSET(0x755890)
#define KKJOOGKNPMO_LFPFCAFBOEK_OFFSET UNITYSDK_OFFSET(0x758780)
#define KKJOOGKNPMO_MFGPCPDNOKO_OFFSET UNITYSDK_OFFSET(0x755190)
#define KKJOOGKNPMO_NEBLIFEABCP_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define KKJOOGKNPMO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B508100)
#define KKJOOGKNPMO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KKJOOGKNPMO_TypeDefinitionIndex = 11969;

struct alignas(4) KKJOOGKNPMO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJOOGKNPMO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KKJOOGKNPMO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NEBLIFEABCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJOOGKNPMO_NEBLIFEABCP_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJOOGKNPMO_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* IKPKAJFNOAM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJOOGKNPMO_IKPKAJFNOAM_OFFSET))(this);
	}

	/*
	static ::KKJOOGKNPMO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KKJOOGKNPMO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KKJOOGKNPMO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 LFPFCAFBOEK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJOOGKNPMO_LFPFCAFBOEK_OFFSET))(this);
	}

	::System::Int32 KGABNFDFJGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJOOGKNPMO_KGABNFDFJGE_OFFSET))(this);
	}

	::System::Int32 ELJPPPBJKAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJOOGKNPMO_ELJPPPBJKAJ_OFFSET))(this);
	}

	::System::Int32 AKHOPDGDHGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJOOGKNPMO_AKHOPDGDHGE_OFFSET))(this);
	}

	::System::Int32 BHMMKDGCLGB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJOOGKNPMO_BHMMKDGCLGB_OFFSET))(this);
	}

	::System::Int32 MFGPCPDNOKO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJOOGKNPMO_MFGPCPDNOKO_OFFSET))(this);
	}

	::System::Int32 ICEPJNCOIBO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJOOGKNPMO_ICEPJNCOIBO_OFFSET))(this);
	}

	/*
	::KKJOOGKNPMO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KKJOOGKNPMO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KKJOOGKNPMO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};

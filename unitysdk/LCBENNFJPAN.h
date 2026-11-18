#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LCBENNFJPAN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LCBENNFJPAN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LCBENNFJPAN_FELDILHMMIK_OFFSET UNITYSDK_OFFSET(0x755A00)
#define LCBENNFJPAN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LCBENNFJPAN_KFMIAELJHAP_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define LCBENNFJPAN_LJLELFJAMCN_OFFSET UNITYSDK_OFFSET(0x756440)
#define LCBENNFJPAN_MNBGAIEPADE_OFFSET UNITYSDK_OFFSET(0x756D50)
#define LCBENNFJPAN_MODNLDLPIMM_OFFSET UNITYSDK_OFFSET(0x7E24F0)
#define LCBENNFJPAN_NICPMFLMDJN_OFFSET UNITYSDK_OFFSET(0x76FBF0)
#define LCBENNFJPAN_NNHLNFPGCLN_OFFSET UNITYSDK_OFFSET(0x755E40)
#define LCBENNFJPAN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19561520)
#define LCBENNFJPAN_PGCPCGMGOIJ_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define LCBENNFJPAN_PILJMHFDLMO_OFFSET UNITYSDK_OFFSET(0x757290)
#define LCBENNFJPAN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LCBENNFJPAN_TypeDefinitionIndex = 14723;

struct alignas(4) LCBENNFJPAN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBENNFJPAN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCBENNFJPAN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* PGCPCGMGOIJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBENNFJPAN_PGCPCGMGOIJ_OFFSET))(this);
	}

	::System::String* KFMIAELJHAP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBENNFJPAN_KFMIAELJHAP_OFFSET))(this);
	}

	::System::String* PILJMHFDLMO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBENNFJPAN_PILJMHFDLMO_OFFSET))(this);
	}

	::System::Boolean NICPMFLMDJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBENNFJPAN_NICPMFLMDJN_OFFSET))(this);
	}

	::System::Boolean MODNLDLPIMM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBENNFJPAN_MODNLDLPIMM_OFFSET))(this);
	}

	/*
	static ::LCBENNFJPAN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LCBENNFJPAN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LCBENNFJPAN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* FELDILHMMIK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBENNFJPAN_FELDILHMMIK_OFFSET))(this);
	}

	::System::Int32 NNHLNFPGCLN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBENNFJPAN_NNHLNFPGCLN_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBENNFJPAN_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* MNBGAIEPADE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBENNFJPAN_MNBGAIEPADE_OFFSET))(this);
	}

	/*
	::LCBENNFJPAN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LCBENNFJPAN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCBENNFJPAN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LJLELFJAMCN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBENNFJPAN_LJLELFJAMCN_OFFSET))(this);
	}
};

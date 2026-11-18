#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KCLJAOJPELF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KCLJAOJPELF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KCLJAOJPELF_DGFAJDNHCIJ_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define KCLJAOJPELF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KCLJAOJPELF_HOKFDABCANC_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KCLJAOJPELF_NDPGBHLPHFI_OFFSET UNITYSDK_OFFSET(0x754970)
#define KCLJAOJPELF_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KCLJAOJPELF_NPGOKDIENEM_OFFSET UNITYSDK_OFFSET(0x754920)
#define KCLJAOJPELF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B8A0E20)
#define KCLJAOJPELF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KCLJAOJPELF_TypeDefinitionIndex = 13108;

struct alignas(4) KCLJAOJPELF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLJAOJPELF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KCLJAOJPELF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLJAOJPELF_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 NDPGBHLPHFI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLJAOJPELF_NDPGBHLPHFI_OFFSET))(this);
	}

	::System::Int32 HOKFDABCANC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLJAOJPELF_HOKFDABCANC_OFFSET))(this);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLJAOJPELF_NKCNGLADFNA_OFFSET))(this);
	}

	::System::Int32 NPGOKDIENEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLJAOJPELF_NPGOKDIENEM_OFFSET))(this);
	}

	::System::Int32 DGFAJDNHCIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLJAOJPELF_DGFAJDNHCIJ_OFFSET))(this);
	}

	/*
	::KCLJAOJPELF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KCLJAOJPELF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KCLJAOJPELF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KCLJAOJPELF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KCLJAOJPELF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KCLJAOJPELF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};

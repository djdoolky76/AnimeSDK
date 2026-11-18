#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OBMJICILCHE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OBMJICILCHE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OBMJICILCHE_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x755C70)
#define OBMJICILCHE_IEJBHOLKNPO_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define OBMJICILCHE_MDPCNGNPADB_OFFSET UNITYSDK_OFFSET(0x754920)
#define OBMJICILCHE_MLBLHAFPBHE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OBMJICILCHE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C197130)
#define OBMJICILCHE_OJLCHPLOPBC_OFFSET UNITYSDK_OFFSET(0x754970)
#define OBMJICILCHE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OBMJICILCHE_TypeDefinitionIndex = 9350;

struct alignas(4) OBMJICILCHE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMJICILCHE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBMJICILCHE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMJICILCHE_HKELPCLHLEC_OFFSET))(this);
	}

	/*
	static ::OBMJICILCHE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OBMJICILCHE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OBMJICILCHE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* IEJBHOLKNPO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMJICILCHE_IEJBHOLKNPO_OFFSET))(this);
	}

	::System::Int32 OJLCHPLOPBC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMJICILCHE_OJLCHPLOPBC_OFFSET))(this);
	}

	::System::Int32 MLBLHAFPBHE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMJICILCHE_MLBLHAFPBHE_OFFSET))(this);
	}

	/*
	::OBMJICILCHE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OBMJICILCHE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBMJICILCHE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MDPCNGNPADB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMJICILCHE_MDPCNGNPADB_OFFSET))(this);
	}
};

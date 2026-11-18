#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LDMGDHBEEFM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LDMGDHBEEFM_DIDHAFOCNAL_OFFSET UNITYSDK_OFFSET(0x755A00)
#define LDMGDHBEEFM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LDMGDHBEEFM_HHNJAHPKFDM_OFFSET UNITYSDK_OFFSET(0x756B10)
#define LDMGDHBEEFM_LICIDCFDKIJ_OFFSET UNITYSDK_OFFSET(0x754F10)
#define LDMGDHBEEFM_LMBMKFLKOKE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LDMGDHBEEFM_NLAKIFCIMJM_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define LDMGDHBEEFM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17329BB0)
#define LDMGDHBEEFM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LDMGDHBEEFM_TypeDefinitionIndex = 16948;

struct alignas(4) LDMGDHBEEFM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMGDHBEEFM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LDMGDHBEEFM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* DIDHAFOCNAL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMGDHBEEFM_DIDHAFOCNAL_OFFSET))(this);
	}

	::System::String* LICIDCFDKIJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMGDHBEEFM_LICIDCFDKIJ_OFFSET))(this);
	}

	/*
	static ::LDMGDHBEEFM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LDMGDHBEEFM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LDMGDHBEEFM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* NLAKIFCIMJM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMGDHBEEFM_NLAKIFCIMJM_OFFSET))(this);
	}

	::System::String* HHNJAHPKFDM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMGDHBEEFM_HHNJAHPKFDM_OFFSET))(this);
	}

	/*
	::LDMGDHBEEFM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LDMGDHBEEFM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LDMGDHBEEFM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LMBMKFLKOKE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMGDHBEEFM_LMBMKFLKOKE_OFFSET))(this);
	}
};

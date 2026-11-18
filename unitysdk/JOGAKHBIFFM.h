#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JOGAKHBIFFM_BAONPNPENDF_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define JOGAKHBIFFM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JOGAKHBIFFM_CNLJANODOOD_OFFSET UNITYSDK_OFFSET(0x755D20)
#define JOGAKHBIFFM_DKEDCMFJKGK_OFFSET UNITYSDK_OFFSET(0x758590)
#define JOGAKHBIFFM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JOGAKHBIFFM_LHCHCKNBFBL_OFFSET UNITYSDK_OFFSET(0x754920)
#define JOGAKHBIFFM_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JOGAKHBIFFM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17C2EB60)
#define JOGAKHBIFFM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JOGAKHBIFFM_TypeDefinitionIndex = 12345;

struct alignas(4) JOGAKHBIFFM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGAKHBIFFM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JOGAKHBIFFM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 CNLJANODOOD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGAKHBIFFM_CNLJANODOOD_OFFSET))(this);
	}

	/*
	::JOGAKHBIFFM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JOGAKHBIFFM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JOGAKHBIFFM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean DKEDCMFJKGK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGAKHBIFFM_DKEDCMFJKGK_OFFSET))(this);
	}

	::System::Int32 LHCHCKNBFBL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGAKHBIFFM_LHCHCKNBFBL_OFFSET))(this);
	}

	::System::String* BAONPNPENDF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGAKHBIFFM_BAONPNPENDF_OFFSET))(this);
	}

	/*
	static ::JOGAKHBIFFM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JOGAKHBIFFM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JOGAKHBIFFM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGAKHBIFFM_NFKFHJBEPGD_OFFSET))(this);
	}
};

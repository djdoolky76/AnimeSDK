#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LEMBMLDAKPL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LEMBMLDAKPL_BOJJGBKPIJP_OFFSET UNITYSDK_OFFSET(0x755D20)
#define LEMBMLDAKPL_CGPPDMFFHOB_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define LEMBMLDAKPL_CHANGIMIPID_OFFSET UNITYSDK_OFFSET(0x755890)
#define LEMBMLDAKPL_CIBHKNCAHHD_OFFSET UNITYSDK_OFFSET(0x757290)
#define LEMBMLDAKPL_EAPKDCEPOAI_OFFSET UNITYSDK_OFFSET(0x754920)
#define LEMBMLDAKPL_EEDNECGJBOO_OFFSET UNITYSDK_OFFSET(0x754B50)
#define LEMBMLDAKPL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LEMBMLDAKPL_JAOMICKHCFP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LEMBMLDAKPL_KHHMPPBCMHI_OFFSET UNITYSDK_OFFSET(0x754970)
#define LEMBMLDAKPL_KNALHPMLEKO_1_OFFSET UNITYSDK_OFFSET(0x1732A290)
#define LEMBMLDAKPL_KNALHPMLEKO_OFFSET UNITYSDK_OFFSET(0x1732A1B0)
#define LEMBMLDAKPL_NBNIEOPCKNB_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define LEMBMLDAKPL_OBMGEFPDONH_OFFSET UNITYSDK_OFFSET(0x756B90)
#define LEMBMLDAKPL_PDLJDABIFPC_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define LEMBMLDAKPL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LEMBMLDAKPL_TypeDefinitionIndex = 17582;

struct alignas(4) LEMBMLDAKPL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMBMLDAKPL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LEMBMLDAKPL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* PDLJDABIFPC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMBMLDAKPL_PDLJDABIFPC_OFFSET))(this);
	}

	::System::String* CIBHKNCAHHD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMBMLDAKPL_CIBHKNCAHHD_OFFSET))(this);
	}

	::System::String* NBNIEOPCKNB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMBMLDAKPL_NBNIEOPCKNB_OFFSET))(this);
	}

	::System::Int32 JAOMICKHCFP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMBMLDAKPL_JAOMICKHCFP_OFFSET))(this);
	}

	::System::Int32 EEDNECGJBOO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMBMLDAKPL_EEDNECGJBOO_OFFSET))(this);
	}

	::System::Int32 KHHMPPBCMHI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMBMLDAKPL_KHHMPPBCMHI_OFFSET))(this);
	}

	/*
	::LEMBMLDAKPL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LEMBMLDAKPL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LEMBMLDAKPL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* CGPPDMFFHOB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMBMLDAKPL_CGPPDMFFHOB_OFFSET))(this);
	}

	::System::Int32 OBMGEFPDONH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMBMLDAKPL_OBMGEFPDONH_OFFSET))(this);
	}

	/*
	static ::LEMBMLDAKPL KNALHPMLEKO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LEMBMLDAKPL EIFONLCJOPG)
	{
		return ((::LEMBMLDAKPL(*)(::FlatBuffers::ByteBuffer*, ::LEMBMLDAKPL))((::PBYTE)hIl2Cpp + LEMBMLDAKPL_KNALHPMLEKO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 BOJJGBKPIJP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMBMLDAKPL_BOJJGBKPIJP_OFFSET))(this);
	}

	::System::Int32 CHANGIMIPID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMBMLDAKPL_CHANGIMIPID_OFFSET))(this);
	}

	/*
	static ::LEMBMLDAKPL KNALHPMLEKO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LEMBMLDAKPL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LEMBMLDAKPL_KNALHPMLEKO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 EAPKDCEPOAI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMBMLDAKPL_EAPKDCEPOAI_OFFSET))(this);
	}
};

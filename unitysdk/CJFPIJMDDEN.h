#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CJFPIJMDDEN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CJFPIJMDDEN_EFEBPHKPACJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CJFPIJMDDEN_GEIJIIOKJEH_OFFSET UNITYSDK_OFFSET(0x758780)
#define CJFPIJMDDEN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CJFPIJMDDEN_HEOGBEGHDGD_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define CJFPIJMDDEN_IFOOPFBFKHH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define CJFPIJMDDEN_LHHGLKJLPBM_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define CJFPIJMDDEN_LJGCFJPIDEO_OFFSET UNITYSDK_OFFSET(0x754920)
#define CJFPIJMDDEN_LJLJFKLJDKO_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define CJFPIJMDDEN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A17E540)
#define CJFPIJMDDEN_OLEABFMBEBA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define CJFPIJMDDEN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CJFPIJMDDEN_TypeDefinitionIndex = 12497;

struct alignas(4) CJFPIJMDDEN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFPIJMDDEN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CJFPIJMDDEN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HEOGBEGHDGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFPIJMDDEN_HEOGBEGHDGD_OFFSET))(this);
	}

	/*
	static ::CJFPIJMDDEN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CJFPIJMDDEN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CJFPIJMDDEN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* LJLJFKLJDKO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFPIJMDDEN_LJLJFKLJDKO_OFFSET))(this);
	}

	::System::Int32 OLEABFMBEBA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFPIJMDDEN_OLEABFMBEBA_OFFSET))(this);
	}

	::System::String* LHHGLKJLPBM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFPIJMDDEN_LHHGLKJLPBM_OFFSET))(this);
	}

	::System::String* IFOOPFBFKHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFPIJMDDEN_IFOOPFBFKHH_OFFSET))(this);
	}

	::System::Int32 LJGCFJPIDEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFPIJMDDEN_LJGCFJPIDEO_OFFSET))(this);
	}

	/*
	::CJFPIJMDDEN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CJFPIJMDDEN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CJFPIJMDDEN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 EFEBPHKPACJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFPIJMDDEN_EFEBPHKPACJ_OFFSET))(this);
	}

	::System::Int32 GEIJIIOKJEH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFPIJMDDEN_GEIJIIOKJEH_OFFSET))(this);
	}
};

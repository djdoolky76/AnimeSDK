#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NLPEOLJJCIA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NLPEOLJJCIA_AJOBIAJOMJN_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define NLPEOLJJCIA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NLPEOLJJCIA_CLNOODNOMPC_OFFSET UNITYSDK_OFFSET(0x754C20)
#define NLPEOLJJCIA_CNPMPBOFMFN_OFFSET UNITYSDK_OFFSET(0x756D50)
#define NLPEOLJJCIA_GBNFNKCMNBF_OFFSET UNITYSDK_OFFSET(0x754920)
#define NLPEOLJJCIA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NLPEOLJJCIA_MIJKNCHMDKC_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define NLPEOLJJCIA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17FD6CC0)
#define NLPEOLJJCIA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NLPEOLJJCIA_TypeDefinitionIndex = 9661;

struct alignas(4) NLPEOLJJCIA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPEOLJJCIA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLPEOLJJCIA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NLPEOLJJCIA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NLPEOLJJCIA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NLPEOLJJCIA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::NLPEOLJJCIA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NLPEOLJJCIA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLPEOLJJCIA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* CNPMPBOFMFN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPEOLJJCIA_CNPMPBOFMFN_OFFSET))(this);
	}

	::System::Int32 CLNOODNOMPC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPEOLJJCIA_CLNOODNOMPC_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPEOLJJCIA_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 GBNFNKCMNBF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPEOLJJCIA_GBNFNKCMNBF_OFFSET))(this);
	}

	::System::Boolean AJOBIAJOMJN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NLPEOLJJCIA_AJOBIAJOMJN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* MIJKNCHMDKC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPEOLJJCIA_MIJKNCHMDKC_OFFSET))(this);
	}
};

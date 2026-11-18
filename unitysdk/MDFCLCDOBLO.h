#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MDFCLCDOBLO_AJOLIOGJGPC_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define MDFCLCDOBLO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MDFCLCDOBLO_DAPGBBNOAHB_OFFSET UNITYSDK_OFFSET(0x756440)
#define MDFCLCDOBLO_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x756B10)
#define MDFCLCDOBLO_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define MDFCLCDOBLO_FMHPOEOCOOG_OFFSET UNITYSDK_OFFSET(0x756D50)
#define MDFCLCDOBLO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MDFCLCDOBLO_HIPFDAPDIPP_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define MDFCLCDOBLO_HPJBODFFHAJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MDFCLCDOBLO_JNPCCKOGPGE_OFFSET UNITYSDK_OFFSET(0x757290)
#define MDFCLCDOBLO_MKKHDBMPDOK_OFFSET UNITYSDK_OFFSET(0x756490)
#define MDFCLCDOBLO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BA90E50)
#define MDFCLCDOBLO_PIKICPKEKIH_OFFSET UNITYSDK_OFFSET(0x7560E0)
#define MDFCLCDOBLO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MDFCLCDOBLO_TypeDefinitionIndex = 13499;

struct alignas(4) MDFCLCDOBLO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDFCLCDOBLO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDFCLCDOBLO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HPJBODFFHAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDFCLCDOBLO_HPJBODFFHAJ_OFFSET))(this);
	}

	::System::Int32 PIKICPKEKIH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDFCLCDOBLO_PIKICPKEKIH_OFFSET))(this);
	}

	::System::Boolean MKKHDBMPDOK(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MDFCLCDOBLO_MKKHDBMPDOK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::MDFCLCDOBLO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MDFCLCDOBLO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDFCLCDOBLO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DAPGBBNOAHB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDFCLCDOBLO_DAPGBBNOAHB_OFFSET))(this);
	}

	::System::String* HIPFDAPDIPP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDFCLCDOBLO_HIPFDAPDIPP_OFFSET))(this);
	}

	/*
	static ::MDFCLCDOBLO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 AOOCHHNLFDB, ::System::Int32 KCKNFNJOIIB, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MDFCLCDOBLO(*)(::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MDFCLCDOBLO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, AOOCHHNLFDB, KCKNFNJOIIB, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* AJOLIOGJGPC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDFCLCDOBLO_AJOLIOGJGPC_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDFCLCDOBLO_ENJENAJGHFI_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDFCLCDOBLO_DECMGICKDLH_OFFSET))(this);
	}

	::System::String* JNPCCKOGPGE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDFCLCDOBLO_JNPCCKOGPGE_OFFSET))(this);
	}

	::System::String* FMHPOEOCOOG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDFCLCDOBLO_FMHPOEOCOOG_OFFSET))(this);
	}
};

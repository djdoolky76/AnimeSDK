#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KGHMFCDIADG_ALMJBHFEOFA_OFFSET UNITYSDK_OFFSET(0x755E40)
#define KGHMFCDIADG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KGHMFCDIADG_EJGCJGHCONG_OFFSET UNITYSDK_OFFSET(0x754D50)
#define KGHMFCDIADG_FPKLHKBFPJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KGHMFCDIADG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KGHMFCDIADG_HDNCCEDDKDG_OFFSET UNITYSDK_OFFSET(0x756B10)
#define KGHMFCDIADG_JOFHCONEIAK_OFFSET UNITYSDK_OFFSET(0x754F10)
#define KGHMFCDIADG_MMNGPPJKLNI_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KGHMFCDIADG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18DE72E0)
#define KGHMFCDIADG_PMOPDOPMJNG_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define KGHMFCDIADG_PPGIILOMEDH_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KGHMFCDIADG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KGHMFCDIADG_TypeDefinitionIndex = 13784;

struct alignas(4) KGHMFCDIADG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHMFCDIADG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KGHMFCDIADG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* JOFHCONEIAK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHMFCDIADG_JOFHCONEIAK_OFFSET))(this);
	}

	/*
	::KGHMFCDIADG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KGHMFCDIADG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KGHMFCDIADG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MMNGPPJKLNI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHMFCDIADG_MMNGPPJKLNI_OFFSET))(this);
	}

	::System::Boolean PMOPDOPMJNG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KGHMFCDIADG_PMOPDOPMJNG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 PPGIILOMEDH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHMFCDIADG_PPGIILOMEDH_OFFSET))(this);
	}

	::System::Int32 ALMJBHFEOFA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHMFCDIADG_ALMJBHFEOFA_OFFSET))(this);
	}

	::System::Int32 EJGCJGHCONG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHMFCDIADG_EJGCJGHCONG_OFFSET))(this);
	}

	::System::Int32 FPKLHKBFPJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHMFCDIADG_FPKLHKBFPJL_OFFSET))(this);
	}

	/*
	static ::KGHMFCDIADG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KGHMFCDIADG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KGHMFCDIADG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* HDNCCEDDKDG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHMFCDIADG_HDNCCEDDKDG_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EHJOMHJBOMB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EHJOMHJBOMB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EHJOMHJBOMB_DEIIJNOMHIA_OFFSET UNITYSDK_OFFSET(0x755A00)
#define EHJOMHJBOMB_DOEDAHHFJFD_OFFSET UNITYSDK_OFFSET(0x754F10)
#define EHJOMHJBOMB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EHJOMHJBOMB_HBABHHPAAEO_OFFSET UNITYSDK_OFFSET(0x756D50)
#define EHJOMHJBOMB_JEENIBMIGDC_OFFSET UNITYSDK_OFFSET(0x756B10)
#define EHJOMHJBOMB_LLHMIGCLLDE_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define EHJOMHJBOMB_MFCDAOCMECG_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define EHJOMHJBOMB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B9B6DA0)
#define EHJOMHJBOMB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EHJOMHJBOMB_TypeDefinitionIndex = 15339;

struct alignas(4) EHJOMHJBOMB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJOMHJBOMB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHJOMHJBOMB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* DEIIJNOMHIA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJOMHJBOMB_DEIIJNOMHIA_OFFSET))(this);
	}

	::System::String* HBABHHPAAEO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJOMHJBOMB_HBABHHPAAEO_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJOMHJBOMB_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* MFCDAOCMECG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJOMHJBOMB_MFCDAOCMECG_OFFSET))(this);
	}

	/*
	static ::EHJOMHJBOMB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EHJOMHJBOMB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EHJOMHJBOMB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::EHJOMHJBOMB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EHJOMHJBOMB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHJOMHJBOMB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* LLHMIGCLLDE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJOMHJBOMB_LLHMIGCLLDE_OFFSET))(this);
	}

	::System::String* DOEDAHHFJFD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJOMHJBOMB_DOEDAHHFJFD_OFFSET))(this);
	}

	::System::String* JEENIBMIGDC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJOMHJBOMB_JEENIBMIGDC_OFFSET))(this);
	}
};

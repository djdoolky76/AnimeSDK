#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IFMPOCALBAN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IFMPOCALBAN_CBEIIMPBCFO_OFFSET UNITYSDK_OFFSET(0x755A00)
#define IFMPOCALBAN_DCFCILMPJEH_OFFSET UNITYSDK_OFFSET(0x755890)
#define IFMPOCALBAN_DEGBHJHBDPO_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define IFMPOCALBAN_ECIDDIDMDHK_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define IFMPOCALBAN_FDBCDLHJAKL_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define IFMPOCALBAN_FFLPGDBLEHM_OFFSET UNITYSDK_OFFSET(0x755E40)
#define IFMPOCALBAN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IFMPOCALBAN_JEIBCEEONCF_OFFSET UNITYSDK_OFFSET(0x754B50)
#define IFMPOCALBAN_KAEHOIIGEDJ_OFFSET UNITYSDK_OFFSET(0x762FE0)
#define IFMPOCALBAN_KEDJHGNBBNL_OFFSET UNITYSDK_OFFSET(0x764220)
#define IFMPOCALBAN_KGGAFICEEKM_OFFSET UNITYSDK_OFFSET(0x757290)
#define IFMPOCALBAN_LNNFABNGPHJ_OFFSET UNITYSDK_OFFSET(0x7A5BD0)
#define IFMPOCALBAN_MMLIHCLFNAK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IFMPOCALBAN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B624650)
#define IFMPOCALBAN_OJHOCNIHIDA_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define IFMPOCALBAN_PIHCLMNKCAO_OFFSET UNITYSDK_OFFSET(0x756360)
#define IFMPOCALBAN_PIHHPIPKFLE_OFFSET UNITYSDK_OFFSET(0x7587D0)
#define IFMPOCALBAN_PKJGEEKDKLM_OFFSET UNITYSDK_OFFSET(0x756B10)
#define IFMPOCALBAN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IFMPOCALBAN_TypeDefinitionIndex = 12863;

struct alignas(4) IFMPOCALBAN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMPOCALBAN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFMPOCALBAN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 KAEHOIIGEDJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMPOCALBAN_KAEHOIIGEDJ_OFFSET))(this);
	}

	::System::Int32 JEIBCEEONCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMPOCALBAN_JEIBCEEONCF_OFFSET))(this);
	}

	::System::Int32 FFLPGDBLEHM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMPOCALBAN_FFLPGDBLEHM_OFFSET))(this);
	}

	::System::Single KEDJHGNBBNL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMPOCALBAN_KEDJHGNBBNL_OFFSET))(this);
	}

	::System::Int32 DCFCILMPJEH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMPOCALBAN_DCFCILMPJEH_OFFSET))(this);
	}

	::System::Boolean PIHCLMNKCAO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + IFMPOCALBAN_PIHCLMNKCAO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* KGGAFICEEKM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMPOCALBAN_KGGAFICEEKM_OFFSET))(this);
	}

	::System::Single LNNFABNGPHJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMPOCALBAN_LNNFABNGPHJ_OFFSET))(this);
	}

	::System::String* CBEIIMPBCFO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMPOCALBAN_CBEIIMPBCFO_OFFSET))(this);
	}

	::System::Int32 PIHHPIPKFLE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMPOCALBAN_PIHHPIPKFLE_OFFSET))(this);
	}

	::System::String* FDBCDLHJAKL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMPOCALBAN_FDBCDLHJAKL_OFFSET))(this);
	}

	::System::String* ECIDDIDMDHK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMPOCALBAN_ECIDDIDMDHK_OFFSET))(this);
	}

	/*
	static ::IFMPOCALBAN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IFMPOCALBAN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IFMPOCALBAN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* OJHOCNIHIDA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMPOCALBAN_OJHOCNIHIDA_OFFSET))(this);
	}

	::System::String* PKJGEEKDKLM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMPOCALBAN_PKJGEEKDKLM_OFFSET))(this);
	}

	::System::Int32 DEGBHJHBDPO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMPOCALBAN_DEGBHJHBDPO_OFFSET))(this);
	}

	/*
	::IFMPOCALBAN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IFMPOCALBAN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFMPOCALBAN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MMLIHCLFNAK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMPOCALBAN_MMLIHCLFNAK_OFFSET))(this);
	}
};

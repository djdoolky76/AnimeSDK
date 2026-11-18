#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CCAMLNFCKFO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CCAMLNFCKFO_BHMMKDGCLGB_OFFSET UNITYSDK_OFFSET(0x756B10)
#define CCAMLNFCKFO_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CCAMLNFCKFO_ELJPPPBJKAJ_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define CCAMLNFCKFO_FANGNBDGOMO_OFFSET UNITYSDK_OFFSET(0x755D20)
#define CCAMLNFCKFO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CCAMLNFCKFO_ICEPJNCOIBO_OFFSET UNITYSDK_OFFSET(0x757290)
#define CCAMLNFCKFO_LEFLNBDBHGP_OFFSET UNITYSDK_OFFSET(0x755A00)
#define CCAMLNFCKFO_LFPFCAFBOEK_OFFSET UNITYSDK_OFFSET(0x756D50)
#define CCAMLNFCKFO_LMPMGEBECIK_OFFSET UNITYSDK_OFFSET(0x756780)
#define CCAMLNFCKFO_MFGPCPDNOKO_OFFSET UNITYSDK_OFFSET(0x757190)
#define CCAMLNFCKFO_NEBLIFEABCP_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define CCAMLNFCKFO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A580360)
#define CCAMLNFCKFO_OECIOIKGBEG_OFFSET UNITYSDK_OFFSET(0x7563E0)
#define CCAMLNFCKFO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CCAMLNFCKFO_TypeDefinitionIndex = 12829;

struct alignas(4) CCAMLNFCKFO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAMLNFCKFO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CCAMLNFCKFO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* NEBLIFEABCP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAMLNFCKFO_NEBLIFEABCP_OFFSET))(this);
	}

	/*
	::CCAMLNFCKFO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CCAMLNFCKFO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CCAMLNFCKFO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* MFGPCPDNOKO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAMLNFCKFO_MFGPCPDNOKO_OFFSET))(this);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAMLNFCKFO_DNKLBHKEDEM_OFFSET))(this);
	}

	::System::Boolean LMPMGEBECIK(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CCAMLNFCKFO_LMPMGEBECIK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* ICEPJNCOIBO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAMLNFCKFO_ICEPJNCOIBO_OFFSET))(this);
	}

	::System::Int32 FANGNBDGOMO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAMLNFCKFO_FANGNBDGOMO_OFFSET))(this);
	}

	::System::String* LFPFCAFBOEK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAMLNFCKFO_LFPFCAFBOEK_OFFSET))(this);
	}

	/*
	static ::CCAMLNFCKFO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CCAMLNFCKFO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CCAMLNFCKFO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* LEFLNBDBHGP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAMLNFCKFO_LEFLNBDBHGP_OFFSET))(this);
	}

	::System::Int32 OECIOIKGBEG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAMLNFCKFO_OECIOIKGBEG_OFFSET))(this);
	}

	::System::String* BHMMKDGCLGB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAMLNFCKFO_BHMMKDGCLGB_OFFSET))(this);
	}

	::System::String* ELJPPPBJKAJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAMLNFCKFO_ELJPPPBJKAJ_OFFSET))(this);
	}
};

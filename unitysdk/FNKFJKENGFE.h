#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FNKFJKENGFE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FNKFJKENGFE_BKJLECKHPKA_OFFSET UNITYSDK_OFFSET(0x7DE1A0)
#define FNKFJKENGFE_FIODAAJLOAN_OFFSET UNITYSDK_OFFSET(0x754C20)
#define FNKFJKENGFE_FPKLHKBFPJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FNKFJKENGFE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FNKFJKENGFE_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define FNKFJKENGFE_JKKODAECNBO_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define FNKFJKENGFE_LFPFCAFBOEK_OFFSET UNITYSDK_OFFSET(0x755C70)
#define FNKFJKENGFE_MBIEHCJDBHJ_OFFSET UNITYSDK_OFFSET(0x756B10)
#define FNKFJKENGFE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x193255B0)
#define FNKFJKENGFE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FNKFJKENGFE_TypeDefinitionIndex = 15148;

struct alignas(4) FNKFJKENGFE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKFJKENGFE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNKFJKENGFE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LFPFCAFBOEK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKFJKENGFE_LFPFCAFBOEK_OFFSET))(this);
	}

	::System::String* JKKODAECNBO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKFJKENGFE_JKKODAECNBO_OFFSET))(this);
	}

	::System::Int32 FIODAAJLOAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKFJKENGFE_FIODAAJLOAN_OFFSET))(this);
	}

	/*
	::FNKFJKENGFE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FNKFJKENGFE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNKFJKENGFE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FPKLHKBFPJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKFJKENGFE_FPKLHKBFPJL_OFFSET))(this);
	}

	::System::Boolean BKJLECKHPKA(::System::Int32 HPMEONKHFGG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + FNKFJKENGFE_BKJLECKHPKA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::FNKFJKENGFE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FNKFJKENGFE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FNKFJKENGFE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKFJKENGFE_HKELPCLHLEC_OFFSET))(this);
	}

	::System::String* MBIEHCJDBHJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKFJKENGFE_MBIEHCJDBHJ_OFFSET))(this);
	}
};

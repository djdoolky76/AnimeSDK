#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CEOHBHNOIAO.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ALOACIEGMAI_BAPGAJKGIAD_OFFSET UNITYSDK_OFFSET(0x825B20)
#define ALOACIEGMAI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ALOACIEGMAI_BOLLDGCJNLA_OFFSET UNITYSDK_OFFSET(0x763920)
#define ALOACIEGMAI_CAHJOIJLKCJ_OFFSET UNITYSDK_OFFSET(0x7EE500)
#define ALOACIEGMAI_DGKJIONLIFH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define ALOACIEGMAI_DKFHDPJKDFF_OFFSET UNITYSDK_OFFSET(0x7EE4A0)
#define ALOACIEGMAI_EIGMJFDHJPI_OFFSET UNITYSDK_OFFSET(0x825A60)
#define ALOACIEGMAI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ALOACIEGMAI_HHEBACCLCDI_OFFSET UNITYSDK_OFFSET(0x756B10)
#define ALOACIEGMAI_HMEGEELHINL_OFFSET UNITYSDK_OFFSET(0x825AC0)
#define ALOACIEGMAI_ILCDEDNHCHK_OFFSET UNITYSDK_OFFSET(0x757330)
#define ALOACIEGMAI_IPHDEOGKOBI_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ALOACIEGMAI_KGJCCBAFNMD_OFFSET UNITYSDK_OFFSET(0x756D50)
#define ALOACIEGMAI_LNLNHEMFAEC_OFFSET UNITYSDK_OFFSET(0x755A00)
#define ALOACIEGMAI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C50AF00)
#define ALOACIEGMAI_ODLPELGEBAJ_OFFSET UNITYSDK_OFFSET(0x754F10)
#define ALOACIEGMAI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ALOACIEGMAI_TypeDefinitionIndex = 9380;

struct alignas(4) ALOACIEGMAI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOACIEGMAI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ALOACIEGMAI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Nullable_1<::CEOHBHNOIAO> EIGMJFDHJPI()
	{
		return ((::System::Nullable_1<::CEOHBHNOIAO>(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOACIEGMAI_EIGMJFDHJPI_OFFSET))(this);
	}

	::System::Nullable_1<::CEOHBHNOIAO> CAHJOIJLKCJ()
	{
		return ((::System::Nullable_1<::CEOHBHNOIAO>(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOACIEGMAI_CAHJOIJLKCJ_OFFSET))(this);
	}

	/*
	static ::ALOACIEGMAI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ALOACIEGMAI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ALOACIEGMAI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* LNLNHEMFAEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOACIEGMAI_LNLNHEMFAEC_OFFSET))(this);
	}

	::System::Nullable_1<::CEOHBHNOIAO> HMEGEELHINL()
	{
		return ((::System::Nullable_1<::CEOHBHNOIAO>(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOACIEGMAI_HMEGEELHINL_OFFSET))(this);
	}

	::System::Int32 ILCDEDNHCHK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOACIEGMAI_ILCDEDNHCHK_OFFSET))(this);
	}

	::System::Boolean BOLLDGCJNLA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + ALOACIEGMAI_BOLLDGCJNLA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Nullable_1<::CEOHBHNOIAO> BAPGAJKGIAD()
	{
		return ((::System::Nullable_1<::CEOHBHNOIAO>(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOACIEGMAI_BAPGAJKGIAD_OFFSET))(this);
	}

	/*
	::ALOACIEGMAI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ALOACIEGMAI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ALOACIEGMAI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* ODLPELGEBAJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOACIEGMAI_ODLPELGEBAJ_OFFSET))(this);
	}

	::System::String* HHEBACCLCDI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOACIEGMAI_HHEBACCLCDI_OFFSET))(this);
	}

	::System::Int32 IPHDEOGKOBI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOACIEGMAI_IPHDEOGKOBI_OFFSET))(this);
	}

	::System::Nullable_1<::CEOHBHNOIAO> DKFHDPJKDFF()
	{
		return ((::System::Nullable_1<::CEOHBHNOIAO>(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOACIEGMAI_DKFHDPJKDFF_OFFSET))(this);
	}

	::System::String* KGJCCBAFNMD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOACIEGMAI_KGJCCBAFNMD_OFFSET))(this);
	}

	::System::String* DGKJIONLIFH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOACIEGMAI_DGKJIONLIFH_OFFSET))(this);
	}
};

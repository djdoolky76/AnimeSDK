#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PKFHPLCKHKL_AHMCPPNNAOF_OFFSET UNITYSDK_OFFSET(0x755D20)
#define PKFHPLCKHKL_AJEDDNMECNI_OFFSET UNITYSDK_OFFSET(0x755A00)
#define PKFHPLCKHKL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PKFHPLCKHKL_BKGKPAMALKA_OFFSET UNITYSDK_OFFSET(0x756B10)
#define PKFHPLCKHKL_FAOILJABEJF_OFFSET UNITYSDK_OFFSET(0x766400)
#define PKFHPLCKHKL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PKFHPLCKHKL_IDJBMKIAJHG_OFFSET UNITYSDK_OFFSET(0x756D50)
#define PKFHPLCKHKL_JLKOALPHAHB_OFFSET UNITYSDK_OFFSET(0x76FBF0)
#define PKFHPLCKHKL_NMLMHFHPAIF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PKFHPLCKHKL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C0B2090)
#define PKFHPLCKHKL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PKFHPLCKHKL_TypeDefinitionIndex = 11199;

struct alignas(4) PKFHPLCKHKL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFHPLCKHKL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PKFHPLCKHKL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean FAOILJABEJF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFHPLCKHKL_FAOILJABEJF_OFFSET))(this);
	}

	::System::String* BKGKPAMALKA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFHPLCKHKL_BKGKPAMALKA_OFFSET))(this);
	}

	/*
	::PKFHPLCKHKL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PKFHPLCKHKL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PKFHPLCKHKL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 AHMCPPNNAOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFHPLCKHKL_AHMCPPNNAOF_OFFSET))(this);
	}

	::System::Boolean JLKOALPHAHB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFHPLCKHKL_JLKOALPHAHB_OFFSET))(this);
	}

	::System::String* AJEDDNMECNI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFHPLCKHKL_AJEDDNMECNI_OFFSET))(this);
	}

	/*
	static ::PKFHPLCKHKL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PKFHPLCKHKL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PKFHPLCKHKL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* IDJBMKIAJHG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFHPLCKHKL_IDJBMKIAJHG_OFFSET))(this);
	}

	::System::Int32 NMLMHFHPAIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFHPLCKHKL_NMLMHFHPAIF_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PMAJCGPALCO_BBJGHAGDKOM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define PMAJCGPALCO_BEPBOCBNMHG_OFFSET UNITYSDK_OFFSET(0x754920)
#define PMAJCGPALCO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PMAJCGPALCO_FJPGCNGHHCC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PMAJCGPALCO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PMAJCGPALCO_JDOJEMKNAHE_OFFSET UNITYSDK_OFFSET(0x754970)
#define PMAJCGPALCO_NABKEDOOCIA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define PMAJCGPALCO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C0B3040)
#define PMAJCGPALCO_OJHJJICEAIA_OFFSET UNITYSDK_OFFSET(0x755A00)
#define PMAJCGPALCO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PMAJCGPALCO_TypeDefinitionIndex = 13614;

struct alignas(4) PMAJCGPALCO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMAJCGPALCO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMAJCGPALCO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 FJPGCNGHHCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMAJCGPALCO_FJPGCNGHHCC_OFFSET))(this);
	}

	::System::Int32 NABKEDOOCIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMAJCGPALCO_NABKEDOOCIA_OFFSET))(this);
	}

	::System::String* OJHJJICEAIA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMAJCGPALCO_OJHJJICEAIA_OFFSET))(this);
	}

	/*
	static ::PMAJCGPALCO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PMAJCGPALCO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PMAJCGPALCO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 BBJGHAGDKOM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMAJCGPALCO_BBJGHAGDKOM_OFFSET))(this);
	}

	/*
	::PMAJCGPALCO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PMAJCGPALCO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMAJCGPALCO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 JDOJEMKNAHE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMAJCGPALCO_JDOJEMKNAHE_OFFSET))(this);
	}

	::System::Int32 BEPBOCBNMHG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMAJCGPALCO_BEPBOCBNMHG_OFFSET))(this);
	}
};

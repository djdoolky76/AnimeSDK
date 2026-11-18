#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define HLEEEEAMKIL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HLEEEEAMKIL_CAAOEJDOOCP_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define HLEEEEAMKIL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HLEEEEAMKIL_JEJMPMPBNGF_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define HLEEEEAMKIL_JHKGLJCDBJE_OFFSET UNITYSDK_OFFSET(0x755C70)
#define HLEEEEAMKIL_LHNGGJIAFIB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HLEEEEAMKIL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19344140)
#define HLEEEEAMKIL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HLEEEEAMKIL_TypeDefinitionIndex = 15282;

struct alignas(4) HLEEEEAMKIL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLEEEEAMKIL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLEEEEAMKIL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 JHKGLJCDBJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLEEEEAMKIL_JHKGLJCDBJE_OFFSET))(this);
	}

	::System::Int32 JEJMPMPBNGF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLEEEEAMKIL_JEJMPMPBNGF_OFFSET))(this);
	}

	::System::Boolean CAAOEJDOOCP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HLEEEEAMKIL_CAAOEJDOOCP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::HLEEEEAMKIL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HLEEEEAMKIL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLEEEEAMKIL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HLEEEEAMKIL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HLEEEEAMKIL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HLEEEEAMKIL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 LHNGGJIAFIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLEEEEAMKIL_LHNGGJIAFIB_OFFSET))(this);
	}
};

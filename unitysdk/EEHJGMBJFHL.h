#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JGKEKGAPBDA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EEHJGMBJFHL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EEHJGMBJFHL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D0F00)
#define EEHJGMBJFHL_CFBHEJNJGML_1_OFFSET UNITYSDK_OFFSET(0x187A59B0)
#define EEHJGMBJFHL_CFBHEJNJGML_OFFSET UNITYSDK_OFFSET(0x187A58B0)
#define EEHJGMBJFHL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EEHJGMBJFHL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EEHJGMBJFHL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D0EE0)
#define EEHJGMBJFHL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D0EF0)
#define EEHJGMBJFHL___INIT_OFFSET UNITYSDK_OFFSET(0x7D0EC0)

inline static constexpr unsigned int EEHJGMBJFHL_TypeDefinitionIndex = 10004;

struct alignas(8) EEHJGMBJFHL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHJGMBJFHL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EEHJGMBJFHL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JGKEKGAPBDA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JGKEKGAPBDA&))((::PBYTE)hIl2Cpp + EEHJGMBJFHL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JGKEKGAPBDA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JGKEKGAPBDA&, ::System::Int32&))((::PBYTE)hIl2Cpp + EEHJGMBJFHL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::EEHJGMBJFHL CFBHEJNJGML(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EEHJGMBJFHL EIFONLCJOPG)
	{
		return ((::EEHJGMBJFHL(*)(::FlatBuffers::ByteBuffer*, ::EEHJGMBJFHL))((::PBYTE)hIl2Cpp + EEHJGMBJFHL_CFBHEJNJGML_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHJGMBJFHL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::EEHJGMBJFHL CFBHEJNJGML_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EEHJGMBJFHL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EEHJGMBJFHL_CFBHEJNJGML_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHJGMBJFHL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::EEHJGMBJFHL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EEHJGMBJFHL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EEHJGMBJFHL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};

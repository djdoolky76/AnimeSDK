#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GHELKBEMMLP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OCDIKONNGOL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OCDIKONNGOL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C4B30)
#define OCDIKONNGOL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OCDIKONNGOL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OCDIKONNGOL_HDCILIIIFID_1_OFFSET UNITYSDK_OFFSET(0x17FDE0B0)
#define OCDIKONNGOL_HDCILIIIFID_OFFSET UNITYSDK_OFFSET(0x17FDE040)
#define OCDIKONNGOL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C4B70)
#define OCDIKONNGOL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C4B80)
#define OCDIKONNGOL___INIT_OFFSET UNITYSDK_OFFSET(0x7C4B10)

inline static constexpr unsigned int OCDIKONNGOL_TypeDefinitionIndex = 13743;

struct alignas(8) OCDIKONNGOL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCDIKONNGOL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OCDIKONNGOL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::OCDIKONNGOL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OCDIKONNGOL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OCDIKONNGOL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OCDIKONNGOL HDCILIIIFID(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OCDIKONNGOL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OCDIKONNGOL_HDCILIIIFID_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::OCDIKONNGOL HDCILIIIFID_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OCDIKONNGOL EIFONLCJOPG)
	{
		return ((::OCDIKONNGOL(*)(::FlatBuffers::ByteBuffer*, ::OCDIKONNGOL))((::PBYTE)hIl2Cpp + OCDIKONNGOL_HDCILIIIFID_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GHELKBEMMLP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GHELKBEMMLP&))((::PBYTE)hIl2Cpp + OCDIKONNGOL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GHELKBEMMLP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GHELKBEMMLP&, ::System::Int32&))((::PBYTE)hIl2Cpp + OCDIKONNGOL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCDIKONNGOL_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCDIKONNGOL_PPOMNIFACOL_OFFSET))(this);
	}
};

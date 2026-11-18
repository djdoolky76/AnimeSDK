#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ELOEJHMNADB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CCMBHDNHNOM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CCMBHDNHNOM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F50A0)
#define CCMBHDNHNOM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CCMBHDNHNOM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CCMBHDNHNOM_IAIMJMJLDLH_1_OFFSET UNITYSDK_OFFSET(0x1A178730)
#define CCMBHDNHNOM_IAIMJMJLDLH_OFFSET UNITYSDK_OFFSET(0x1A1786C0)
#define CCMBHDNHNOM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F50F0)
#define CCMBHDNHNOM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F50E0)
#define CCMBHDNHNOM___INIT_OFFSET UNITYSDK_OFFSET(0x7F5080)

inline static constexpr unsigned int CCMBHDNHNOM_TypeDefinitionIndex = 11125;

struct alignas(8) CCMBHDNHNOM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMBHDNHNOM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CCMBHDNHNOM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::CCMBHDNHNOM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CCMBHDNHNOM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CCMBHDNHNOM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CCMBHDNHNOM IAIMJMJLDLH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CCMBHDNHNOM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CCMBHDNHNOM_IAIMJMJLDLH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMBHDNHNOM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ELOEJHMNADB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ELOEJHMNADB&, ::System::Int32&))((::PBYTE)hIl2Cpp + CCMBHDNHNOM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMBHDNHNOM_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ELOEJHMNADB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ELOEJHMNADB&))((::PBYTE)hIl2Cpp + CCMBHDNHNOM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::CCMBHDNHNOM IAIMJMJLDLH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CCMBHDNHNOM EIFONLCJOPG)
	{
		return ((::CCMBHDNHNOM(*)(::FlatBuffers::ByteBuffer*, ::CCMBHDNHNOM))((::PBYTE)hIl2Cpp + CCMBHDNHNOM_IAIMJMJLDLH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};

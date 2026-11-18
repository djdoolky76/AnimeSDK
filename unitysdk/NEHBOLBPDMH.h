#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JMOMGAJINCE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NEHBOLBPDMH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NEHBOLBPDMH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D7F20)
#define NEHBOLBPDMH_COIEMBBOPGA_1_OFFSET UNITYSDK_OFFSET(0x18E1C6F0)
#define NEHBOLBPDMH_COIEMBBOPGA_OFFSET UNITYSDK_OFFSET(0x18E1C680)
#define NEHBOLBPDMH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NEHBOLBPDMH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NEHBOLBPDMH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D7F60)
#define NEHBOLBPDMH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D7F70)
#define NEHBOLBPDMH___INIT_OFFSET UNITYSDK_OFFSET(0x7D7F00)

inline static constexpr unsigned int NEHBOLBPDMH_TypeDefinitionIndex = 15448;

struct alignas(8) NEHBOLBPDMH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEHBOLBPDMH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NEHBOLBPDMH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::NEHBOLBPDMH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NEHBOLBPDMH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NEHBOLBPDMH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JMOMGAJINCE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JMOMGAJINCE&, ::System::Int32&))((::PBYTE)hIl2Cpp + NEHBOLBPDMH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::NEHBOLBPDMH COIEMBBOPGA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NEHBOLBPDMH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NEHBOLBPDMH_COIEMBBOPGA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JMOMGAJINCE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JMOMGAJINCE&))((::PBYTE)hIl2Cpp + NEHBOLBPDMH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEHBOLBPDMH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NEHBOLBPDMH COIEMBBOPGA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NEHBOLBPDMH EIFONLCJOPG)
	{
		return ((::NEHBOLBPDMH(*)(::FlatBuffers::ByteBuffer*, ::NEHBOLBPDMH))((::PBYTE)hIl2Cpp + NEHBOLBPDMH_COIEMBBOPGA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEHBOLBPDMH_GHKKNCCLPAN_OFFSET))(this);
	}
};

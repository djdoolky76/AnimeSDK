#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PJPIJDCBDLN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ODJNMHLIOIC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ODJNMHLIOIC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AB810)
#define ODJNMHLIOIC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ODJNMHLIOIC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ODJNMHLIOIC_JKCLHBMIJBH_1_OFFSET UNITYSDK_OFFSET(0x1CFF7F50)
#define ODJNMHLIOIC_JKCLHBMIJBH_OFFSET UNITYSDK_OFFSET(0x1CFF7EE0)
#define ODJNMHLIOIC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8AB800)
#define ODJNMHLIOIC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AB850)
#define ODJNMHLIOIC___INIT_OFFSET UNITYSDK_OFFSET(0x8AB7E0)

inline static constexpr unsigned int ODJNMHLIOIC_TypeDefinitionIndex = 10075;

struct alignas(8) ODJNMHLIOIC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODJNMHLIOIC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODJNMHLIOIC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PJPIJDCBDLN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PJPIJDCBDLN&, ::System::Int32&))((::PBYTE)hIl2Cpp + ODJNMHLIOIC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::ODJNMHLIOIC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ODJNMHLIOIC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODJNMHLIOIC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODJNMHLIOIC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::ODJNMHLIOIC JKCLHBMIJBH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ODJNMHLIOIC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODJNMHLIOIC_JKCLHBMIJBH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PJPIJDCBDLN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PJPIJDCBDLN&))((::PBYTE)hIl2Cpp + ODJNMHLIOIC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::ODJNMHLIOIC JKCLHBMIJBH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ODJNMHLIOIC EIFONLCJOPG)
	{
		return ((::ODJNMHLIOIC(*)(::FlatBuffers::ByteBuffer*, ::ODJNMHLIOIC))((::PBYTE)hIl2Cpp + ODJNMHLIOIC_JKCLHBMIJBH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODJNMHLIOIC_PPOMNIFACOL_OFFSET))(this);
	}
};

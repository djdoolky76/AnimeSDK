#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GLCJLCCMLBK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HAKKGKHIEPB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HAKKGKHIEPB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x779920)
#define HAKKGKHIEPB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HAKKGKHIEPB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HAKKGKHIEPB_LHMEMNIFOOG_1_OFFSET UNITYSDK_OFFSET(0x160EE980)
#define HAKKGKHIEPB_LHMEMNIFOOG_OFFSET UNITYSDK_OFFSET(0x160EE910)
#define HAKKGKHIEPB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x779960)
#define HAKKGKHIEPB___INIT_OFFSET UNITYSDK_OFFSET(0x779900)

inline static constexpr unsigned int HAKKGKHIEPB_TypeDefinitionIndex = 17079;

struct alignas(8) HAKKGKHIEPB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAKKGKHIEPB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HAKKGKHIEPB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HAKKGKHIEPB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HAKKGKHIEPB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HAKKGKHIEPB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAKKGKHIEPB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HAKKGKHIEPB LHMEMNIFOOG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HAKKGKHIEPB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HAKKGKHIEPB_LHMEMNIFOOG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAKKGKHIEPB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HAKKGKHIEPB LHMEMNIFOOG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HAKKGKHIEPB EIFONLCJOPG)
	{
		return ((::HAKKGKHIEPB(*)(::FlatBuffers::ByteBuffer*, ::HAKKGKHIEPB))((::PBYTE)hIl2Cpp + HAKKGKHIEPB_LHMEMNIFOOG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GLCJLCCMLBK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GLCJLCCMLBK&))((::PBYTE)hIl2Cpp + HAKKGKHIEPB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NFJFDAJDKLJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EIGNPDPILEA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EIGNPDPILEA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F5EF0)
#define EIGNPDPILEA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EIGNPDPILEA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EIGNPDPILEA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F5EE0)
#define EIGNPDPILEA_MIFCAIHFKLF_1_OFFSET UNITYSDK_OFFSET(0x1A19E950)
#define EIGNPDPILEA_MIFCAIHFKLF_OFFSET UNITYSDK_OFFSET(0x1A19E8F0)
#define EIGNPDPILEA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F5F30)
#define EIGNPDPILEA___INIT_OFFSET UNITYSDK_OFFSET(0x7F5EC0)

inline static constexpr unsigned int EIGNPDPILEA_TypeDefinitionIndex = 11411;

struct alignas(8) EIGNPDPILEA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGNPDPILEA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIGNPDPILEA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGNPDPILEA_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NFJFDAJDKLJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NFJFDAJDKLJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + EIGNPDPILEA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::EIGNPDPILEA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EIGNPDPILEA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIGNPDPILEA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::EIGNPDPILEA MIFCAIHFKLF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EIGNPDPILEA EIFONLCJOPG)
	{
		return ((::EIGNPDPILEA(*)(::FlatBuffers::ByteBuffer*, ::EIGNPDPILEA))((::PBYTE)hIl2Cpp + EIGNPDPILEA_MIFCAIHFKLF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGNPDPILEA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::EIGNPDPILEA MIFCAIHFKLF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EIGNPDPILEA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIGNPDPILEA_MIFCAIHFKLF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NFJFDAJDKLJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NFJFDAJDKLJ&))((::PBYTE)hIl2Cpp + EIGNPDPILEA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};

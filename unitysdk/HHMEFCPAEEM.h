#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HHMEFCPAEEM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F84B0)
#define HHMEFCPAEEM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HHMEFCPAEEM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HHMEFCPAEEM_NJJPFIKEELI_1_OFFSET UNITYSDK_OFFSET(0x1A4F0190)
#define HHMEFCPAEEM_NJJPFIKEELI_OFFSET UNITYSDK_OFFSET(0x1A4F0120)
#define HHMEFCPAEEM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F84F0)
#define HHMEFCPAEEM___INIT_OFFSET UNITYSDK_OFFSET(0x7F8490)

inline static constexpr unsigned int HHMEFCPAEEM_TypeDefinitionIndex = 16950;

struct alignas(8) HHMEFCPAEEM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMEFCPAEEM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHMEFCPAEEM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HHMEFCPAEEM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HHMEFCPAEEM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHMEFCPAEEM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMEFCPAEEM_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMEFCPAEEM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HHMEFCPAEEM NJJPFIKEELI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HHMEFCPAEEM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHMEFCPAEEM_NJJPFIKEELI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::HHMEFCPAEEM NJJPFIKEELI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HHMEFCPAEEM EIFONLCJOPG)
	{
		return ((::HHMEFCPAEEM(*)(::FlatBuffers::ByteBuffer*, ::HHMEFCPAEEM))((::PBYTE)hIl2Cpp + HHMEFCPAEEM_NJJPFIKEELI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};

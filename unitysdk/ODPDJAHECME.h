#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HFDBANLGBJA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ODPDJAHECME_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ODPDJAHECME_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EFF60)
#define ODPDJAHECME_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ODPDJAHECME_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ODPDJAHECME_PCNMLDKLNBD_1_OFFSET UNITYSDK_OFFSET(0x19DCDD60)
#define ODPDJAHECME_PCNMLDKLNBD_OFFSET UNITYSDK_OFFSET(0x19DCDCF0)
#define ODPDJAHECME_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EFF50)
#define ODPDJAHECME___INIT_OFFSET UNITYSDK_OFFSET(0x7EFF30)

inline static constexpr unsigned int ODPDJAHECME_TypeDefinitionIndex = 17341;

struct alignas(8) ODPDJAHECME
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODPDJAHECME_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODPDJAHECME___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HFDBANLGBJA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HFDBANLGBJA&))((::PBYTE)hIl2Cpp + ODPDJAHECME_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::ODPDJAHECME PCNMLDKLNBD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ODPDJAHECME(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODPDJAHECME_PCNMLDKLNBD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODPDJAHECME_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::ODPDJAHECME PCNMLDKLNBD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ODPDJAHECME EIFONLCJOPG)
	{
		return ((::ODPDJAHECME(*)(::FlatBuffers::ByteBuffer*, ::ODPDJAHECME))((::PBYTE)hIl2Cpp + ODPDJAHECME_PCNMLDKLNBD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODPDJAHECME_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::ODPDJAHECME BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ODPDJAHECME(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODPDJAHECME_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};

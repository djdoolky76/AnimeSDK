#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OFMAMDKPMFM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OJEGBHJBHGB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OJEGBHJBHGB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x803840)
#define OJEGBHJBHGB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OJEGBHJBHGB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OJEGBHJBHGB_IAFKPIJDLNI_1_OFFSET UNITYSDK_OFFSET(0x1AB33960)
#define OJEGBHJBHGB_IAFKPIJDLNI_OFFSET UNITYSDK_OFFSET(0x1AB338F0)
#define OJEGBHJBHGB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x803830)
#define OJEGBHJBHGB___INIT_OFFSET UNITYSDK_OFFSET(0x803810)

inline static constexpr unsigned int OJEGBHJBHGB_TypeDefinitionIndex = 16658;

struct alignas(8) OJEGBHJBHGB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJEGBHJBHGB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OJEGBHJBHGB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJEGBHJBHGB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OFMAMDKPMFM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OFMAMDKPMFM&))((::PBYTE)hIl2Cpp + OJEGBHJBHGB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::OJEGBHJBHGB IAFKPIJDLNI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OJEGBHJBHGB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OJEGBHJBHGB_IAFKPIJDLNI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::OJEGBHJBHGB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OJEGBHJBHGB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OJEGBHJBHGB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJEGBHJBHGB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::OJEGBHJBHGB IAFKPIJDLNI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OJEGBHJBHGB EIFONLCJOPG)
	{
		return ((::OJEGBHJBHGB(*)(::FlatBuffers::ByteBuffer*, ::OJEGBHJBHGB))((::PBYTE)hIl2Cpp + OJEGBHJBHGB_IAFKPIJDLNI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};

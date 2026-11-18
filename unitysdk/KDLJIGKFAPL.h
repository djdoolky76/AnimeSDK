#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HLMPGPINHCM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KDLJIGKFAPL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KDLJIGKFAPL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DFB80)
#define KDLJIGKFAPL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KDLJIGKFAPL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KDLJIGKFAPL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DFB70)
#define KDLJIGKFAPL_MIJNHEJIKEP_1_OFFSET UNITYSDK_OFFSET(0x19367700)
#define KDLJIGKFAPL_MIJNHEJIKEP_OFFSET UNITYSDK_OFFSET(0x19367640)
#define KDLJIGKFAPL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DFBC0)
#define KDLJIGKFAPL___INIT_OFFSET UNITYSDK_OFFSET(0x7DFB50)

inline static constexpr unsigned int KDLJIGKFAPL_TypeDefinitionIndex = 12246;

struct alignas(8) KDLJIGKFAPL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLJIGKFAPL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDLJIGKFAPL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HLMPGPINHCM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HLMPGPINHCM&))((::PBYTE)hIl2Cpp + KDLJIGKFAPL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HLMPGPINHCM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HLMPGPINHCM&, ::System::Int32&))((::PBYTE)hIl2Cpp + KDLJIGKFAPL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::KDLJIGKFAPL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KDLJIGKFAPL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDLJIGKFAPL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KDLJIGKFAPL MIJNHEJIKEP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KDLJIGKFAPL EIFONLCJOPG)
	{
		return ((::KDLJIGKFAPL(*)(::FlatBuffers::ByteBuffer*, ::KDLJIGKFAPL))((::PBYTE)hIl2Cpp + KDLJIGKFAPL_MIJNHEJIKEP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLJIGKFAPL_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLJIGKFAPL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::KDLJIGKFAPL MIJNHEJIKEP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KDLJIGKFAPL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDLJIGKFAPL_MIJNHEJIKEP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};

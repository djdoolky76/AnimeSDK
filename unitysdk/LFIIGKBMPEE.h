#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KCLJAOJPELF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LFIIGKBMPEE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LFIIGKBMPEE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81EC80)
#define LFIIGKBMPEE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LFIIGKBMPEE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LFIIGKBMPEE_IOEIAGEDBJM_1_OFFSET UNITYSDK_OFFSET(0x1C075800)
#define LFIIGKBMPEE_IOEIAGEDBJM_OFFSET UNITYSDK_OFFSET(0x1C075790)
#define LFIIGKBMPEE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81ECD0)
#define LFIIGKBMPEE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81ECC0)
#define LFIIGKBMPEE___INIT_OFFSET UNITYSDK_OFFSET(0x81EC60)

inline static constexpr unsigned int LFIIGKBMPEE_TypeDefinitionIndex = 15212;

struct alignas(8) LFIIGKBMPEE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFIIGKBMPEE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LFIIGKBMPEE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LFIIGKBMPEE IOEIAGEDBJM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LFIIGKBMPEE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LFIIGKBMPEE_IOEIAGEDBJM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::LFIIGKBMPEE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LFIIGKBMPEE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LFIIGKBMPEE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFIIGKBMPEE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KCLJAOJPELF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KCLJAOJPELF&))((::PBYTE)hIl2Cpp + LFIIGKBMPEE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KCLJAOJPELF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KCLJAOJPELF&, ::System::Int32&))((::PBYTE)hIl2Cpp + LFIIGKBMPEE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::LFIIGKBMPEE IOEIAGEDBJM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LFIIGKBMPEE EIFONLCJOPG)
	{
		return ((::LFIIGKBMPEE(*)(::FlatBuffers::ByteBuffer*, ::LFIIGKBMPEE))((::PBYTE)hIl2Cpp + LFIIGKBMPEE_IOEIAGEDBJM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFIIGKBMPEE_GHKKNCCLPAN_OFFSET))(this);
	}
};

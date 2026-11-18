#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FKECLCANLOC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GFDNHLLHGDM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GFDNHLLHGDM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A7D00)
#define GFDNHLLHGDM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GFDNHLLHGDM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GFDNHLLHGDM_HMANBHJECMB_1_OFFSET UNITYSDK_OFFSET(0x174663C0)
#define GFDNHLLHGDM_HMANBHJECMB_OFFSET UNITYSDK_OFFSET(0x17466350)
#define GFDNHLLHGDM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A7D40)
#define GFDNHLLHGDM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A7CF0)
#define GFDNHLLHGDM___INIT_OFFSET UNITYSDK_OFFSET(0x7A7CD0)

inline static constexpr unsigned int GFDNHLLHGDM_TypeDefinitionIndex = 11849;

struct alignas(8) GFDNHLLHGDM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDNHLLHGDM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFDNHLLHGDM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GFDNHLLHGDM HMANBHJECMB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GFDNHLLHGDM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFDNHLLHGDM_HMANBHJECMB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDNHLLHGDM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDNHLLHGDM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::GFDNHLLHGDM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GFDNHLLHGDM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFDNHLLHGDM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GFDNHLLHGDM HMANBHJECMB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GFDNHLLHGDM EIFONLCJOPG)
	{
		return ((::GFDNHLLHGDM(*)(::FlatBuffers::ByteBuffer*, ::GFDNHLLHGDM))((::PBYTE)hIl2Cpp + GFDNHLLHGDM_HMANBHJECMB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FKECLCANLOC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FKECLCANLOC&))((::PBYTE)hIl2Cpp + GFDNHLLHGDM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FKECLCANLOC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FKECLCANLOC&, ::System::Int32&))((::PBYTE)hIl2Cpp + GFDNHLLHGDM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};

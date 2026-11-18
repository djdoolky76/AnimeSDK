#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NIOAJBDJAFM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FHHIPHGIHEE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FHHIPHGIHEE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EB070)
#define FHHIPHGIHEE_CMBNOKINMME_1_OFFSET UNITYSDK_OFFSET(0x19AF32C0)
#define FHHIPHGIHEE_CMBNOKINMME_OFFSET UNITYSDK_OFFSET(0x19AF31C0)
#define FHHIPHGIHEE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FHHIPHGIHEE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FHHIPHGIHEE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EB050)
#define FHHIPHGIHEE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EB060)
#define FHHIPHGIHEE___INIT_OFFSET UNITYSDK_OFFSET(0x7EB030)

inline static constexpr unsigned int FHHIPHGIHEE_TypeDefinitionIndex = 12295;

struct alignas(8) FHHIPHGIHEE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHIPHGIHEE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHHIPHGIHEE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NIOAJBDJAFM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NIOAJBDJAFM&, ::System::Int32&))((::PBYTE)hIl2Cpp + FHHIPHGIHEE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::FHHIPHGIHEE CMBNOKINMME(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FHHIPHGIHEE EIFONLCJOPG)
	{
		return ((::FHHIPHGIHEE(*)(::FlatBuffers::ByteBuffer*, ::FHHIPHGIHEE))((::PBYTE)hIl2Cpp + FHHIPHGIHEE_CMBNOKINMME_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHIPHGIHEE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::FHHIPHGIHEE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FHHIPHGIHEE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHHIPHGIHEE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHIPHGIHEE_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NIOAJBDJAFM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NIOAJBDJAFM&))((::PBYTE)hIl2Cpp + FHHIPHGIHEE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::FHHIPHGIHEE CMBNOKINMME_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FHHIPHGIHEE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHHIPHGIHEE_CMBNOKINMME_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PGECJINEJPD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EFCMAFBLOCJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EFCMAFBLOCJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E31F0)
#define EFCMAFBLOCJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EFCMAFBLOCJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EFCMAFBLOCJ_HPAEPCNCKKN_1_OFFSET UNITYSDK_OFFSET(0x1951C070)
#define EFCMAFBLOCJ_HPAEPCNCKKN_OFFSET UNITYSDK_OFFSET(0x1951C000)
#define EFCMAFBLOCJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E31D0)
#define EFCMAFBLOCJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E31E0)
#define EFCMAFBLOCJ___INIT_OFFSET UNITYSDK_OFFSET(0x7E31B0)

inline static constexpr unsigned int EFCMAFBLOCJ_TypeDefinitionIndex = 16720;

struct alignas(8) EFCMAFBLOCJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCMAFBLOCJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EFCMAFBLOCJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PGECJINEJPD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PGECJINEJPD&, ::System::Int32&))((::PBYTE)hIl2Cpp + EFCMAFBLOCJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCMAFBLOCJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PGECJINEJPD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PGECJINEJPD&))((::PBYTE)hIl2Cpp + EFCMAFBLOCJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::EFCMAFBLOCJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EFCMAFBLOCJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EFCMAFBLOCJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::EFCMAFBLOCJ HPAEPCNCKKN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EFCMAFBLOCJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EFCMAFBLOCJ_HPAEPCNCKKN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCMAFBLOCJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::EFCMAFBLOCJ HPAEPCNCKKN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EFCMAFBLOCJ EIFONLCJOPG)
	{
		return ((::EFCMAFBLOCJ(*)(::FlatBuffers::ByteBuffer*, ::EFCMAFBLOCJ))((::PBYTE)hIl2Cpp + EFCMAFBLOCJ_HPAEPCNCKKN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};

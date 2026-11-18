#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NMLJHHCPEDG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AAMGCDEBPBC_AKAFDAOGBMJ_1_OFFSET UNITYSDK_OFFSET(0x19BD0550)
#define AAMGCDEBPBC_AKAFDAOGBMJ_OFFSET UNITYSDK_OFFSET(0x19BD04E0)
#define AAMGCDEBPBC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AAMGCDEBPBC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EC330)
#define AAMGCDEBPBC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AAMGCDEBPBC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AAMGCDEBPBC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EC380)
#define AAMGCDEBPBC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EC370)
#define AAMGCDEBPBC___INIT_OFFSET UNITYSDK_OFFSET(0x7EC310)

inline static constexpr unsigned int AAMGCDEBPBC_TypeDefinitionIndex = 14423;

struct alignas(8) AAMGCDEBPBC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMGCDEBPBC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AAMGCDEBPBC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AAMGCDEBPBC AKAFDAOGBMJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AAMGCDEBPBC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AAMGCDEBPBC_AKAFDAOGBMJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NMLJHHCPEDG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NMLJHHCPEDG&))((::PBYTE)hIl2Cpp + AAMGCDEBPBC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::AAMGCDEBPBC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AAMGCDEBPBC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AAMGCDEBPBC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMGCDEBPBC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMGCDEBPBC_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NMLJHHCPEDG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NMLJHHCPEDG&, ::System::Int32&))((::PBYTE)hIl2Cpp + AAMGCDEBPBC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::AAMGCDEBPBC AKAFDAOGBMJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AAMGCDEBPBC EIFONLCJOPG)
	{
		return ((::AAMGCDEBPBC(*)(::FlatBuffers::ByteBuffer*, ::AAMGCDEBPBC))((::PBYTE)hIl2Cpp + AAMGCDEBPBC_AKAFDAOGBMJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};

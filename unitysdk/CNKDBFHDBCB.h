#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NGAPOLPMLJP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CNKDBFHDBCB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CNKDBFHDBCB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EA5C0)
#define CNKDBFHDBCB_FCDIKLIBGGN_1_OFFSET UNITYSDK_OFFSET(0x19AD2460)
#define CNKDBFHDBCB_FCDIKLIBGGN_OFFSET UNITYSDK_OFFSET(0x19AD23F0)
#define CNKDBFHDBCB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CNKDBFHDBCB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CNKDBFHDBCB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EA600)
#define CNKDBFHDBCB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EA610)
#define CNKDBFHDBCB___INIT_OFFSET UNITYSDK_OFFSET(0x7EA5A0)

inline static constexpr unsigned int CNKDBFHDBCB_TypeDefinitionIndex = 11886;

struct alignas(8) CNKDBFHDBCB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNKDBFHDBCB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CNKDBFHDBCB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNKDBFHDBCB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::CNKDBFHDBCB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CNKDBFHDBCB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CNKDBFHDBCB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CNKDBFHDBCB FCDIKLIBGGN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CNKDBFHDBCB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CNKDBFHDBCB_FCDIKLIBGGN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::CNKDBFHDBCB FCDIKLIBGGN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CNKDBFHDBCB EIFONLCJOPG)
	{
		return ((::CNKDBFHDBCB(*)(::FlatBuffers::ByteBuffer*, ::CNKDBFHDBCB))((::PBYTE)hIl2Cpp + CNKDBFHDBCB_FCDIKLIBGGN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NGAPOLPMLJP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NGAPOLPMLJP&))((::PBYTE)hIl2Cpp + CNKDBFHDBCB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NGAPOLPMLJP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NGAPOLPMLJP&, ::System::Int32&))((::PBYTE)hIl2Cpp + CNKDBFHDBCB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNKDBFHDBCB_PPOMNIFACOL_OFFSET))(this);
	}
};

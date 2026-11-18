#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PMNLJEFBFKM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FKJFAKGMPBD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FKJFAKGMPBD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FC1A0)
#define FKJFAKGMPBD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FKJFAKGMPBD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FKJFAKGMPBD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FC1E0)
#define FKJFAKGMPBD_OMGKDLCEKKD_1_OFFSET UNITYSDK_OFFSET(0x1A5A7980)
#define FKJFAKGMPBD_OMGKDLCEKKD_OFFSET UNITYSDK_OFFSET(0x1A5A7910)
#define FKJFAKGMPBD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FC1F0)
#define FKJFAKGMPBD___INIT_OFFSET UNITYSDK_OFFSET(0x7FC180)

inline static constexpr unsigned int FKJFAKGMPBD_TypeDefinitionIndex = 12786;

struct alignas(8) FKJFAKGMPBD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKJFAKGMPBD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FKJFAKGMPBD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::FKJFAKGMPBD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FKJFAKGMPBD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FKJFAKGMPBD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PMNLJEFBFKM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PMNLJEFBFKM&, ::System::Int32&))((::PBYTE)hIl2Cpp + FKJFAKGMPBD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKJFAKGMPBD_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKJFAKGMPBD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PMNLJEFBFKM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PMNLJEFBFKM&))((::PBYTE)hIl2Cpp + FKJFAKGMPBD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::FKJFAKGMPBD OMGKDLCEKKD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FKJFAKGMPBD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FKJFAKGMPBD_OMGKDLCEKKD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::FKJFAKGMPBD OMGKDLCEKKD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FKJFAKGMPBD EIFONLCJOPG)
	{
		return ((::FKJFAKGMPBD(*)(::FlatBuffers::ByteBuffer*, ::FKJFAKGMPBD))((::PBYTE)hIl2Cpp + FKJFAKGMPBD_OMGKDLCEKKD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};

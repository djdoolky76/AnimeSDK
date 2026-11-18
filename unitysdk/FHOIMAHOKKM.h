#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/COGNLKNIHPD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FHOIMAHOKKM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FHOIMAHOKKM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x78A0D0)
#define FHOIMAHOKKM_EAFKJCCBGCC_1_OFFSET UNITYSDK_OFFSET(0x1663C290)
#define FHOIMAHOKKM_EAFKJCCBGCC_OFFSET UNITYSDK_OFFSET(0x1663C220)
#define FHOIMAHOKKM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FHOIMAHOKKM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FHOIMAHOKKM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x78A110)
#define FHOIMAHOKKM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x78A0C0)
#define FHOIMAHOKKM___INIT_OFFSET UNITYSDK_OFFSET(0x78A0A0)

inline static constexpr unsigned int FHOIMAHOKKM_TypeDefinitionIndex = 13709;

struct alignas(8) FHOIMAHOKKM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHOIMAHOKKM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHOIMAHOKKM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHOIMAHOKKM_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHOIMAHOKKM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::FHOIMAHOKKM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FHOIMAHOKKM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHOIMAHOKKM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::COGNLKNIHPD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::COGNLKNIHPD&, ::System::Int32&))((::PBYTE)hIl2Cpp + FHOIMAHOKKM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::COGNLKNIHPD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::COGNLKNIHPD&))((::PBYTE)hIl2Cpp + FHOIMAHOKKM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::FHOIMAHOKKM EAFKJCCBGCC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FHOIMAHOKKM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHOIMAHOKKM_EAFKJCCBGCC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::FHOIMAHOKKM EAFKJCCBGCC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FHOIMAHOKKM EIFONLCJOPG)
	{
		return ((::FHOIMAHOKKM(*)(::FlatBuffers::ByteBuffer*, ::FHOIMAHOKKM))((::PBYTE)hIl2Cpp + FHOIMAHOKKM_EAFKJCCBGCC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KHKNDJCMOMH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BFGLIBKIFCF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BFGLIBKIFCF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x806F90)
#define BFGLIBKIFCF_CAFMEGNDDOP_1_OFFSET UNITYSDK_OFFSET(0x1ADB1950)
#define BFGLIBKIFCF_CAFMEGNDDOP_OFFSET UNITYSDK_OFFSET(0x1ADB18E0)
#define BFGLIBKIFCF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BFGLIBKIFCF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BFGLIBKIFCF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x806F80)
#define BFGLIBKIFCF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x806F70)
#define BFGLIBKIFCF___INIT_OFFSET UNITYSDK_OFFSET(0x806F50)

inline static constexpr unsigned int BFGLIBKIFCF_TypeDefinitionIndex = 17396;

struct alignas(8) BFGLIBKIFCF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGLIBKIFCF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFGLIBKIFCF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KHKNDJCMOMH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KHKNDJCMOMH&))((::PBYTE)hIl2Cpp + BFGLIBKIFCF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::BFGLIBKIFCF CAFMEGNDDOP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BFGLIBKIFCF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFGLIBKIFCF_CAFMEGNDDOP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGLIBKIFCF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::BFGLIBKIFCF CAFMEGNDDOP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BFGLIBKIFCF EIFONLCJOPG)
	{
		return ((::BFGLIBKIFCF(*)(::FlatBuffers::ByteBuffer*, ::BFGLIBKIFCF))((::PBYTE)hIl2Cpp + BFGLIBKIFCF_CAFMEGNDDOP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGLIBKIFCF_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KHKNDJCMOMH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KHKNDJCMOMH&, ::System::Int32&))((::PBYTE)hIl2Cpp + BFGLIBKIFCF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::BFGLIBKIFCF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BFGLIBKIFCF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFGLIBKIFCF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};

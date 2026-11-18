#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GABBNABDJII.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AEGPAJBBGFH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AEGPAJBBGFH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ABE70)
#define AEGPAJBBGFH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AEGPAJBBGFH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AEGPAJBBGFH_HIOJHAEDGJE_1_OFFSET UNITYSDK_OFFSET(0x17745A40)
#define AEGPAJBBGFH_HIOJHAEDGJE_OFFSET UNITYSDK_OFFSET(0x177459E0)
#define AEGPAJBBGFH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7ABE50)
#define AEGPAJBBGFH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7ABE60)
#define AEGPAJBBGFH___INIT_OFFSET UNITYSDK_OFFSET(0x7ABE30)

inline static constexpr unsigned int AEGPAJBBGFH_TypeDefinitionIndex = 17420;

struct alignas(8) AEGPAJBBGFH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGPAJBBGFH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AEGPAJBBGFH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GABBNABDJII& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GABBNABDJII&, ::System::Int32&))((::PBYTE)hIl2Cpp + AEGPAJBBGFH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GABBNABDJII& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GABBNABDJII&))((::PBYTE)hIl2Cpp + AEGPAJBBGFH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGPAJBBGFH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::AEGPAJBBGFH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AEGPAJBBGFH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AEGPAJBBGFH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AEGPAJBBGFH HIOJHAEDGJE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AEGPAJBBGFH EIFONLCJOPG)
	{
		return ((::AEGPAJBBGFH(*)(::FlatBuffers::ByteBuffer*, ::AEGPAJBBGFH))((::PBYTE)hIl2Cpp + AEGPAJBBGFH_HIOJHAEDGJE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGPAJBBGFH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::AEGPAJBBGFH HIOJHAEDGJE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AEGPAJBBGFH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AEGPAJBBGFH_HIOJHAEDGJE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};

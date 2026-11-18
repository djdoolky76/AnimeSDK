#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OLLMKOODAJM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define POGBCCFOJMJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define POGBCCFOJMJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x923E40)
#define POGBCCFOJMJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define POGBCCFOJMJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define POGBCCFOJMJ_LLEFDNNPLAC_1_OFFSET UNITYSDK_OFFSET(0x1EC8C8E0)
#define POGBCCFOJMJ_LLEFDNNPLAC_OFFSET UNITYSDK_OFFSET(0x1EC8C820)
#define POGBCCFOJMJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x923E80)
#define POGBCCFOJMJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x923E90)
#define POGBCCFOJMJ___INIT_OFFSET UNITYSDK_OFFSET(0x923E20)

inline static constexpr unsigned int POGBCCFOJMJ_TypeDefinitionIndex = 13425;

struct alignas(8) POGBCCFOJMJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + POGBCCFOJMJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POGBCCFOJMJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::POGBCCFOJMJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::POGBCCFOJMJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POGBCCFOJMJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OLLMKOODAJM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OLLMKOODAJM&))((::PBYTE)hIl2Cpp + POGBCCFOJMJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OLLMKOODAJM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OLLMKOODAJM&, ::System::Int32&))((::PBYTE)hIl2Cpp + POGBCCFOJMJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::POGBCCFOJMJ LLEFDNNPLAC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::POGBCCFOJMJ EIFONLCJOPG)
	{
		return ((::POGBCCFOJMJ(*)(::FlatBuffers::ByteBuffer*, ::POGBCCFOJMJ))((::PBYTE)hIl2Cpp + POGBCCFOJMJ_LLEFDNNPLAC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POGBCCFOJMJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POGBCCFOJMJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::POGBCCFOJMJ LLEFDNNPLAC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::POGBCCFOJMJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POGBCCFOJMJ_LLEFDNNPLAC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};

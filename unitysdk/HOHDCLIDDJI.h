#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LPMPNAHBIIO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HOHDCLIDDJI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HOHDCLIDDJI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x814770)
#define HOHDCLIDDJI_BMCHNNOOFME_1_OFFSET UNITYSDK_OFFSET(0x1B882FD0)
#define HOHDCLIDDJI_BMCHNNOOFME_OFFSET UNITYSDK_OFFSET(0x1B882D30)
#define HOHDCLIDDJI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HOHDCLIDDJI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HOHDCLIDDJI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x814760)
#define HOHDCLIDDJI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8147B0)
#define HOHDCLIDDJI___INIT_OFFSET UNITYSDK_OFFSET(0x814740)

inline static constexpr unsigned int HOHDCLIDDJI_TypeDefinitionIndex = 16131;

struct alignas(8) HOHDCLIDDJI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOHDCLIDDJI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HOHDCLIDDJI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HOHDCLIDDJI BMCHNNOOFME(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HOHDCLIDDJI EIFONLCJOPG)
	{
		return ((::HOHDCLIDDJI(*)(::FlatBuffers::ByteBuffer*, ::HOHDCLIDDJI))((::PBYTE)hIl2Cpp + HOHDCLIDDJI_BMCHNNOOFME_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LPMPNAHBIIO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LPMPNAHBIIO&, ::System::Int32&))((::PBYTE)hIl2Cpp + HOHDCLIDDJI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LPMPNAHBIIO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LPMPNAHBIIO&))((::PBYTE)hIl2Cpp + HOHDCLIDDJI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::HOHDCLIDDJI BMCHNNOOFME_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HOHDCLIDDJI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HOHDCLIDDJI_BMCHNNOOFME_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOHDCLIDDJI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::HOHDCLIDDJI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HOHDCLIDDJI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HOHDCLIDDJI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOHDCLIDDJI_PPOMNIFACOL_OFFSET))(this);
	}
};

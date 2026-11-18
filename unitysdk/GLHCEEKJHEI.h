#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PNBGGHAODBE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GLHCEEKJHEI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GLHCEEKJHEI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81B250)
#define GLHCEEKJHEI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GLHCEEKJHEI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GLHCEEKJHEI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81B240)
#define GLHCEEKJHEI_NKGIKPNBMPL_1_OFFSET UNITYSDK_OFFSET(0x1BACE090)
#define GLHCEEKJHEI_NKGIKPNBMPL_OFFSET UNITYSDK_OFFSET(0x1BACE020)
#define GLHCEEKJHEI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81B230)
#define GLHCEEKJHEI___INIT_OFFSET UNITYSDK_OFFSET(0x81B210)

inline static constexpr unsigned int GLHCEEKJHEI_TypeDefinitionIndex = 17196;

struct alignas(8) GLHCEEKJHEI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLHCEEKJHEI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLHCEEKJHEI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GLHCEEKJHEI NKGIKPNBMPL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GLHCEEKJHEI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLHCEEKJHEI_NKGIKPNBMPL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLHCEEKJHEI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PNBGGHAODBE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PNBGGHAODBE&))((::PBYTE)hIl2Cpp + GLHCEEKJHEI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PNBGGHAODBE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PNBGGHAODBE&, ::System::Int32&))((::PBYTE)hIl2Cpp + GLHCEEKJHEI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::GLHCEEKJHEI NKGIKPNBMPL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GLHCEEKJHEI EIFONLCJOPG)
	{
		return ((::GLHCEEKJHEI(*)(::FlatBuffers::ByteBuffer*, ::GLHCEEKJHEI))((::PBYTE)hIl2Cpp + GLHCEEKJHEI_NKGIKPNBMPL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLHCEEKJHEI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::GLHCEEKJHEI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GLHCEEKJHEI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLHCEEKJHEI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};

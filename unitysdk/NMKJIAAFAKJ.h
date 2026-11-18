#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BAPBPEMFLLF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NMKJIAAFAKJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NMKJIAAFAKJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x802B90)
#define NMKJIAAFAKJ_DJAFMODJOKK_1_OFFSET UNITYSDK_OFFSET(0x1AB19900)
#define NMKJIAAFAKJ_DJAFMODJOKK_OFFSET UNITYSDK_OFFSET(0x1AB19860)
#define NMKJIAAFAKJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NMKJIAAFAKJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NMKJIAAFAKJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x802B70)
#define NMKJIAAFAKJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x802B80)
#define NMKJIAAFAKJ___INIT_OFFSET UNITYSDK_OFFSET(0x802B50)

inline static constexpr unsigned int NMKJIAAFAKJ_TypeDefinitionIndex = 11667;

struct alignas(8) NMKJIAAFAKJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKJIAAFAKJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMKJIAAFAKJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BAPBPEMFLLF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BAPBPEMFLLF&, ::System::Int32&))((::PBYTE)hIl2Cpp + NMKJIAAFAKJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BAPBPEMFLLF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BAPBPEMFLLF&))((::PBYTE)hIl2Cpp + NMKJIAAFAKJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKJIAAFAKJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NMKJIAAFAKJ DJAFMODJOKK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NMKJIAAFAKJ EIFONLCJOPG)
	{
		return ((::NMKJIAAFAKJ(*)(::FlatBuffers::ByteBuffer*, ::NMKJIAAFAKJ))((::PBYTE)hIl2Cpp + NMKJIAAFAKJ_DJAFMODJOKK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::NMKJIAAFAKJ DJAFMODJOKK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NMKJIAAFAKJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMKJIAAFAKJ_DJAFMODJOKK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKJIAAFAKJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::NMKJIAAFAKJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NMKJIAAFAKJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMKJIAAFAKJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};

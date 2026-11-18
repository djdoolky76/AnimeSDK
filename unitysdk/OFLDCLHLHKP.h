#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MPKCKILEIHA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OFLDCLHLHKP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OFLDCLHLHKP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x85E1A0)
#define OFLDCLHLHKP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OFLDCLHLHKP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OFLDCLHLHKP_IJECEDGHBMJ_1_OFFSET UNITYSDK_OFFSET(0x1CCFA900)
#define OFLDCLHLHKP_IJECEDGHBMJ_OFFSET UNITYSDK_OFFSET(0x1CCFA600)
#define OFLDCLHLHKP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x85E180)
#define OFLDCLHLHKP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x85E190)
#define OFLDCLHLHKP___INIT_OFFSET UNITYSDK_OFFSET(0x85E160)

inline static constexpr unsigned int OFLDCLHLHKP_TypeDefinitionIndex = 12031;

struct alignas(8) OFLDCLHLHKP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLDCLHLHKP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OFLDCLHLHKP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OFLDCLHLHKP IJECEDGHBMJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OFLDCLHLHKP EIFONLCJOPG)
	{
		return ((::OFLDCLHLHKP(*)(::FlatBuffers::ByteBuffer*, ::OFLDCLHLHKP))((::PBYTE)hIl2Cpp + OFLDCLHLHKP_IJECEDGHBMJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MPKCKILEIHA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MPKCKILEIHA&, ::System::Int32&))((::PBYTE)hIl2Cpp + OFLDCLHLHKP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLDCLHLHKP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::OFLDCLHLHKP IJECEDGHBMJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OFLDCLHLHKP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OFLDCLHLHKP_IJECEDGHBMJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MPKCKILEIHA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MPKCKILEIHA&))((::PBYTE)hIl2Cpp + OFLDCLHLHKP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLDCLHLHKP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::OFLDCLHLHKP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OFLDCLHLHKP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OFLDCLHLHKP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};

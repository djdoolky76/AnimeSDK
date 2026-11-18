#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DFGDFOJIIAC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LMLHNBJBJCO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LMLHNBJBJCO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x804BD0)
#define LMLHNBJBJCO_FIILGPCOGFE_1_OFFSET UNITYSDK_OFFSET(0x1AD65200)
#define LMLHNBJBJCO_FIILGPCOGFE_OFFSET UNITYSDK_OFFSET(0x1AD651A0)
#define LMLHNBJBJCO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LMLHNBJBJCO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LMLHNBJBJCO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x804C10)
#define LMLHNBJBJCO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x804C20)
#define LMLHNBJBJCO___INIT_OFFSET UNITYSDK_OFFSET(0x804BB0)

inline static constexpr unsigned int LMLHNBJBJCO_TypeDefinitionIndex = 12251;

struct alignas(8) LMLHNBJBJCO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMLHNBJBJCO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LMLHNBJBJCO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::LMLHNBJBJCO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LMLHNBJBJCO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LMLHNBJBJCO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMLHNBJBJCO_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DFGDFOJIIAC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DFGDFOJIIAC&, ::System::Int32&))((::PBYTE)hIl2Cpp + LMLHNBJBJCO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DFGDFOJIIAC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DFGDFOJIIAC&))((::PBYTE)hIl2Cpp + LMLHNBJBJCO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMLHNBJBJCO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LMLHNBJBJCO FIILGPCOGFE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LMLHNBJBJCO EIFONLCJOPG)
	{
		return ((::LMLHNBJBJCO(*)(::FlatBuffers::ByteBuffer*, ::LMLHNBJBJCO))((::PBYTE)hIl2Cpp + LMLHNBJBJCO_FIILGPCOGFE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::LMLHNBJBJCO FIILGPCOGFE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LMLHNBJBJCO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LMLHNBJBJCO_FIILGPCOGFE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};

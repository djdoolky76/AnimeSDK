#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LJHMFJBCLIG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PLGDKMKHDKG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PLGDKMKHDKG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x938410)
#define PLGDKMKHDKG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PLGDKMKHDKG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PLGDKMKHDKG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x938450)
#define PLGDKMKHDKG_OFKHINHJCMN_1_OFFSET UNITYSDK_OFFSET(0x1EE08390)
#define PLGDKMKHDKG_OFKHINHJCMN_OFFSET UNITYSDK_OFFSET(0x1EE08320)
#define PLGDKMKHDKG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x938400)
#define PLGDKMKHDKG___INIT_OFFSET UNITYSDK_OFFSET(0x9383E0)

inline static constexpr unsigned int PLGDKMKHDKG_TypeDefinitionIndex = 16820;

struct alignas(8) PLGDKMKHDKG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLGDKMKHDKG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLGDKMKHDKG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PLGDKMKHDKG OFKHINHJCMN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PLGDKMKHDKG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLGDKMKHDKG_OFKHINHJCMN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLGDKMKHDKG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::PLGDKMKHDKG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PLGDKMKHDKG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLGDKMKHDKG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LJHMFJBCLIG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LJHMFJBCLIG&))((::PBYTE)hIl2Cpp + PLGDKMKHDKG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LJHMFJBCLIG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LJHMFJBCLIG&, ::System::Int32&))((::PBYTE)hIl2Cpp + PLGDKMKHDKG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLGDKMKHDKG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PLGDKMKHDKG OFKHINHJCMN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PLGDKMKHDKG EIFONLCJOPG)
	{
		return ((::PLGDKMKHDKG(*)(::FlatBuffers::ByteBuffer*, ::PLGDKMKHDKG))((::PBYTE)hIl2Cpp + PLGDKMKHDKG_OFKHINHJCMN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};

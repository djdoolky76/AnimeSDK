#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EOGAHHMKPAD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ANNJMFALHLJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ANNJMFALHLJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x816200)
#define ANNJMFALHLJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ANNJMFALHLJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ANNJMFALHLJ_KKJIGFMFIOD_1_OFFSET UNITYSDK_OFFSET(0x1B989400)
#define ANNJMFALHLJ_KKJIGFMFIOD_OFFSET UNITYSDK_OFFSET(0x1B989390)
#define ANNJMFALHLJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8161F0)
#define ANNJMFALHLJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x816240)
#define ANNJMFALHLJ___INIT_OFFSET UNITYSDK_OFFSET(0x8161D0)

inline static constexpr unsigned int ANNJMFALHLJ_TypeDefinitionIndex = 12541;

struct alignas(8) ANNJMFALHLJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNJMFALHLJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ANNJMFALHLJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::ANNJMFALHLJ KKJIGFMFIOD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ANNJMFALHLJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ANNJMFALHLJ_KKJIGFMFIOD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNJMFALHLJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::ANNJMFALHLJ KKJIGFMFIOD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ANNJMFALHLJ EIFONLCJOPG)
	{
		return ((::ANNJMFALHLJ(*)(::FlatBuffers::ByteBuffer*, ::ANNJMFALHLJ))((::PBYTE)hIl2Cpp + ANNJMFALHLJ_KKJIGFMFIOD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EOGAHHMKPAD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EOGAHHMKPAD&))((::PBYTE)hIl2Cpp + ANNJMFALHLJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EOGAHHMKPAD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EOGAHHMKPAD&, ::System::Int32&))((::PBYTE)hIl2Cpp + ANNJMFALHLJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::ANNJMFALHLJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ANNJMFALHLJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ANNJMFALHLJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNJMFALHLJ_PPOMNIFACOL_OFFSET))(this);
	}
};

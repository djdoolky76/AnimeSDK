#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JNMOAPDBLAP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ENOOFGOEKJJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ENOOFGOEKJJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x789CD0)
#define ENOOFGOEKJJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ENOOFGOEKJJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ENOOFGOEKJJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x789D20)
#define ENOOFGOEKJJ_PHPPHPNNEDH_1_OFFSET UNITYSDK_OFFSET(0x1662E7C0)
#define ENOOFGOEKJJ_PHPPHPNNEDH_OFFSET UNITYSDK_OFFSET(0x1662E700)
#define ENOOFGOEKJJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x789D10)
#define ENOOFGOEKJJ___INIT_OFFSET UNITYSDK_OFFSET(0x789CB0)

inline static constexpr unsigned int ENOOFGOEKJJ_TypeDefinitionIndex = 10205;

struct alignas(8) ENOOFGOEKJJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOOFGOEKJJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ENOOFGOEKJJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::ENOOFGOEKJJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ENOOFGOEKJJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ENOOFGOEKJJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::ENOOFGOEKJJ PHPPHPNNEDH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ENOOFGOEKJJ EIFONLCJOPG)
	{
		return ((::ENOOFGOEKJJ(*)(::FlatBuffers::ByteBuffer*, ::ENOOFGOEKJJ))((::PBYTE)hIl2Cpp + ENOOFGOEKJJ_PHPPHPNNEDH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOOFGOEKJJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::ENOOFGOEKJJ PHPPHPNNEDH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ENOOFGOEKJJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ENOOFGOEKJJ_PHPPHPNNEDH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JNMOAPDBLAP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JNMOAPDBLAP&))((::PBYTE)hIl2Cpp + ENOOFGOEKJJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JNMOAPDBLAP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JNMOAPDBLAP&, ::System::Int32&))((::PBYTE)hIl2Cpp + ENOOFGOEKJJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOOFGOEKJJ_GHKKNCCLPAN_OFFSET))(this);
	}
};

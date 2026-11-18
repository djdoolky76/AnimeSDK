#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GKBKCDLGGFA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80D9F0)
#define GKBKCDLGGFA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GKBKCDLGGFA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GKBKCDLGGFA_HJPGNNKHMJB_1_OFFSET UNITYSDK_OFFSET(0x1B4D61E0)
#define GKBKCDLGGFA_HJPGNNKHMJB_OFFSET UNITYSDK_OFFSET(0x1B4D6170)
#define GKBKCDLGGFA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80DA30)
#define GKBKCDLGGFA___INIT_OFFSET UNITYSDK_OFFSET(0x80D9D0)

inline static constexpr unsigned int GKBKCDLGGFA_TypeDefinitionIndex = 17601;

struct alignas(8) GKBKCDLGGFA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKBKCDLGGFA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GKBKCDLGGFA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GKBKCDLGGFA HJPGNNKHMJB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GKBKCDLGGFA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GKBKCDLGGFA_HJPGNNKHMJB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::GKBKCDLGGFA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GKBKCDLGGFA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GKBKCDLGGFA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKBKCDLGGFA_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKBKCDLGGFA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::GKBKCDLGGFA HJPGNNKHMJB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GKBKCDLGGFA EIFONLCJOPG)
	{
		return ((::GKBKCDLGGFA(*)(::FlatBuffers::ByteBuffer*, ::GKBKCDLGGFA))((::PBYTE)hIl2Cpp + GKBKCDLGGFA_HJPGNNKHMJB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};

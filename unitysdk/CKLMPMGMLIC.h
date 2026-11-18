#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FLKCLEEJBMI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CKLMPMGMLIC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CKLMPMGMLIC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8073E0)
#define CKLMPMGMLIC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CKLMPMGMLIC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CKLMPMGMLIC_LJILDFGAKKK_1_OFFSET UNITYSDK_OFFSET(0x1ADBD440)
#define CKLMPMGMLIC_LJILDFGAKKK_OFFSET UNITYSDK_OFFSET(0x1ADBD270)
#define CKLMPMGMLIC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x807420)
#define CKLMPMGMLIC___INIT_OFFSET UNITYSDK_OFFSET(0x8073C0)

inline static constexpr unsigned int CKLMPMGMLIC_TypeDefinitionIndex = 10982;

struct alignas(8) CKLMPMGMLIC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKLMPMGMLIC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CKLMPMGMLIC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::CKLMPMGMLIC LJILDFGAKKK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CKLMPMGMLIC EIFONLCJOPG)
	{
		return ((::CKLMPMGMLIC(*)(::FlatBuffers::ByteBuffer*, ::CKLMPMGMLIC))((::PBYTE)hIl2Cpp + CKLMPMGMLIC_LJILDFGAKKK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FLKCLEEJBMI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FLKCLEEJBMI&))((::PBYTE)hIl2Cpp + CKLMPMGMLIC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::CKLMPMGMLIC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CKLMPMGMLIC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CKLMPMGMLIC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKLMPMGMLIC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKLMPMGMLIC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::CKLMPMGMLIC LJILDFGAKKK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CKLMPMGMLIC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CKLMPMGMLIC_LJILDFGAKKK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};

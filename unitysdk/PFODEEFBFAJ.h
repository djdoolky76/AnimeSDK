#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CDPJCCAIEDP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PFODEEFBFAJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PFODEEFBFAJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x938080)
#define PFODEEFBFAJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PFODEEFBFAJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PFODEEFBFAJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x938070)
#define PFODEEFBFAJ_LLIGKGAKDNP_1_OFFSET UNITYSDK_OFFSET(0x1EDFFD00)
#define PFODEEFBFAJ_LLIGKGAKDNP_OFFSET UNITYSDK_OFFSET(0x1EDFFCA0)
#define PFODEEFBFAJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x9380C0)
#define PFODEEFBFAJ___INIT_OFFSET UNITYSDK_OFFSET(0x938050)

inline static constexpr unsigned int PFODEEFBFAJ_TypeDefinitionIndex = 15838;

struct alignas(8) PFODEEFBFAJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFODEEFBFAJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFODEEFBFAJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CDPJCCAIEDP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CDPJCCAIEDP&, ::System::Int32&))((::PBYTE)hIl2Cpp + PFODEEFBFAJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CDPJCCAIEDP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CDPJCCAIEDP&))((::PBYTE)hIl2Cpp + PFODEEFBFAJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::PFODEEFBFAJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PFODEEFBFAJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFODEEFBFAJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PFODEEFBFAJ LLIGKGAKDNP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PFODEEFBFAJ EIFONLCJOPG)
	{
		return ((::PFODEEFBFAJ(*)(::FlatBuffers::ByteBuffer*, ::PFODEEFBFAJ))((::PBYTE)hIl2Cpp + PFODEEFBFAJ_LLIGKGAKDNP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::PFODEEFBFAJ LLIGKGAKDNP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PFODEEFBFAJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFODEEFBFAJ_LLIGKGAKDNP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFODEEFBFAJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFODEEFBFAJ_PPOMNIFACOL_OFFSET))(this);
	}
};

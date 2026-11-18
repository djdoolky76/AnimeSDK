#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AHJGODPIDOE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JHKOPAEBLBA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JHKOPAEBLBA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A8AE0)
#define JHKOPAEBLBA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JHKOPAEBLBA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JHKOPAEBLBA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A8AD0)
#define JHKOPAEBLBA_NKEEOHCGEFD_1_OFFSET UNITYSDK_OFFSET(0x1748B8D0)
#define JHKOPAEBLBA_NKEEOHCGEFD_OFFSET UNITYSDK_OFFSET(0x1748B860)
#define JHKOPAEBLBA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A8B20)
#define JHKOPAEBLBA___INIT_OFFSET UNITYSDK_OFFSET(0x7A8AB0)

inline static constexpr unsigned int JHKOPAEBLBA_TypeDefinitionIndex = 15847;

struct alignas(8) JHKOPAEBLBA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKOPAEBLBA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHKOPAEBLBA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AHJGODPIDOE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AHJGODPIDOE&, ::System::Int32&))((::PBYTE)hIl2Cpp + JHKOPAEBLBA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::JHKOPAEBLBA NKEEOHCGEFD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JHKOPAEBLBA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHKOPAEBLBA_NKEEOHCGEFD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::JHKOPAEBLBA NKEEOHCGEFD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JHKOPAEBLBA EIFONLCJOPG)
	{
		return ((::JHKOPAEBLBA(*)(::FlatBuffers::ByteBuffer*, ::JHKOPAEBLBA))((::PBYTE)hIl2Cpp + JHKOPAEBLBA_NKEEOHCGEFD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKOPAEBLBA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::JHKOPAEBLBA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JHKOPAEBLBA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHKOPAEBLBA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AHJGODPIDOE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AHJGODPIDOE&))((::PBYTE)hIl2Cpp + JHKOPAEBLBA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKOPAEBLBA_PPOMNIFACOL_OFFSET))(this);
	}
};

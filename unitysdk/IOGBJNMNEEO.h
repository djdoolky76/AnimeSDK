#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IADBHDGDKOE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IOGBJNMNEEO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IOGBJNMNEEO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x77A990)
#define IOGBJNMNEEO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IOGBJNMNEEO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IOGBJNMNEEO_KNCGIPFAHBH_1_OFFSET UNITYSDK_OFFSET(0x1610ED10)
#define IOGBJNMNEEO_KNCGIPFAHBH_OFFSET UNITYSDK_OFFSET(0x1610ECA0)
#define IOGBJNMNEEO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x77A980)
#define IOGBJNMNEEO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x77A9D0)
#define IOGBJNMNEEO___INIT_OFFSET UNITYSDK_OFFSET(0x77A960)

inline static constexpr unsigned int IOGBJNMNEEO_TypeDefinitionIndex = 13143;

struct alignas(8) IOGBJNMNEEO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOGBJNMNEEO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOGBJNMNEEO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IADBHDGDKOE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IADBHDGDKOE&, ::System::Int32&))((::PBYTE)hIl2Cpp + IOGBJNMNEEO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::IOGBJNMNEEO KNCGIPFAHBH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IOGBJNMNEEO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOGBJNMNEEO_KNCGIPFAHBH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IADBHDGDKOE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IADBHDGDKOE&))((::PBYTE)hIl2Cpp + IOGBJNMNEEO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::IOGBJNMNEEO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IOGBJNMNEEO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOGBJNMNEEO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOGBJNMNEEO_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOGBJNMNEEO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::IOGBJNMNEEO KNCGIPFAHBH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IOGBJNMNEEO EIFONLCJOPG)
	{
		return ((::IOGBJNMNEEO(*)(::FlatBuffers::ByteBuffer*, ::IOGBJNMNEEO))((::PBYTE)hIl2Cpp + IOGBJNMNEEO_KNCGIPFAHBH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};

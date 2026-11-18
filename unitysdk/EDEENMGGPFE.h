#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MOJELINEEHB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EDEENMGGPFE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EDEENMGGPFE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F2400)
#define EDEENMGGPFE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EDEENMGGPFE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EDEENMGGPFE_IBHDFGKJBJL_1_OFFSET UNITYSDK_OFFSET(0x19F467A0)
#define EDEENMGGPFE_IBHDFGKJBJL_OFFSET UNITYSDK_OFFSET(0x19F46500)
#define EDEENMGGPFE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F23F0)
#define EDEENMGGPFE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F23E0)
#define EDEENMGGPFE___INIT_OFFSET UNITYSDK_OFFSET(0x7F23C0)

inline static constexpr unsigned int EDEENMGGPFE_TypeDefinitionIndex = 11572;

struct alignas(8) EDEENMGGPFE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEENMGGPFE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EDEENMGGPFE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEENMGGPFE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::EDEENMGGPFE IBHDFGKJBJL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EDEENMGGPFE EIFONLCJOPG)
	{
		return ((::EDEENMGGPFE(*)(::FlatBuffers::ByteBuffer*, ::EDEENMGGPFE))((::PBYTE)hIl2Cpp + EDEENMGGPFE_IBHDFGKJBJL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MOJELINEEHB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MOJELINEEHB&, ::System::Int32&))((::PBYTE)hIl2Cpp + EDEENMGGPFE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MOJELINEEHB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MOJELINEEHB&))((::PBYTE)hIl2Cpp + EDEENMGGPFE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::EDEENMGGPFE IBHDFGKJBJL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EDEENMGGPFE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EDEENMGGPFE_IBHDFGKJBJL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::EDEENMGGPFE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EDEENMGGPFE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EDEENMGGPFE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEENMGGPFE_GHKKNCCLPAN_OFFSET))(this);
	}
};

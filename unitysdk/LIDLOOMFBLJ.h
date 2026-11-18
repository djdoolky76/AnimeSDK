#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EMDBGJOOEBF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LIDLOOMFBLJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LIDLOOMFBLJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E5370)
#define LIDLOOMFBLJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LIDLOOMFBLJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LIDLOOMFBLJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E5350)
#define LIDLOOMFBLJ_OJMDMNCODAJ_1_OFFSET UNITYSDK_OFFSET(0x195689F0)
#define LIDLOOMFBLJ_OJMDMNCODAJ_OFFSET UNITYSDK_OFFSET(0x195686F0)
#define LIDLOOMFBLJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E5360)
#define LIDLOOMFBLJ___INIT_OFFSET UNITYSDK_OFFSET(0x7E5330)

inline static constexpr unsigned int LIDLOOMFBLJ_TypeDefinitionIndex = 16921;

struct alignas(8) LIDLOOMFBLJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIDLOOMFBLJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LIDLOOMFBLJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LIDLOOMFBLJ OJMDMNCODAJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LIDLOOMFBLJ EIFONLCJOPG)
	{
		return ((::LIDLOOMFBLJ(*)(::FlatBuffers::ByteBuffer*, ::LIDLOOMFBLJ))((::PBYTE)hIl2Cpp + LIDLOOMFBLJ_OJMDMNCODAJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EMDBGJOOEBF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EMDBGJOOEBF&, ::System::Int32&))((::PBYTE)hIl2Cpp + LIDLOOMFBLJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EMDBGJOOEBF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EMDBGJOOEBF&))((::PBYTE)hIl2Cpp + LIDLOOMFBLJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIDLOOMFBLJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIDLOOMFBLJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::LIDLOOMFBLJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LIDLOOMFBLJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LIDLOOMFBLJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LIDLOOMFBLJ OJMDMNCODAJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LIDLOOMFBLJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LIDLOOMFBLJ_OJMDMNCODAJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};

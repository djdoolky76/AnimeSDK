#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ODFDANDAOKH.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JJNECMKEIEB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x77AE70)
#define JJNECMKEIEB_ECCLJJKMFPD_OFFSET UNITYSDK_OFFSET(0x77AE50)
#define JJNECMKEIEB_EFBECEHHGOO_OFFSET UNITYSDK_OFFSET(0x760C50)
#define JJNECMKEIEB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JJNECMKEIEB_GFGABIOOFFC_1_OFFSET UNITYSDK_OFFSET(0x16118CA0)
#define JJNECMKEIEB_GFGABIOOFFC_OFFSET UNITYSDK_OFFSET(0x16118A50)
#define JJNECMKEIEB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JJNECMKEIEB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x77AEB0)
#define JJNECMKEIEB___INIT_OFFSET UNITYSDK_OFFSET(0x77AE30)

inline static constexpr unsigned int JJNECMKEIEB_TypeDefinitionIndex = 13691;

struct alignas(8) JJNECMKEIEB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNECMKEIEB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JJNECMKEIEB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Nullable_1<::ODFDANDAOKH> EFBECEHHGOO(::System::Int32 HPMEONKHFGG)
	{
		return ((::System::Nullable_1<::ODFDANDAOKH>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JJNECMKEIEB_EFBECEHHGOO_OFFSET))(this, HPMEONKHFGG);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNECMKEIEB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::JJNECMKEIEB GFGABIOOFFC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JJNECMKEIEB EIFONLCJOPG)
	{
		return ((::JJNECMKEIEB(*)(::FlatBuffers::ByteBuffer*, ::JJNECMKEIEB))((::PBYTE)hIl2Cpp + JJNECMKEIEB_GFGABIOOFFC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Nullable_1<::ODFDANDAOKH> ECCLJJKMFPD(::System::Int32 MCOHLHMKLIP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Nullable_1<::ODFDANDAOKH>(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JJNECMKEIEB_ECCLJJKMFPD_OFFSET))(this, MCOHLHMKLIP, ABHBKFJKINO);
	}

	/*
	::JJNECMKEIEB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JJNECMKEIEB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JJNECMKEIEB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNECMKEIEB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::JJNECMKEIEB GFGABIOOFFC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JJNECMKEIEB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JJNECMKEIEB_GFGABIOOFFC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};

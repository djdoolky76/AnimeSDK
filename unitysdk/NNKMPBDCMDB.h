#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NNKMPBDCMDB_AEAJPKILALJ_OFFSET UNITYSDK_OFFSET(0x754970)
#define NNKMPBDCMDB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NNKMPBDCMDB_FGIKGPCCGJD_OFFSET UNITYSDK_OFFSET(0x755C70)
#define NNKMPBDCMDB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NNKMPBDCMDB_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define NNKMPBDCMDB_ILPAMEMAMLE_OFFSET UNITYSDK_OFFSET(0x758780)
#define NNKMPBDCMDB_KPOEDBMNMKF_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define NNKMPBDCMDB_LCIFIGOIGJI_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define NNKMPBDCMDB_LEHJFMAMFJO_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define NNKMPBDCMDB_LHLJOIHKDAL_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define NNKMPBDCMDB_MGOKNDCGOEI_OFFSET UNITYSDK_OFFSET(0x755890)
#define NNKMPBDCMDB_MIIKCNLJJPG_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define NNKMPBDCMDB_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NNKMPBDCMDB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BAAC220)
#define NNKMPBDCMDB_OEBELJGDNCE_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define NNKMPBDCMDB_PBDHGENIPKH_OFFSET UNITYSDK_OFFSET(0x7587D0)
#define NNKMPBDCMDB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NNKMPBDCMDB_TypeDefinitionIndex = 17218;

struct alignas(4) NNKMPBDCMDB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKMPBDCMDB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NNKMPBDCMDB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 AEAJPKILALJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKMPBDCMDB_AEAJPKILALJ_OFFSET))(this);
	}

	::System::Int32 MGOKNDCGOEI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKMPBDCMDB_MGOKNDCGOEI_OFFSET))(this);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKMPBDCMDB_NKCNGLADFNA_OFFSET))(this);
	}

	::System::String* LEHJFMAMFJO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKMPBDCMDB_LEHJFMAMFJO_OFFSET))(this);
	}

	/*
	static ::NNKMPBDCMDB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NNKMPBDCMDB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NNKMPBDCMDB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* OEBELJGDNCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKMPBDCMDB_OEBELJGDNCE_OFFSET))(this);
	}

	::System::Int32 LHLJOIHKDAL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKMPBDCMDB_LHLJOIHKDAL_OFFSET))(this);
	}

	::System::Int32 FGIKGPCCGJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKMPBDCMDB_FGIKGPCCGJD_OFFSET))(this);
	}

	::System::Int32 PBDHGENIPKH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKMPBDCMDB_PBDHGENIPKH_OFFSET))(this);
	}

	::System::Int32 KPOEDBMNMKF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKMPBDCMDB_KPOEDBMNMKF_OFFSET))(this);
	}

	::System::Int32 ILPAMEMAMLE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKMPBDCMDB_ILPAMEMAMLE_OFFSET))(this);
	}

	/*
	::NNKMPBDCMDB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NNKMPBDCMDB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NNKMPBDCMDB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* MIIKCNLJJPG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKMPBDCMDB_MIIKCNLJJPG_OFFSET))(this);
	}

	::System::Int32 LCIFIGOIGJI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKMPBDCMDB_LCIFIGOIGJI_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKMPBDCMDB_GKBAJJACIEA_OFFSET))(this);
	}
};

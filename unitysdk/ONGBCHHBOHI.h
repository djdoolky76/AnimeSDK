#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ONGBCHHBOHI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ONGBCHHBOHI_BJLHMGFNJPC_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define ONGBCHHBOHI_CHJMLKMCIIF_OFFSET UNITYSDK_OFFSET(0x755C70)
#define ONGBCHHBOHI_DFAELPCGFDB_OFFSET UNITYSDK_OFFSET(0x755190)
#define ONGBCHHBOHI_FDCILJDCLDK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ONGBCHHBOHI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ONGBCHHBOHI_GHJFCLGGHLF_OFFSET UNITYSDK_OFFSET(0x756B10)
#define ONGBCHHBOHI_HGNCFAOJDON_OFFSET UNITYSDK_OFFSET(0x755890)
#define ONGBCHHBOHI_JPPAAFLOKID_OFFSET UNITYSDK_OFFSET(0x757190)
#define ONGBCHHBOHI_KCGKBEECKFO_OFFSET UNITYSDK_OFFSET(0x754F10)
#define ONGBCHHBOHI_MCBGBKMHOEK_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define ONGBCHHBOHI_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x758780)
#define ONGBCHHBOHI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BF82840)
#define ONGBCHHBOHI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ONGBCHHBOHI_TypeDefinitionIndex = 12664;

struct alignas(4) ONGBCHHBOHI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGBCHHBOHI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONGBCHHBOHI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HGNCFAOJDON()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGBCHHBOHI_HGNCFAOJDON_OFFSET))(this);
	}

	::System::String* JPPAAFLOKID()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGBCHHBOHI_JPPAAFLOKID_OFFSET))(this);
	}

	/*
	static ::ONGBCHHBOHI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ONGBCHHBOHI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ONGBCHHBOHI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 DFAELPCGFDB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGBCHHBOHI_DFAELPCGFDB_OFFSET))(this);
	}

	::System::Int32 FDCILJDCLDK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGBCHHBOHI_FDCILJDCLDK_OFFSET))(this);
	}

	/*
	::ONGBCHHBOHI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ONGBCHHBOHI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONGBCHHBOHI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* KCGKBEECKFO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGBCHHBOHI_KCGKBEECKFO_OFFSET))(this);
	}

	::System::String* BJLHMGFNJPC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGBCHHBOHI_BJLHMGFNJPC_OFFSET))(this);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGBCHHBOHI_NFKFHJBEPGD_OFFSET))(this);
	}

	::System::Int32 CHJMLKMCIIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGBCHHBOHI_CHJMLKMCIIF_OFFSET))(this);
	}

	::System::String* MCBGBKMHOEK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGBCHHBOHI_MCBGBKMHOEK_OFFSET))(this);
	}

	::System::String* GHJFCLGGHLF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGBCHHBOHI_GHJFCLGGHLF_OFFSET))(this);
	}
};
